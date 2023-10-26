/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeviceBrand.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace DeviceBrandMapper
      {

        static const int AWS_PANORAMA_HASH = HashingUtils::HashString("AWS_PANORAMA");
        static const int LENOVO_HASH = HashingUtils::HashString("LENOVO");


        DeviceBrand GetDeviceBrandForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_PANORAMA_HASH)
          {
            return DeviceBrand::AWS_PANORAMA;
          }
          else if (hashCode == LENOVO_HASH)
          {
            return DeviceBrand::LENOVO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceBrand>(hashCode);
          }

          return DeviceBrand::NOT_SET;
        }

        Aws::String GetNameForDeviceBrand(DeviceBrand enumValue)
        {
          switch(enumValue)
          {
          case DeviceBrand::NOT_SET:
            return {};
          case DeviceBrand::AWS_PANORAMA:
            return "AWS_PANORAMA";
          case DeviceBrand::LENOVO:
            return "LENOVO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceBrandMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
