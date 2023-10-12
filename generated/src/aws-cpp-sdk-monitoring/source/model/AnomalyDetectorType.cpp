/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/AnomalyDetectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace AnomalyDetectorTypeMapper
      {

        static constexpr uint32_t SINGLE_METRIC_HASH = ConstExprHashingUtils::HashString("SINGLE_METRIC");
        static constexpr uint32_t METRIC_MATH_HASH = ConstExprHashingUtils::HashString("METRIC_MATH");


        AnomalyDetectorType GetAnomalyDetectorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_METRIC_HASH)
          {
            return AnomalyDetectorType::SINGLE_METRIC;
          }
          else if (hashCode == METRIC_MATH_HASH)
          {
            return AnomalyDetectorType::METRIC_MATH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyDetectorType>(hashCode);
          }

          return AnomalyDetectorType::NOT_SET;
        }

        Aws::String GetNameForAnomalyDetectorType(AnomalyDetectorType enumValue)
        {
          switch(enumValue)
          {
          case AnomalyDetectorType::NOT_SET:
            return {};
          case AnomalyDetectorType::SINGLE_METRIC:
            return "SINGLE_METRIC";
          case AnomalyDetectorType::METRIC_MATH:
            return "METRIC_MATH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyDetectorTypeMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
