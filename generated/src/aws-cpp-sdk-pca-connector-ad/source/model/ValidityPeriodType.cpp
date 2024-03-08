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

        static const int HOURS_HASH = HashingUtils::HashString("HOURS");
        static const int DAYS_HASH = HashingUtils::HashString("DAYS");
        static const int WEEKS_HASH = HashingUtils::HashString("WEEKS");
        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");
        static const int YEARS_HASH = HashingUtils::HashString("YEARS");


        ValidityPeriodType GetValidityPeriodTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
