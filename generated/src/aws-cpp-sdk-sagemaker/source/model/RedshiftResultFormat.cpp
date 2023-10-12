/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RedshiftResultFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace RedshiftResultFormatMapper
      {

        static constexpr uint32_t PARQUET_HASH = ConstExprHashingUtils::HashString("PARQUET");
        static constexpr uint32_t CSV_HASH = ConstExprHashingUtils::HashString("CSV");


        RedshiftResultFormat GetRedshiftResultFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARQUET_HASH)
          {
            return RedshiftResultFormat::PARQUET;
          }
          else if (hashCode == CSV_HASH)
          {
            return RedshiftResultFormat::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedshiftResultFormat>(hashCode);
          }

          return RedshiftResultFormat::NOT_SET;
        }

        Aws::String GetNameForRedshiftResultFormat(RedshiftResultFormat enumValue)
        {
          switch(enumValue)
          {
          case RedshiftResultFormat::NOT_SET:
            return {};
          case RedshiftResultFormat::PARQUET:
            return "PARQUET";
          case RedshiftResultFormat::CSV:
            return "CSV";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedshiftResultFormatMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
