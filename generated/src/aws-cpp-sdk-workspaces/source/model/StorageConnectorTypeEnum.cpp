/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StorageConnectorTypeEnum.h>
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
      namespace StorageConnectorTypeEnumMapper
      {

        static const int HOME_FOLDER_HASH = HashingUtils::HashString("HOME_FOLDER");


        StorageConnectorTypeEnum GetStorageConnectorTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOME_FOLDER_HASH)
          {
            return StorageConnectorTypeEnum::HOME_FOLDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageConnectorTypeEnum>(hashCode);
          }

          return StorageConnectorTypeEnum::NOT_SET;
        }

        Aws::String GetNameForStorageConnectorTypeEnum(StorageConnectorTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case StorageConnectorTypeEnum::NOT_SET:
            return {};
          case StorageConnectorTypeEnum::HOME_FOLDER:
            return "HOME_FOLDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageConnectorTypeEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
