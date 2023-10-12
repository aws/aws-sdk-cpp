/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MotionImageInsertionMode.h>
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
      namespace MotionImageInsertionModeMapper
      {

        static constexpr uint32_t MOV_HASH = ConstExprHashingUtils::HashString("MOV");
        static constexpr uint32_t PNG_HASH = ConstExprHashingUtils::HashString("PNG");


        MotionImageInsertionMode GetMotionImageInsertionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MOV_HASH)
          {
            return MotionImageInsertionMode::MOV;
          }
          else if (hashCode == PNG_HASH)
          {
            return MotionImageInsertionMode::PNG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MotionImageInsertionMode>(hashCode);
          }

          return MotionImageInsertionMode::NOT_SET;
        }

        Aws::String GetNameForMotionImageInsertionMode(MotionImageInsertionMode enumValue)
        {
          switch(enumValue)
          {
          case MotionImageInsertionMode::NOT_SET:
            return {};
          case MotionImageInsertionMode::MOV:
            return "MOV";
          case MotionImageInsertionMode::PNG:
            return "PNG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MotionImageInsertionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
