/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ServicePrincipalNameStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace ServicePrincipalNameStatusReasonMapper
      {

        static const int DIRECTORY_ACCESS_DENIED_HASH = HashingUtils::HashString("DIRECTORY_ACCESS_DENIED");
        static const int DIRECTORY_NOT_REACHABLE_HASH = HashingUtils::HashString("DIRECTORY_NOT_REACHABLE");
        static const int DIRECTORY_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("DIRECTORY_RESOURCE_NOT_FOUND");
        static const int SPN_EXISTS_ON_DIFFERENT_AD_OBJECT_HASH = HashingUtils::HashString("SPN_EXISTS_ON_DIFFERENT_AD_OBJECT");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");


        ServicePrincipalNameStatusReason GetServicePrincipalNameStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECTORY_ACCESS_DENIED_HASH)
          {
            return ServicePrincipalNameStatusReason::DIRECTORY_ACCESS_DENIED;
          }
          else if (hashCode == DIRECTORY_NOT_REACHABLE_HASH)
          {
            return ServicePrincipalNameStatusReason::DIRECTORY_NOT_REACHABLE;
          }
          else if (hashCode == DIRECTORY_RESOURCE_NOT_FOUND_HASH)
          {
            return ServicePrincipalNameStatusReason::DIRECTORY_RESOURCE_NOT_FOUND;
          }
          else if (hashCode == SPN_EXISTS_ON_DIFFERENT_AD_OBJECT_HASH)
          {
            return ServicePrincipalNameStatusReason::SPN_EXISTS_ON_DIFFERENT_AD_OBJECT;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return ServicePrincipalNameStatusReason::INTERNAL_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServicePrincipalNameStatusReason>(hashCode);
          }

          return ServicePrincipalNameStatusReason::NOT_SET;
        }

        Aws::String GetNameForServicePrincipalNameStatusReason(ServicePrincipalNameStatusReason enumValue)
        {
          switch(enumValue)
          {
          case ServicePrincipalNameStatusReason::NOT_SET:
            return {};
          case ServicePrincipalNameStatusReason::DIRECTORY_ACCESS_DENIED:
            return "DIRECTORY_ACCESS_DENIED";
          case ServicePrincipalNameStatusReason::DIRECTORY_NOT_REACHABLE:
            return "DIRECTORY_NOT_REACHABLE";
          case ServicePrincipalNameStatusReason::DIRECTORY_RESOURCE_NOT_FOUND:
            return "DIRECTORY_RESOURCE_NOT_FOUND";
          case ServicePrincipalNameStatusReason::SPN_EXISTS_ON_DIFFERENT_AD_OBJECT:
            return "SPN_EXISTS_ON_DIFFERENT_AD_OBJECT";
          case ServicePrincipalNameStatusReason::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServicePrincipalNameStatusReasonMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
