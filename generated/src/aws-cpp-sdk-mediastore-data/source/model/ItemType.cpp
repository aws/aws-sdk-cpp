/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/model/ItemType.h>
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
      namespace ItemTypeMapper
      {

        static constexpr uint32_t OBJECT_HASH = ConstExprHashingUtils::HashString("OBJECT");
        static constexpr uint32_t FOLDER_HASH = ConstExprHashingUtils::HashString("FOLDER");


        ItemType GetItemTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OBJECT_HASH)
          {
            return ItemType::OBJECT;
          }
          else if (hashCode == FOLDER_HASH)
          {
            return ItemType::FOLDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ItemType>(hashCode);
          }

          return ItemType::NOT_SET;
        }

        Aws::String GetNameForItemType(ItemType enumValue)
        {
          switch(enumValue)
          {
          case ItemType::NOT_SET:
            return {};
          case ItemType::OBJECT:
            return "OBJECT";
          case ItemType::FOLDER:
            return "FOLDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ItemTypeMapper
    } // namespace Model
  } // namespace MediaStoreData
} // namespace Aws
