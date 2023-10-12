/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/model/UploadAvailability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaStoreData
  {
    namespace Model
    {
      namespace UploadAvailabilityMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t STREAMING_HASH = ConstExprHashingUtils::HashString("STREAMING");


        UploadAvailability GetUploadAvailabilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return UploadAvailability::STANDARD;
          }
          else if (hashCode == STREAMING_HASH)
          {
            return UploadAvailability::STREAMING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UploadAvailability>(hashCode);
          }

          return UploadAvailability::NOT_SET;
        }

        Aws::String GetNameForUploadAvailability(UploadAvailability enumValue)
        {
          switch(enumValue)
          {
          case UploadAvailability::NOT_SET:
            return {};
          case UploadAvailability::STANDARD:
            return "STANDARD";
          case UploadAvailability::STREAMING:
            return "STREAMING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UploadAvailabilityMapper
    } // namespace Model
  } // namespace MediaStoreData
} // namespace Aws
