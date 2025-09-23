/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/InvalidRequestExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOOIDC
  {
    namespace Model
    {
      namespace InvalidRequestExceptionReasonMapper
      {

        static const int KMS_NotFoundException_HASH = HashingUtils::HashString("KMS_NotFoundException");
        static const int KMS_InvalidKeyUsageException_HASH = HashingUtils::HashString("KMS_InvalidKeyUsageException");
        static const int KMS_InvalidStateException_HASH = HashingUtils::HashString("KMS_InvalidStateException");
        static const int KMS_DisabledException_HASH = HashingUtils::HashString("KMS_DisabledException");


        InvalidRequestExceptionReason GetInvalidRequestExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KMS_NotFoundException_HASH)
          {
            return InvalidRequestExceptionReason::KMS_NotFoundException;
          }
          else if (hashCode == KMS_InvalidKeyUsageException_HASH)
          {
            return InvalidRequestExceptionReason::KMS_InvalidKeyUsageException;
          }
          else if (hashCode == KMS_InvalidStateException_HASH)
          {
            return InvalidRequestExceptionReason::KMS_InvalidStateException;
          }
          else if (hashCode == KMS_DisabledException_HASH)
          {
            return InvalidRequestExceptionReason::KMS_DisabledException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvalidRequestExceptionReason>(hashCode);
          }

          return InvalidRequestExceptionReason::NOT_SET;
        }

        Aws::String GetNameForInvalidRequestExceptionReason(InvalidRequestExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case InvalidRequestExceptionReason::NOT_SET:
            return {};
          case InvalidRequestExceptionReason::KMS_NotFoundException:
            return "KMS_NotFoundException";
          case InvalidRequestExceptionReason::KMS_InvalidKeyUsageException:
            return "KMS_InvalidKeyUsageException";
          case InvalidRequestExceptionReason::KMS_InvalidStateException:
            return "KMS_InvalidStateException";
          case InvalidRequestExceptionReason::KMS_DisabledException:
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

      } // namespace InvalidRequestExceptionReasonMapper
    } // namespace Model
  } // namespace SSOOIDC
} // namespace Aws
