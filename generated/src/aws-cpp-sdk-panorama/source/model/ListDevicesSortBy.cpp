/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListDevicesSortBy.h>
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
      namespace ListDevicesSortByMapper
      {

        static const int DEVICE_ID_HASH = HashingUtils::HashString("DEVICE_ID");
        static const int CREATED_TIME_HASH = HashingUtils::HashString("CREATED_TIME");
        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int DEVICE_AGGREGATED_STATUS_HASH = HashingUtils::HashString("DEVICE_AGGREGATED_STATUS");


        ListDevicesSortBy GetListDevicesSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVICE_ID_HASH)
          {
            return ListDevicesSortBy::DEVICE_ID;
          }
          else if (hashCode == CREATED_TIME_HASH)
          {
            return ListDevicesSortBy::CREATED_TIME;
          }
          else if (hashCode == NAME_HASH)
          {
            return ListDevicesSortBy::NAME;
          }
          else if (hashCode == DEVICE_AGGREGATED_STATUS_HASH)
          {
            return ListDevicesSortBy::DEVICE_AGGREGATED_STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListDevicesSortBy>(hashCode);
          }

          return ListDevicesSortBy::NOT_SET;
        }

        Aws::String GetNameForListDevicesSortBy(ListDevicesSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListDevicesSortBy::DEVICE_ID:
            return "DEVICE_ID";
          case ListDevicesSortBy::CREATED_TIME:
            return "CREATED_TIME";
          case ListDevicesSortBy::NAME:
            return "NAME";
          case ListDevicesSortBy::DEVICE_AGGREGATED_STATUS:
            return "DEVICE_AGGREGATED_STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListDevicesSortByMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
