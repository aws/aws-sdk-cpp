/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/LocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace LocationTypeMapper
      {

        static const int AvailabilityZone_HASH = HashingUtils::HashString("AvailabilityZone");


        LocationType GetLocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AvailabilityZone_HASH)
          {
            return LocationType::AvailabilityZone;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocationType>(hashCode);
          }

          return LocationType::NOT_SET;
        }

        Aws::String GetNameForLocationType(LocationType enumValue)
        {
          switch(enumValue)
          {
          case LocationType::NOT_SET:
            return {};
          case LocationType::AvailabilityZone:
            return "AvailabilityZone";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocationTypeMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
