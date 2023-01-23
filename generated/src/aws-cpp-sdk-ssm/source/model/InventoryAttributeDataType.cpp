/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventoryAttributeDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace InventoryAttributeDataTypeMapper
      {

        static const int string_HASH = HashingUtils::HashString("string");
        static const int number_HASH = HashingUtils::HashString("number");


        InventoryAttributeDataType GetInventoryAttributeDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == string_HASH)
          {
            return InventoryAttributeDataType::string;
          }
          else if (hashCode == number_HASH)
          {
            return InventoryAttributeDataType::number;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventoryAttributeDataType>(hashCode);
          }

          return InventoryAttributeDataType::NOT_SET;
        }

        Aws::String GetNameForInventoryAttributeDataType(InventoryAttributeDataType enumValue)
        {
          switch(enumValue)
          {
          case InventoryAttributeDataType::string:
            return "string";
          case InventoryAttributeDataType::number:
            return "number";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InventoryAttributeDataTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
