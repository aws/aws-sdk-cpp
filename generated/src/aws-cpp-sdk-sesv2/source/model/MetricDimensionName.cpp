/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MetricDimensionName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace MetricDimensionNameMapper
      {

        static constexpr uint32_t EMAIL_IDENTITY_HASH = ConstExprHashingUtils::HashString("EMAIL_IDENTITY");
        static constexpr uint32_t CONFIGURATION_SET_HASH = ConstExprHashingUtils::HashString("CONFIGURATION_SET");
        static constexpr uint32_t ISP_HASH = ConstExprHashingUtils::HashString("ISP");


        MetricDimensionName GetMetricDimensionNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_IDENTITY_HASH)
          {
            return MetricDimensionName::EMAIL_IDENTITY;
          }
          else if (hashCode == CONFIGURATION_SET_HASH)
          {
            return MetricDimensionName::CONFIGURATION_SET;
          }
          else if (hashCode == ISP_HASH)
          {
            return MetricDimensionName::ISP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricDimensionName>(hashCode);
          }

          return MetricDimensionName::NOT_SET;
        }

        Aws::String GetNameForMetricDimensionName(MetricDimensionName enumValue)
        {
          switch(enumValue)
          {
          case MetricDimensionName::NOT_SET:
            return {};
          case MetricDimensionName::EMAIL_IDENTITY:
            return "EMAIL_IDENTITY";
          case MetricDimensionName::CONFIGURATION_SET:
            return "CONFIGURATION_SET";
          case MetricDimensionName::ISP:
            return "ISP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricDimensionNameMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
