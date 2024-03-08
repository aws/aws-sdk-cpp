/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/MetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace MetricTypeMapper
      {

        static const int WORKLOAD_HASH = HashingUtils::HashString("WORKLOAD");


        MetricType GetMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORKLOAD_HASH)
          {
            return MetricType::WORKLOAD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricType>(hashCode);
          }

          return MetricType::NOT_SET;
        }

        Aws::String GetNameForMetricType(MetricType enumValue)
        {
          switch(enumValue)
          {
          case MetricType::NOT_SET:
            return {};
          case MetricType::WORKLOAD:
            return "WORKLOAD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
