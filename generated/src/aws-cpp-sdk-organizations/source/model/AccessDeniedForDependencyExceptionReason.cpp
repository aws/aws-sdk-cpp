/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/AccessDeniedForDependencyExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace AccessDeniedForDependencyExceptionReasonMapper
      {

        static const int ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE_HASH = HashingUtils::HashString("ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE");


        AccessDeniedForDependencyExceptionReason GetAccessDeniedForDependencyExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE_HASH)
          {
            return AccessDeniedForDependencyExceptionReason::ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessDeniedForDependencyExceptionReason>(hashCode);
          }

          return AccessDeniedForDependencyExceptionReason::NOT_SET;
        }

        Aws::String GetNameForAccessDeniedForDependencyExceptionReason(AccessDeniedForDependencyExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case AccessDeniedForDependencyExceptionReason::ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE:
            return "ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessDeniedForDependencyExceptionReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
