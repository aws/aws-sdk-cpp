/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AgreementService
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int INVALID_AGREEMENT_ID_HASH = HashingUtils::HashString("INVALID_AGREEMENT_ID");
        static const int MISSING_AGREEMENT_ID_HASH = HashingUtils::HashString("MISSING_AGREEMENT_ID");
        static const int INVALID_CATALOG_HASH = HashingUtils::HashString("INVALID_CATALOG");
        static const int INVALID_FILTER_NAME_HASH = HashingUtils::HashString("INVALID_FILTER_NAME");
        static const int INVALID_FILTER_VALUES_HASH = HashingUtils::HashString("INVALID_FILTER_VALUES");
        static const int INVALID_SORT_BY_HASH = HashingUtils::HashString("INVALID_SORT_BY");
        static const int INVALID_SORT_ORDER_HASH = HashingUtils::HashString("INVALID_SORT_ORDER");
        static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("INVALID_NEXT_TOKEN");
        static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("INVALID_MAX_RESULTS");
        static const int UNSUPPORTED_FILTERS_HASH = HashingUtils::HashString("UNSUPPORTED_FILTERS");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_AGREEMENT_ID_HASH)
          {
            return ValidationExceptionReason::INVALID_AGREEMENT_ID;
          }
          else if (hashCode == MISSING_AGREEMENT_ID_HASH)
          {
            return ValidationExceptionReason::MISSING_AGREEMENT_ID;
          }
          else if (hashCode == INVALID_CATALOG_HASH)
          {
            return ValidationExceptionReason::INVALID_CATALOG;
          }
          else if (hashCode == INVALID_FILTER_NAME_HASH)
          {
            return ValidationExceptionReason::INVALID_FILTER_NAME;
          }
          else if (hashCode == INVALID_FILTER_VALUES_HASH)
          {
            return ValidationExceptionReason::INVALID_FILTER_VALUES;
          }
          else if (hashCode == INVALID_SORT_BY_HASH)
          {
            return ValidationExceptionReason::INVALID_SORT_BY;
          }
          else if (hashCode == INVALID_SORT_ORDER_HASH)
          {
            return ValidationExceptionReason::INVALID_SORT_ORDER;
          }
          else if (hashCode == INVALID_NEXT_TOKEN_HASH)
          {
            return ValidationExceptionReason::INVALID_NEXT_TOKEN;
          }
          else if (hashCode == INVALID_MAX_RESULTS_HASH)
          {
            return ValidationExceptionReason::INVALID_MAX_RESULTS;
          }
          else if (hashCode == UNSUPPORTED_FILTERS_HASH)
          {
            return ValidationExceptionReason::UNSUPPORTED_FILTERS;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ValidationExceptionReason::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::INVALID_AGREEMENT_ID:
            return "INVALID_AGREEMENT_ID";
          case ValidationExceptionReason::MISSING_AGREEMENT_ID:
            return "MISSING_AGREEMENT_ID";
          case ValidationExceptionReason::INVALID_CATALOG:
            return "INVALID_CATALOG";
          case ValidationExceptionReason::INVALID_FILTER_NAME:
            return "INVALID_FILTER_NAME";
          case ValidationExceptionReason::INVALID_FILTER_VALUES:
            return "INVALID_FILTER_VALUES";
          case ValidationExceptionReason::INVALID_SORT_BY:
            return "INVALID_SORT_BY";
          case ValidationExceptionReason::INVALID_SORT_ORDER:
            return "INVALID_SORT_ORDER";
          case ValidationExceptionReason::INVALID_NEXT_TOKEN:
            return "INVALID_NEXT_TOKEN";
          case ValidationExceptionReason::INVALID_MAX_RESULTS:
            return "INVALID_MAX_RESULTS";
          case ValidationExceptionReason::UNSUPPORTED_FILTERS:
            return "UNSUPPORTED_FILTERS";
          case ValidationExceptionReason::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace AgreementService
} // namespace Aws
