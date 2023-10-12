/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ValidityPeriodType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace ValidityPeriodTypeMapper
      {

        static constexpr uint32_t HOURS_HASH = ConstExprHashingUtils::HashString("HOURS");
        static constexpr uint32_t DAYS_HASH = ConstExprHashingUtils::HashString("DAYS");
        static constexpr uint32_t WEEKS_HASH = ConstExprHashingUtils::HashString("WEEKS");
        static constexpr uint32_t MONTHS_HASH = ConstExprHashingUtils::HashString("MONTHS");
        static constexpr uint32_t YEARS_HASH = ConstExprHashingUtils::HashString("YEARS");


        ValidityPeriodType GetValidityPeriodTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURS_HASH)
          {
            return ValidityPeriodType::HOURS;
          }
          else if (hashCode == DAYS_HASH)
          {
            return ValidityPeriodType::DAYS;
          }
          else if (hashCode == WEEKS_HASH)
          {
            return ValidityPeriodType::WEEKS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return ValidityPeriodType::MONTHS;
          }
          else if (hashCode == YEARS_HASH)
          {
            return ValidityPeriodType::YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidityPeriodType>(hashCode);
          }

          return ValidityPeriodType::NOT_SET;
        }

        Aws::String GetNameForValidityPeriodType(ValidityPeriodType enumValue)
        {
          switch(enumValue)
          {
          case ValidityPeriodType::NOT_SET:
            return {};
          case ValidityPeriodType::HOURS:
            return "HOURS";
          case ValidityPeriodType::DAYS:
            return "DAYS";
          case ValidityPeriodType::WEEKS:
            return "WEEKS";
          case ValidityPeriodType::MONTHS:
            return "MONTHS";
          case ValidityPeriodType::YEARS:
            return "YEARS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidityPeriodTypeMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
