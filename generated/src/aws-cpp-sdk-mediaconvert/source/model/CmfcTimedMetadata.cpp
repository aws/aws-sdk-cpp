/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcTimedMetadata.h>
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
      namespace CmfcTimedMetadataMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        CmfcTimedMetadata GetCmfcTimedMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return CmfcTimedMetadata::PASSTHROUGH;
          }
          else if (hashCode == NONE_HASH)
          {
            return CmfcTimedMetadata::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmfcTimedMetadata>(hashCode);
          }

          return CmfcTimedMetadata::NOT_SET;
        }

        Aws::String GetNameForCmfcTimedMetadata(CmfcTimedMetadata enumValue)
        {
          switch(enumValue)
          {
          case CmfcTimedMetadata::NOT_SET:
            return {};
          case CmfcTimedMetadata::PASSTHROUGH:
            return "PASSTHROUGH";
          case CmfcTimedMetadata::NONE:
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

      } // namespace CmfcTimedMetadataMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
