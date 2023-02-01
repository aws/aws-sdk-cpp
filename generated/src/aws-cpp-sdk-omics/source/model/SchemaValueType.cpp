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

        static const int LONG_HASH = HashingUtils::HashString("LONG");
        static const int INT_HASH = HashingUtils::HashString("INT");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");


        SchemaValueType GetSchemaValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
