/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryPricingModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace QueryPricingModelMapper
      {

        static const int BYTES_SCANNED_HASH = HashingUtils::HashString("BYTES_SCANNED");
        static const int COMPUTE_UNITS_HASH = HashingUtils::HashString("COMPUTE_UNITS");


        QueryPricingModel GetQueryPricingModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BYTES_SCANNED_HASH)
          {
            return QueryPricingModel::BYTES_SCANNED;
          }
          else if (hashCode == COMPUTE_UNITS_HASH)
          {
            return QueryPricingModel::COMPUTE_UNITS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryPricingModel>(hashCode);
          }

          return QueryPricingModel::NOT_SET;
        }

        Aws::String GetNameForQueryPricingModel(QueryPricingModel enumValue)
        {
          switch(enumValue)
          {
          case QueryPricingModel::NOT_SET:
            return {};
          case QueryPricingModel::BYTES_SCANNED:
            return "BYTES_SCANNED";
          case QueryPricingModel::COMPUTE_UNITS:
            return "COMPUTE_UNITS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryPricingModelMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws
