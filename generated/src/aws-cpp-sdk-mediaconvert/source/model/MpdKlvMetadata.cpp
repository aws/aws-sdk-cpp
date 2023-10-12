/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdKlvMetadata.h>
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
      namespace MpdKlvMetadataMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");


        MpdKlvMetadata GetMpdKlvMetadataForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return MpdKlvMetadata::NONE;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return MpdKlvMetadata::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpdKlvMetadata>(hashCode);
          }

          return MpdKlvMetadata::NOT_SET;
        }

        Aws::String GetNameForMpdKlvMetadata(MpdKlvMetadata enumValue)
        {
          switch(enumValue)
          {
          case MpdKlvMetadata::NOT_SET:
            return {};
          case MpdKlvMetadata::NONE:
            return "NONE";
          case MpdKlvMetadata::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MpdKlvMetadataMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
