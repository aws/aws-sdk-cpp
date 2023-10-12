/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ServicePrincipalNameStatus.h>
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
      namespace ServicePrincipalNameStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ServicePrincipalNameStatus GetServicePrincipalNameStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ServicePrincipalNameStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ServicePrincipalNameStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ServicePrincipalNameStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ServicePrincipalNameStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServicePrincipalNameStatus>(hashCode);
          }

          return ServicePrincipalNameStatus::NOT_SET;
        }

        Aws::String GetNameForServicePrincipalNameStatus(ServicePrincipalNameStatus enumValue)
        {
          switch(enumValue)
          {
          case ServicePrincipalNameStatus::NOT_SET:
            return {};
          case ServicePrincipalNameStatus::CREATING:
            return "CREATING";
          case ServicePrincipalNameStatus::ACTIVE:
            return "ACTIVE";
          case ServicePrincipalNameStatus::DELETING:
            return "DELETING";
          case ServicePrincipalNameStatus::FAILED:
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

      } // namespace ServicePrincipalNameStatusMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
