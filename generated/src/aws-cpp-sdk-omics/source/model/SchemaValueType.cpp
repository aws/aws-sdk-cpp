/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SchemaValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace SchemaValueTypeMapper
      {

        static constexpr uint32_t LONG_HASH = ConstExprHashingUtils::HashString("LONG");
        static constexpr uint32_t INT_HASH = ConstExprHashingUtils::HashString("INT");
        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t FLOAT_HASH = ConstExprHashingUtils::HashString("FLOAT");
        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");


        SchemaValueType GetSchemaValueTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LONG_HASH)
          {
            return SchemaValueType::LONG;
          }
          else if (hashCode == INT_HASH)
          {
            return SchemaValueType::INT;
          }
          else if (hashCode == STRING_HASH)
          {
            return SchemaValueType::STRING;
          }
          else if (hashCode == FLOAT_HASH)
          {
            return SchemaValueType::FLOAT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return SchemaValueType::DOUBLE;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return SchemaValueType::BOOLEAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaValueType>(hashCode);
          }

          return SchemaValueType::NOT_SET;
        }

        Aws::String GetNameForSchemaValueType(SchemaValueType enumValue)
        {
          switch(enumValue)
          {
          case SchemaValueType::NOT_SET:
            return {};
          case SchemaValueType::LONG:
            return "LONG";
          case SchemaValueType::INT:
            return "INT";
          case SchemaValueType::STRING:
            return "STRING";
          case SchemaValueType::FLOAT:
            return "FLOAT";
          case SchemaValueType::DOUBLE:
            return "DOUBLE";
          case SchemaValueType::BOOLEAN:
            return "BOOLEAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaValueTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
