/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcInterlaceMode.h>
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
      namespace XavcInterlaceModeMapper
      {

        static constexpr uint32_t PROGRESSIVE_HASH = ConstExprHashingUtils::HashString("PROGRESSIVE");
        static constexpr uint32_t TOP_FIELD_HASH = ConstExprHashingUtils::HashString("TOP_FIELD");
        static constexpr uint32_t BOTTOM_FIELD_HASH = ConstExprHashingUtils::HashString("BOTTOM_FIELD");
        static constexpr uint32_t FOLLOW_TOP_FIELD_HASH = ConstExprHashingUtils::HashString("FOLLOW_TOP_FIELD");
        static constexpr uint32_t FOLLOW_BOTTOM_FIELD_HASH = ConstExprHashingUtils::HashString("FOLLOW_BOTTOM_FIELD");


        XavcInterlaceMode GetXavcInterlaceModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRESSIVE_HASH)
          {
            return XavcInterlaceMode::PROGRESSIVE;
          }
          else if (hashCode == TOP_FIELD_HASH)
          {
            return XavcInterlaceMode::TOP_FIELD;
          }
          else if (hashCode == BOTTOM_FIELD_HASH)
          {
            return XavcInterlaceMode::BOTTOM_FIELD;
          }
          else if (hashCode == FOLLOW_TOP_FIELD_HASH)
          {
            return XavcInterlaceMode::FOLLOW_TOP_FIELD;
          }
          else if (hashCode == FOLLOW_BOTTOM_FIELD_HASH)
          {
            return XavcInterlaceMode::FOLLOW_BOTTOM_FIELD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcInterlaceMode>(hashCode);
          }

          return XavcInterlaceMode::NOT_SET;
        }

        Aws::String GetNameForXavcInterlaceMode(XavcInterlaceMode enumValue)
        {
          switch(enumValue)
          {
          case XavcInterlaceMode::NOT_SET:
            return {};
          case XavcInterlaceMode::PROGRESSIVE:
            return "PROGRESSIVE";
          case XavcInterlaceMode::TOP_FIELD:
            return "TOP_FIELD";
          case XavcInterlaceMode::BOTTOM_FIELD:
            return "BOTTOM_FIELD";
          case XavcInterlaceMode::FOLLOW_TOP_FIELD:
            return "FOLLOW_TOP_FIELD";
          case XavcInterlaceMode::FOLLOW_BOTTOM_FIELD:
            return "FOLLOW_BOTTOM_FIELD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcInterlaceModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
