using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DemoControl
{
    public sealed class SayHelloCtrl
    {
        public static string SayHello(string name)
        {
            return $"Hello {name}";
        }
    }
}
