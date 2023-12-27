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

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        MpdKlvMetadata GetMpdKlvMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
