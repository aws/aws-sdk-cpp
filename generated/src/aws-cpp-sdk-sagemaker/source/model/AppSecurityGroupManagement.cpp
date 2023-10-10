/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppSecurityGroupManagement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AppSecurityGroupManagementMapper
      {

        static const int Service_HASH = HashingUtils::HashString("Service");
        static const int Customer_HASH = HashingUtils::HashString("Customer");


        AppSecurityGroupManagement GetAppSecurityGroupManagementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Service_HASH)
          {
            return AppSecurityGroupManagement::Service;
          }
          else if (hashCode == Customer_HASH)
          {
            return AppSecurityGroupManagement::Customer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppSecurityGroupManagement>(hashCode);
          }

          return AppSecurityGroupManagement::NOT_SET;
        }

        Aws::String GetNameForAppSecurityGroupManagement(AppSecurityGroupManagement enumValue)
        {
          switch(enumValue)
          {
          case AppSecurityGroupManagement::NOT_SET:
            return {};
          case AppSecurityGroupManagement::Service:
            return "Service";
          case AppSecurityGroupManagement::Customer:
            return "Customer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppSecurityGroupManagementMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
