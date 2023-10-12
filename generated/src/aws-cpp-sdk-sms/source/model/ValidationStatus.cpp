/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ValidationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ValidationStatusMapper
      {

        static constexpr uint32_t READY_FOR_VALIDATION_HASH = ConstExprHashingUtils::HashString("READY_FOR_VALIDATION");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ValidationStatus GetValidationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_FOR_VALIDATION_HASH)
          {
            return ValidationStatus::READY_FOR_VALIDATION;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ValidationStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ValidationStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ValidationStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ValidationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationStatus>(hashCode);
          }

          return ValidationStatus::NOT_SET;
        }

        Aws::String GetNameForValidationStatus(ValidationStatus enumValue)
        {
          switch(enumValue)
          {
          case ValidationStatus::NOT_SET:
            return {};
          case ValidationStatus::READY_FOR_VALIDATION:
            return "READY_FOR_VALIDATION";
          case ValidationStatus::PENDING:
            return "PENDING";
          case ValidationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ValidationStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ValidationStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
