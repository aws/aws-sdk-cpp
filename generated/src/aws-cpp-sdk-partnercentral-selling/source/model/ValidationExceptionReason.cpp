/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int REQUEST_VALIDATION_FAILED_HASH = HashingUtils::HashString("REQUEST_VALIDATION_FAILED");
        static const int BUSINESS_VALIDATION_FAILED_HASH = HashingUtils::HashString("BUSINESS_VALIDATION_FAILED");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUEST_VALIDATION_FAILED_HASH)
          {
            return ValidationExceptionReason::REQUEST_VALIDATION_FAILED;
          }
          else if (hashCode == BUSINESS_VALIDATION_FAILED_HASH)
          {
            return ValidationExceptionReason::BUSINESS_VALIDATION_FAILED;
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
          case ValidationExceptionReason::REQUEST_VALIDATION_FAILED:
            return "REQUEST_VALIDATION_FAILED";
          case ValidationExceptionReason::BUSINESS_VALIDATION_FAILED:
            return "BUSINESS_VALIDATION_FAILED";
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
  } // namespace PartnerCentralSelling
} // namespace Aws
