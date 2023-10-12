/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafVideoCompositionOffsets.h>
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
      namespace CmafVideoCompositionOffsetsMapper
      {

        static constexpr uint32_t SIGNED_HASH = ConstExprHashingUtils::HashString("SIGNED");
        static constexpr uint32_t UNSIGNED_HASH = ConstExprHashingUtils::HashString("UNSIGNED");


        CmafVideoCompositionOffsets GetCmafVideoCompositionOffsetsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGNED_HASH)
          {
            return CmafVideoCompositionOffsets::SIGNED;
          }
          else if (hashCode == UNSIGNED_HASH)
          {
            return CmafVideoCompositionOffsets::UNSIGNED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafVideoCompositionOffsets>(hashCode);
          }

          return CmafVideoCompositionOffsets::NOT_SET;
        }

        Aws::String GetNameForCmafVideoCompositionOffsets(CmafVideoCompositionOffsets enumValue)
        {
          switch(enumValue)
          {
          case CmafVideoCompositionOffsets::NOT_SET:
            return {};
          case CmafVideoCompositionOffsets::SIGNED:
            return "SIGNED";
          case CmafVideoCompositionOffsets::UNSIGNED:
            return "UNSIGNED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafVideoCompositionOffsetsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
