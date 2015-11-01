using DemoControl;
using System;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;


namespace DemoUI
{
    /// <summary>
    /// Code behind for the main page.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            if (!String.IsNullOrWhiteSpace(InputTxt.Text))
            {
                Msg.Text = SayHelloCtrl.SayHelloFromRust(InputTxt.Text);
            }
        }
    }
}
