/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcProfile.h>
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
      namespace XavcProfileMapper
      {

        static const int XAVC_HD_INTRA_CBG_HASH = HashingUtils::HashString("XAVC_HD_INTRA_CBG");
        static const int XAVC_4K_INTRA_CBG_HASH = HashingUtils::HashString("XAVC_4K_INTRA_CBG");
        static const int XAVC_4K_INTRA_VBR_HASH = HashingUtils::HashString("XAVC_4K_INTRA_VBR");
        static const int XAVC_HD_HASH = HashingUtils::HashString("XAVC_HD");
        static const int XAVC_4K_HASH = HashingUtils::HashString("XAVC_4K");


        XavcProfile GetXavcProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == XAVC_HD_INTRA_CBG_HASH)
          {
            return XavcProfile::XAVC_HD_INTRA_CBG;
          }
          else if (hashCode == XAVC_4K_INTRA_CBG_HASH)
          {
            return XavcProfile::XAVC_4K_INTRA_CBG;
          }
          else if (hashCode == XAVC_4K_INTRA_VBR_HASH)
          {
            return XavcProfile::XAVC_4K_INTRA_VBR;
          }
          else if (hashCode == XAVC_HD_HASH)
          {
            return XavcProfile::XAVC_HD;
          }
          else if (hashCode == XAVC_4K_HASH)
          {
            return XavcProfile::XAVC_4K;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcProfile>(hashCode);
          }

          return XavcProfile::NOT_SET;
        }

        Aws::String GetNameForXavcProfile(XavcProfile enumValue)
        {
          switch(enumValue)
          {
          case XavcProfile::NOT_SET:
            return {};
          case XavcProfile::XAVC_HD_INTRA_CBG:
            return "XAVC_HD_INTRA_CBG";
          case XavcProfile::XAVC_4K_INTRA_CBG:
            return "XAVC_4K_INTRA_CBG";
          case XavcProfile::XAVC_4K_INTRA_VBR:
            return "XAVC_4K_INTRA_VBR";
          case XavcProfile::XAVC_HD:
            return "XAVC_HD";
          case XavcProfile::XAVC_4K:
            return "XAVC_4K";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
