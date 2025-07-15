/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableBucketType.h>
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
      namespace TableBucketTypeMapper
      {

        static const int customer_HASH = HashingUtils::HashString("customer");
        static const int aws_HASH = HashingUtils::HashString("aws");


        TableBucketType GetTableBucketTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == customer_HASH)
          {
            return TableBucketType::customer;
          }
          else if (hashCode == aws_HASH)
          {
            return TableBucketType::aws;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableBucketType>(hashCode);
          }

          return TableBucketType::NOT_SET;
        }

        Aws::String GetNameForTableBucketType(TableBucketType enumValue)
        {
          switch(enumValue)
          {
          case TableBucketType::NOT_SET:
            return {};
          case TableBucketType::customer:
            return "customer";
          case TableBucketType::aws:
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

      } // namespace TableBucketTypeMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
