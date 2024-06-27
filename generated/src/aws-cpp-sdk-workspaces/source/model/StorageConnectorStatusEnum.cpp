/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StorageConnectorStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace StorageConnectorStatusEnumMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        StorageConnectorStatusEnum GetStorageConnectorStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return StorageConnectorStatusEnum::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return StorageConnectorStatusEnum::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageConnectorStatusEnum>(hashCode);
          }

          return StorageConnectorStatusEnum::NOT_SET;
        }

        Aws::String GetNameForStorageConnectorStatusEnum(StorageConnectorStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case StorageConnectorStatusEnum::NOT_SET:
            return {};
          case StorageConnectorStatusEnum::ENABLED:
            return "ENABLED";
          case StorageConnectorStatusEnum::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageConnectorStatusEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
