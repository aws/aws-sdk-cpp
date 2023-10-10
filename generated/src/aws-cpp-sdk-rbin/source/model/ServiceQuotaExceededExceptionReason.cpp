/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/ServiceQuotaExceededExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RecycleBin
  {
    namespace Model
    {
      namespace ServiceQuotaExceededExceptionReasonMapper
      {

        static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("SERVICE_QUOTA_EXCEEDED");


        ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
          {
            return ServiceQuotaExceededExceptionReason::SERVICE_QUOTA_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceQuotaExceededExceptionReason>(hashCode);
          }

          return ServiceQuotaExceededExceptionReason::NOT_SET;
        }

        Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ServiceQuotaExceededExceptionReason::NOT_SET:
            return {};
          case ServiceQuotaExceededExceptionReason::SERVICE_QUOTA_EXCEEDED:
            return "SERVICE_QUOTA_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceQuotaExceededExceptionReasonMapper
    } // namespace Model
  } // namespace RecycleBin
} // namespace Aws
