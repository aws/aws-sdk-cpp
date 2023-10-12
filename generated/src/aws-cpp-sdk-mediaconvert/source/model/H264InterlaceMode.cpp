/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264InterlaceMode.h>
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
      namespace H264InterlaceModeMapper
      {

        static constexpr uint32_t PROGRESSIVE_HASH = ConstExprHashingUtils::HashString("PROGRESSIVE");
        static constexpr uint32_t TOP_FIELD_HASH = ConstExprHashingUtils::HashString("TOP_FIELD");
        static constexpr uint32_t BOTTOM_FIELD_HASH = ConstExprHashingUtils::HashString("BOTTOM_FIELD");
        static constexpr uint32_t FOLLOW_TOP_FIELD_HASH = ConstExprHashingUtils::HashString("FOLLOW_TOP_FIELD");
        static constexpr uint32_t FOLLOW_BOTTOM_FIELD_HASH = ConstExprHashingUtils::HashString("FOLLOW_BOTTOM_FIELD");


        H264InterlaceMode GetH264InterlaceModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRESSIVE_HASH)
          {
            return H264InterlaceMode::PROGRESSIVE;
          }
          else if (hashCode == TOP_FIELD_HASH)
          {
            return H264InterlaceMode::TOP_FIELD;
          }
          else if (hashCode == BOTTOM_FIELD_HASH)
          {
            return H264InterlaceMode::BOTTOM_FIELD;
          }
          else if (hashCode == FOLLOW_TOP_FIELD_HASH)
          {
            return H264InterlaceMode::FOLLOW_TOP_FIELD;
          }
          else if (hashCode == FOLLOW_BOTTOM_FIELD_HASH)
          {
            return H264InterlaceMode::FOLLOW_BOTTOM_FIELD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264InterlaceMode>(hashCode);
          }

          return H264InterlaceMode::NOT_SET;
        }

        Aws::String GetNameForH264InterlaceMode(H264InterlaceMode enumValue)
        {
          switch(enumValue)
          {
          case H264InterlaceMode::NOT_SET:
            return {};
          case H264InterlaceMode::PROGRESSIVE:
            return "PROGRESSIVE";
          case H264InterlaceMode::TOP_FIELD:
            return "TOP_FIELD";
          case H264InterlaceMode::BOTTOM_FIELD:
            return "BOTTOM_FIELD";
          case H264InterlaceMode::FOLLOW_TOP_FIELD:
            return "FOLLOW_TOP_FIELD";
          case H264InterlaceMode::FOLLOW_BOTTOM_FIELD:
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

      } // namespace H264InterlaceModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
