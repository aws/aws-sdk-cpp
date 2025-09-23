/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int KMS_InvalidKeyUsageException_HASH = HashingUtils::HashString("KMS_InvalidKeyUsageException");
        static const int KMS_InvalidStateException_HASH = HashingUtils::HashString("KMS_InvalidStateException");
        static const int KMS_DisabledException_HASH = HashingUtils::HashString("KMS_DisabledException");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KMS_InvalidKeyUsageException_HASH)
          {
            return ValidationExceptionReason::KMS_InvalidKeyUsageException;
          }
          else if (hashCode == KMS_InvalidStateException_HASH)
          {
            return ValidationExceptionReason::KMS_InvalidStateException;
          }
          else if (hashCode == KMS_DisabledException_HASH)
          {
            return ValidationExceptionReason::KMS_DisabledException;
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
          case ValidationExceptionReason::KMS_InvalidKeyUsageException:
            return "KMS_InvalidKeyUsageException";
          case ValidationExceptionReason::KMS_InvalidStateException:
            return "KMS_InvalidStateException";
          case ValidationExceptionReason::KMS_DisabledException:
            return "KMS_DisabledException";
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
  } // namespace SSOAdmin
} // namespace Aws
