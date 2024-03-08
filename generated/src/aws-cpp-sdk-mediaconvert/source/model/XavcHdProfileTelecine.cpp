/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcHdProfileTelecine.h>
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
      namespace XavcHdProfileTelecineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HARD_HASH = HashingUtils::HashString("HARD");


        XavcHdProfileTelecine GetXavcHdProfileTelecineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return XavcHdProfileTelecine::NONE;
          }
          else if (hashCode == HARD_HASH)
          {
            return XavcHdProfileTelecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcHdProfileTelecine>(hashCode);
          }

          return XavcHdProfileTelecine::NOT_SET;
        }

        Aws::String GetNameForXavcHdProfileTelecine(XavcHdProfileTelecine enumValue)
        {
          switch(enumValue)
          {
          case XavcHdProfileTelecine::NOT_SET:
            return {};
          case XavcHdProfileTelecine::NONE:
            return "NONE";
          case XavcHdProfileTelecine::HARD:
            return "HARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcHdProfileTelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
