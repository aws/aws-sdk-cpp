/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/DataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubOrchestrator
  {
    namespace Model
    {
      namespace DataTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int STRINGLIST_HASH = HashingUtils::HashString("STRINGLIST");
        static const int STRINGMAP_HASH = HashingUtils::HashString("STRINGMAP");


        DataType GetDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return DataType::STRING;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return DataType::INTEGER;
          }
          else if (hashCode == STRINGLIST_HASH)
          {
            return DataType::STRINGLIST;
          }
          else if (hashCode == STRINGMAP_HASH)
          {
            return DataType::STRINGMAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataType>(hashCode);
          }

          return DataType::NOT_SET;
        }

        Aws::String GetNameForDataType(DataType enumValue)
        {
          switch(enumValue)
          {
          case DataType::STRING:
            return "STRING";
          case DataType::INTEGER:
            return "INTEGER";
          case DataType::STRINGLIST:
            return "STRINGLIST";
          case DataType::STRINGMAP:
            return "STRINGMAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataTypeMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws
