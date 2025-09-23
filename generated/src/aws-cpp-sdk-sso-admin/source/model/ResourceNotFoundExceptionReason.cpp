/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ResourceNotFoundExceptionReason.h>
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
      namespace ResourceNotFoundExceptionReasonMapper
      {

        static const int KMS_NotFoundException_HASH = HashingUtils::HashString("KMS_NotFoundException");


        ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KMS_NotFoundException_HASH)
          {
            return ResourceNotFoundExceptionReason::KMS_NotFoundException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceNotFoundExceptionReason>(hashCode);
          }

          return ResourceNotFoundExceptionReason::NOT_SET;
        }

        Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ResourceNotFoundExceptionReason::NOT_SET:
            return {};
          case ResourceNotFoundExceptionReason::KMS_NotFoundException:
            return "KMS_NotFoundException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceNotFoundExceptionReasonMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
