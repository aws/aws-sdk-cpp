/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/MetricQueryResultStatus.h>
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
      namespace MetricQueryResultStatusMapper
      {

        static const int Complete_HASH = HashingUtils::HashString("Complete");
        static const int Truncated_HASH = HashingUtils::HashString("Truncated");
        static const int InternalError_HASH = HashingUtils::HashString("InternalError");
        static const int ValidationError_HASH = HashingUtils::HashString("ValidationError");


        MetricQueryResultStatus GetMetricQueryResultStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Complete_HASH)
          {
            return MetricQueryResultStatus::Complete;
          }
          else if (hashCode == Truncated_HASH)
          {
            return MetricQueryResultStatus::Truncated;
          }
          else if (hashCode == InternalError_HASH)
          {
            return MetricQueryResultStatus::InternalError;
          }
          else if (hashCode == ValidationError_HASH)
          {
            return MetricQueryResultStatus::ValidationError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricQueryResultStatus>(hashCode);
          }

          return MetricQueryResultStatus::NOT_SET;
        }

        Aws::String GetNameForMetricQueryResultStatus(MetricQueryResultStatus enumValue)
        {
          switch(enumValue)
          {
          case MetricQueryResultStatus::NOT_SET:
            return {};
          case MetricQueryResultStatus::Complete:
            return "Complete";
          case MetricQueryResultStatus::Truncated:
            return "Truncated";
          case MetricQueryResultStatus::InternalError:
            return "InternalError";
          case MetricQueryResultStatus::ValidationError:
            return "ValidationError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricQueryResultStatusMapper
    } // namespace Model
  } // namespace SageMakerMetrics
} // namespace Aws
