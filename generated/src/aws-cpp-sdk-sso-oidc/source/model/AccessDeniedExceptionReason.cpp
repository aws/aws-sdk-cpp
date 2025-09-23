/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/AccessDeniedExceptionReason.h>
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
      namespace AccessDeniedExceptionReasonMapper
      {

        static const int KMS_AccessDeniedException_HASH = HashingUtils::HashString("KMS_AccessDeniedException");


        AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KMS_AccessDeniedException_HASH)
          {
            return AccessDeniedExceptionReason::KMS_AccessDeniedException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessDeniedExceptionReason>(hashCode);
          }

          return AccessDeniedExceptionReason::NOT_SET;
        }

        Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case AccessDeniedExceptionReason::NOT_SET:
            return {};
          case AccessDeniedExceptionReason::KMS_AccessDeniedException:
            return "KMS_AccessDeniedException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessDeniedExceptionReasonMapper
    } // namespace Model
  } // namespace SSOOIDC
} // namespace Aws
