#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;

//if hash array has to include only lowercase or uppercase
int hash[26]={0};
for(int i=0;i<s.size();i++){
	hash[s[i]-'a']++;
}

 /*
hashFunction(856+6(2546)){
	void main() {
  Widget _wrapWidgetWithMaterialApp({required Widget colorCard}) {
    return TestMaterialApp(home: Builder(builder: (BuildContext context) {
      SizeConfig().init(context);
      return colorCard;
    }));
  }
  {


  import 'package:at_common_flutter/at_common_flutter.dart';
import 'package:at_theme_flutter/src/widgets/color_card.dart';

import 'package:flutter/material.dart';
import 'package:flutter_test/flutter_test.dart';

import '../test_material_app.dart';

void main() {
  Widget _wrapWidgetWithMaterialApp({required Widget colorCard}) {
    return TestMaterialApp(home: Builder(builder: (BuildContext context) {
      SizeConfig().init(context);
      return colorCard;
    }));
  }

  /// Functional test cases for Color Card Widget
  group('Color Card Widget Tests:', () {
    // Test Case to Check Color Card is displayed
    final colorCard = ColorCard(color: Colors.orange, isSelected: true);
    testWidgets("Color Card is displayed", (WidgetTester tester) async {
      await tester.pumpWidget(
          _wrapWidgetWithMaterialApp(colorCard: colorCard));
      expect(find.byType(ColorCard), findsOneWidget);
    });
  });
}

  }

}*/


int q;
cin>>q;
while(q--){
	char c;
	cin>>c;
cout<<hash[c-'a']<<endl;

}


}