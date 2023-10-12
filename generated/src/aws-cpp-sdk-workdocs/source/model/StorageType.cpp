/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/StorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace StorageTypeMapper
      {

        static constexpr uint32_t UNLIMITED_HASH = ConstExprHashingUtils::HashString("UNLIMITED");
        static constexpr uint32_t QUOTA_HASH = ConstExprHashingUtils::HashString("QUOTA");


        StorageType GetStorageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNLIMITED_HASH)
          {
            return StorageType::UNLIMITED;
          }
          else if (hashCode == QUOTA_HASH)
          {
            return StorageType::QUOTA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageType>(hashCode);
          }

          return StorageType::NOT_SET;
        }

        Aws::String GetNameForStorageType(StorageType enumValue)
        {
          switch(enumValue)
          {
          case StorageType::NOT_SET:
            return {};
          case StorageType::UNLIMITED:
            return "UNLIMITED";
          case StorageType::QUOTA:
            return "QUOTA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
