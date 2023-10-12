/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AlphaBehavior.h>
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
      namespace AlphaBehaviorMapper
      {

        static constexpr uint32_t DISCARD_HASH = ConstExprHashingUtils::HashString("DISCARD");
        static constexpr uint32_t REMAP_TO_LUMA_HASH = ConstExprHashingUtils::HashString("REMAP_TO_LUMA");


        AlphaBehavior GetAlphaBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCARD_HASH)
          {
            return AlphaBehavior::DISCARD;
          }
          else if (hashCode == REMAP_TO_LUMA_HASH)
          {
            return AlphaBehavior::REMAP_TO_LUMA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlphaBehavior>(hashCode);
          }

          return AlphaBehavior::NOT_SET;
        }

        Aws::String GetNameForAlphaBehavior(AlphaBehavior enumValue)
        {
          switch(enumValue)
          {
          case AlphaBehavior::NOT_SET:
            return {};
          case AlphaBehavior::DISCARD:
            return "DISCARD";
          case AlphaBehavior::REMAP_TO_LUMA:
            return "REMAP_TO_LUMA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlphaBehaviorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
