/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/ValidityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace signer
  {
    namespace Model
    {
      namespace ValidityTypeMapper
      {

        static constexpr uint32_t DAYS_HASH = ConstExprHashingUtils::HashString("DAYS");
        static constexpr uint32_t MONTHS_HASH = ConstExprHashingUtils::HashString("MONTHS");
        static constexpr uint32_t YEARS_HASH = ConstExprHashingUtils::HashString("YEARS");


        ValidityType GetValidityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_HASH)
          {
            return ValidityType::DAYS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return ValidityType::MONTHS;
          }
          else if (hashCode == YEARS_HASH)
          {
            return ValidityType::YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidityType>(hashCode);
          }

          return ValidityType::NOT_SET;
        }

        Aws::String GetNameForValidityType(ValidityType enumValue)
        {
          switch(enumValue)
          {
          case ValidityType::NOT_SET:
            return {};
          case ValidityType::DAYS:
            return "DAYS";
          case ValidityType::MONTHS:
            return "MONTHS";
          case ValidityType::YEARS:
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

      } // namespace ValidityTypeMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
