/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Tables
  {
    namespace Model
    {
      namespace TableTypeMapper
      {

        static const int customer_HASH = HashingUtils::HashString("customer");
        static const int aws_HASH = HashingUtils::HashString("aws");


        TableType GetTableTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == customer_HASH)
          {
            return TableType::customer;
          }
          else if (hashCode == aws_HASH)
          {
            return TableType::aws;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableType>(hashCode);
          }

          return TableType::NOT_SET;
        }

        Aws::String GetNameForTableType(TableType enumValue)
        {
          switch(enumValue)
          {
          case TableType::NOT_SET:
            return {};
          case TableType::customer:
            return "customer";
          case TableType::aws:
            return "aws";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableTypeMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
