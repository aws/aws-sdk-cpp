/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcKlvMetadata.h>
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
      namespace CmfcKlvMetadataMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        CmfcKlvMetadata GetCmfcKlvMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return CmfcKlvMetadata::PASSTHROUGH;
          }
          else if (hashCode == NONE_HASH)
          {
            return CmfcKlvMetadata::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmfcKlvMetadata>(hashCode);
          }

          return CmfcKlvMetadata::NOT_SET;
        }

        Aws::String GetNameForCmfcKlvMetadata(CmfcKlvMetadata enumValue)
        {
          switch(enumValue)
          {
          case CmfcKlvMetadata::NOT_SET:
            return {};
          case CmfcKlvMetadata::PASSTHROUGH:
            return "PASSTHROUGH";
          case CmfcKlvMetadata::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmfcKlvMetadataMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
