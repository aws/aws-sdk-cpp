/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcHdIntraCbgProfileClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace XavcHdIntraCbgProfileClassMapper
      {

        static const int CLASS_50_HASH = HashingUtils::HashString("CLASS_50");
        static const int CLASS_100_HASH = HashingUtils::HashString("CLASS_100");
        static const int CLASS_200_HASH = HashingUtils::HashString("CLASS_200");


        XavcHdIntraCbgProfileClass GetXavcHdIntraCbgProfileClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLASS_50_HASH)
          {
            return XavcHdIntraCbgProfileClass::CLASS_50;
          }
          else if (hashCode == CLASS_100_HASH)
          {
            return XavcHdIntraCbgProfileClass::CLASS_100;
          }
          else if (hashCode == CLASS_200_HASH)
          {
            return XavcHdIntraCbgProfileClass::CLASS_200;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcHdIntraCbgProfileClass>(hashCode);
          }

          return XavcHdIntraCbgProfileClass::NOT_SET;
        }

        Aws::String GetNameForXavcHdIntraCbgProfileClass(XavcHdIntraCbgProfileClass enumValue)
        {
          switch(enumValue)
          {
          case XavcHdIntraCbgProfileClass::NOT_SET:
            return {};
          case XavcHdIntraCbgProfileClass::CLASS_50:
            return "CLASS_50";
          case XavcHdIntraCbgProfileClass::CLASS_100:
            return "CLASS_100";
          case XavcHdIntraCbgProfileClass::CLASS_200:
            return "CLASS_200";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcHdIntraCbgProfileClassMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
