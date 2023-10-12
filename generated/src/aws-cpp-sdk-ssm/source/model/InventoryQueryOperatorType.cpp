/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventoryQueryOperatorType.h>
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
      namespace InventoryQueryOperatorTypeMapper
      {

        static constexpr uint32_t Equal_HASH = ConstExprHashingUtils::HashString("Equal");
        static constexpr uint32_t NotEqual_HASH = ConstExprHashingUtils::HashString("NotEqual");
        static constexpr uint32_t BeginWith_HASH = ConstExprHashingUtils::HashString("BeginWith");
        static constexpr uint32_t LessThan_HASH = ConstExprHashingUtils::HashString("LessThan");
        static constexpr uint32_t GreaterThan_HASH = ConstExprHashingUtils::HashString("GreaterThan");
        static constexpr uint32_t Exists_HASH = ConstExprHashingUtils::HashString("Exists");


        InventoryQueryOperatorType GetInventoryQueryOperatorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return InventoryQueryOperatorType::Equal;
          }
          else if (hashCode == NotEqual_HASH)
          {
            return InventoryQueryOperatorType::NotEqual;
          }
          else if (hashCode == BeginWith_HASH)
          {
            return InventoryQueryOperatorType::BeginWith;
          }
          else if (hashCode == LessThan_HASH)
          {
            return InventoryQueryOperatorType::LessThan;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return InventoryQueryOperatorType::GreaterThan;
          }
          else if (hashCode == Exists_HASH)
          {
            return InventoryQueryOperatorType::Exists;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventoryQueryOperatorType>(hashCode);
          }

          return InventoryQueryOperatorType::NOT_SET;
        }

        Aws::String GetNameForInventoryQueryOperatorType(InventoryQueryOperatorType enumValue)
        {
          switch(enumValue)
          {
          case InventoryQueryOperatorType::NOT_SET:
            return {};
          case InventoryQueryOperatorType::Equal:
            return "Equal";
          case InventoryQueryOperatorType::NotEqual:
            return "NotEqual";
          case InventoryQueryOperatorType::BeginWith:
            return "BeginWith";
          case InventoryQueryOperatorType::LessThan:
            return "LessThan";
          case InventoryQueryOperatorType::GreaterThan:
            return "GreaterThan";
          case InventoryQueryOperatorType::Exists:
            return "Exists";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InventoryQueryOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
