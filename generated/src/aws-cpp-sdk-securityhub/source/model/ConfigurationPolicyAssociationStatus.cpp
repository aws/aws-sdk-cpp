/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConfigurationPolicyAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ConfigurationPolicyAssociationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ConfigurationPolicyAssociationStatus GetConfigurationPolicyAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ConfigurationPolicyAssociationStatus::PENDING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ConfigurationPolicyAssociationStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConfigurationPolicyAssociationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationPolicyAssociationStatus>(hashCode);
          }

          return ConfigurationPolicyAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationPolicyAssociationStatus(ConfigurationPolicyAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationPolicyAssociationStatus::NOT_SET:
            return {};
          case ConfigurationPolicyAssociationStatus::PENDING:
            return "PENDING";
          case ConfigurationPolicyAssociationStatus::SUCCESS:
            return "SUCCESS";
          case ConfigurationPolicyAssociationStatus::FAILED:
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

      } // namespace ConfigurationPolicyAssociationStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
