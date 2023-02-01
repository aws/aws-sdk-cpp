/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/PutMetricsErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerMetrics
  {
    namespace Model
    {
      namespace PutMetricsErrorCodeMapper
      {

        static const int METRIC_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("METRIC_LIMIT_EXCEEDED");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
        static const int CONFLICT_ERROR_HASH = HashingUtils::HashString("CONFLICT_ERROR");


        PutMetricsErrorCode GetPutMetricsErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == METRIC_LIMIT_EXCEEDED_HASH)
          {
            return PutMetricsErrorCode::METRIC_LIMIT_EXCEEDED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return PutMetricsErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return PutMetricsErrorCode::VALIDATION_ERROR;
          }
          else if (hashCode == CONFLICT_ERROR_HASH)
          {
            return PutMetricsErrorCode::CONFLICT_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PutMetricsErrorCode>(hashCode);
          }

          return PutMetricsErrorCode::NOT_SET;
        }

        Aws::String GetNameForPutMetricsErrorCode(PutMetricsErrorCode enumValue)
        {
          switch(enumValue)
          {
          case PutMetricsErrorCode::METRIC_LIMIT_EXCEEDED:
            return "METRIC_LIMIT_EXCEEDED";
          case PutMetricsErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case PutMetricsErrorCode::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case PutMetricsErrorCode::CONFLICT_ERROR:
            return "CONFLICT_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PutMetricsErrorCodeMapper
    } // namespace Model
  } // namespace SageMakerMetrics
} // namespace Aws
