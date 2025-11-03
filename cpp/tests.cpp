/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:55:54 by mgavornik         #+#    #+#             */
/*   Updated: 2025/08/21 13:08:26 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int gl_var = 2;
int gl_func(void ) { return 4; }

namespace Foo {
    int gl_var = 3;
    int gl_func(void ) { return 5; }
}

namespace Bar {
    int gl_var = 4;
    int gl_func(void ) { return 6; }
}

namespace Baz = Bar;

int main(void)
{
    gl_var = Foo::gl_var + Bar::gl_var;
    
    printf("Foo::gl_var = %d\n", Foo::gl_var);
    printf("Foo::gl_func() = %d\n", Foo::gl_func());
    printf("Bar::gl_var = %d\n", Bar::gl_var);
    printf("Bar::gl_func() = %d\n", Bar::gl_func());
    printf("Baz::gl_var = %d\n", Baz::gl_var);
    printf("Baz::gl_func() = %d\n", Baz::gl_func());
    printf("gl_var = %d\n", ::gl_var);
    printf("gl_func() = %d\n", ::gl_func());
     
    printf("%d\n", gl_func() + Foo::gl_func() + Bar::gl_func());
    int result = gl_func() + Foo::gl_func() + Bar::gl_func() + 10;

    printf("%d\n", result);
    return 0;
}