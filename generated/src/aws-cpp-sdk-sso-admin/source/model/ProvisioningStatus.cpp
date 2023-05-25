/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ProvisioningStatus.h>
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
      namespace ProvisioningStatusMapper
      {

        static const int LATEST_PERMISSION_SET_PROVISIONED_HASH = HashingUtils::HashString("LATEST_PERMISSION_SET_PROVISIONED");
        static const int LATEST_PERMISSION_SET_NOT_PROVISIONED_HASH = HashingUtils::HashString("LATEST_PERMISSION_SET_NOT_PROVISIONED");


        ProvisioningStatus GetProvisioningStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LATEST_PERMISSION_SET_PROVISIONED_HASH)
          {
            return ProvisioningStatus::LATEST_PERMISSION_SET_PROVISIONED;
          }
          else if (hashCode == LATEST_PERMISSION_SET_NOT_PROVISIONED_HASH)
          {
            return ProvisioningStatus::LATEST_PERMISSION_SET_NOT_PROVISIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisioningStatus>(hashCode);
          }

          return ProvisioningStatus::NOT_SET;
        }

        Aws::String GetNameForProvisioningStatus(ProvisioningStatus enumValue)
        {
          switch(enumValue)
          {
          case ProvisioningStatus::LATEST_PERMISSION_SET_PROVISIONED:
            return "LATEST_PERMISSION_SET_PROVISIONED";
          case ProvisioningStatus::LATEST_PERMISSION_SET_NOT_PROVISIONED:
            return "LATEST_PERMISSION_SET_NOT_PROVISIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisioningStatusMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
