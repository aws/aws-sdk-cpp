/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/TableSseAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace TableSseAlgorithmMapper
      {

        static const int aws_kms_HASH = HashingUtils::HashString("aws:kms");
        static const int AES256_HASH = HashingUtils::HashString("AES256");


        TableSseAlgorithm GetTableSseAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_kms_HASH)
          {
            return TableSseAlgorithm::aws_kms;
          }
          else if (hashCode == AES256_HASH)
          {
            return TableSseAlgorithm::AES256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableSseAlgorithm>(hashCode);
          }

          return TableSseAlgorithm::NOT_SET;
        }

        Aws::String GetNameForTableSseAlgorithm(TableSseAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case TableSseAlgorithm::NOT_SET:
            return {};
          case TableSseAlgorithm::aws_kms:
            return "aws:kms";
          case TableSseAlgorithm::AES256:
            return "AES256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableSseAlgorithmMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
