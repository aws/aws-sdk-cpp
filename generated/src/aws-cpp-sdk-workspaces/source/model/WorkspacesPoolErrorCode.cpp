/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspacesPoolErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace WorkspacesPoolErrorCodeMapper
      {

        static const int IAM_SERVICE_ROLE_IS_MISSING_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_IS_MISSING");
        static const int IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION");
        static const int IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION");
        static const int IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION");
        static const int NETWORK_INTERFACE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("NETWORK_INTERFACE_LIMIT_EXCEEDED");
        static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVICE_ERROR");
        static const int MACHINE_ROLE_IS_MISSING_HASH = HashingUtils::HashString("MACHINE_ROLE_IS_MISSING");
        static const int STS_DISABLED_IN_REGION_HASH = HashingUtils::HashString("STS_DISABLED_IN_REGION");
        static const int SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES_HASH = HashingUtils::HashString("SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES");
        static const int IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION");
        static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SUBNET_NOT_FOUND");
        static const int IMAGE_NOT_FOUND_HASH = HashingUtils::HashString("IMAGE_NOT_FOUND");
        static const int INVALID_SUBNET_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_SUBNET_CONFIGURATION");
        static const int SECURITY_GROUPS_NOT_FOUND_HASH = HashingUtils::HashString("SECURITY_GROUPS_NOT_FOUND");
        static const int IGW_NOT_ATTACHED_HASH = HashingUtils::HashString("IGW_NOT_ATTACHED");
        static const int IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION");
        static const int WORKSPACES_POOL_STOPPED_HASH = HashingUtils::HashString("WORKSPACES_POOL_STOPPED");
        static const int WORKSPACES_POOL_INSTANCE_PROVISIONING_FAILURE_HASH = HashingUtils::HashString("WORKSPACES_POOL_INSTANCE_PROVISIONING_FAILURE");
        static const int DOMAIN_JOIN_ERROR_FILE_NOT_FOUND_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_FILE_NOT_FOUND");
        static const int DOMAIN_JOIN_ERROR_ACCESS_DENIED_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_ACCESS_DENIED");
        static const int DOMAIN_JOIN_ERROR_LOGON_FAILURE_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_LOGON_FAILURE");
        static const int DOMAIN_JOIN_ERROR_INVALID_PARAMETER_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_INVALID_PARAMETER");
        static const int DOMAIN_JOIN_ERROR_MORE_DATA_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_MORE_DATA");
        static const int DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN");
        static const int DOMAIN_JOIN_ERROR_NOT_SUPPORTED_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_NOT_SUPPORTED");
        static const int DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME_HASH = HashingUtils::HashString("DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME");
        static const int DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED_HASH = HashingUtils::HashString("DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED");
        static const int DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED");
        static const int DOMAIN_JOIN_NERR_PASSWORD_EXPIRED_HASH = HashingUtils::HashString("DOMAIN_JOIN_NERR_PASSWORD_EXPIRED");
        static const int DOMAIN_JOIN_INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("DOMAIN_JOIN_INTERNAL_SERVICE_ERROR");
        static const int DOMAIN_JOIN_ERROR_SECRET_ACTION_PERMISSION_IS_MISSING_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_SECRET_ACTION_PERMISSION_IS_MISSING");
        static const int DOMAIN_JOIN_ERROR_SECRET_DECRYPTION_FAILURE_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_SECRET_DECRYPTION_FAILURE");
        static const int DOMAIN_JOIN_ERROR_SECRET_STATE_INVALID_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_SECRET_STATE_INVALID");
        static const int DOMAIN_JOIN_ERROR_SECRET_NOT_FOUND_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_SECRET_NOT_FOUND");
        static const int DOMAIN_JOIN_ERROR_SECRET_VALUE_KEY_NOT_FOUND_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_SECRET_VALUE_KEY_NOT_FOUND");
        static const int DOMAIN_JOIN_ERROR_SECRET_INVALID_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_SECRET_INVALID");
        static const int BUNDLE_NOT_FOUND_HASH = HashingUtils::HashString("BUNDLE_NOT_FOUND");
        static const int DIRECTORY_NOT_FOUND_HASH = HashingUtils::HashString("DIRECTORY_NOT_FOUND");
        static const int INSUFFICIENT_PERMISSIONS_ERROR_HASH = HashingUtils::HashString("INSUFFICIENT_PERMISSIONS_ERROR");
        static const int DEFAULT_OU_IS_MISSING_HASH = HashingUtils::HashString("DEFAULT_OU_IS_MISSING");


        WorkspacesPoolErrorCode GetWorkspacesPoolErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_SERVICE_ROLE_IS_MISSING_HASH)
          {
            return WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_IS_MISSING;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION_HASH)
          {
            return WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION_HASH)
          {
            return WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION_HASH)
          {
            return WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION;
          }
          else if (hashCode == NETWORK_INTERFACE_LIMIT_EXCEEDED_HASH)
          {
            return WorkspacesPoolErrorCode::NETWORK_INTERFACE_LIMIT_EXCEEDED;
          }
          else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
          {
            return WorkspacesPoolErrorCode::INTERNAL_SERVICE_ERROR;
          }
          else if (hashCode == MACHINE_ROLE_IS_MISSING_HASH)
          {
            return WorkspacesPoolErrorCode::MACHINE_ROLE_IS_MISSING;
          }
          else if (hashCode == STS_DISABLED_IN_REGION_HASH)
          {
            return WorkspacesPoolErrorCode::STS_DISABLED_IN_REGION;
          }
          else if (hashCode == SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES_HASH)
          {
            return WorkspacesPoolErrorCode::SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION_HASH)
          {
            return WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION;
          }
          else if (hashCode == SUBNET_NOT_FOUND_HASH)
          {
            return WorkspacesPoolErrorCode::SUBNET_NOT_FOUND;
          }
          else if (hashCode == IMAGE_NOT_FOUND_HASH)
          {
            return WorkspacesPoolErrorCode::IMAGE_NOT_FOUND;
          }
          else if (hashCode == INVALID_SUBNET_CONFIGURATION_HASH)
          {
            return WorkspacesPoolErrorCode::INVALID_SUBNET_CONFIGURATION;
          }
          else if (hashCode == SECURITY_GROUPS_NOT_FOUND_HASH)
          {
            return WorkspacesPoolErrorCode::SECURITY_GROUPS_NOT_FOUND;
          }
          else if (hashCode == IGW_NOT_ATTACHED_HASH)
          {
            return WorkspacesPoolErrorCode::IGW_NOT_ATTACHED;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION_HASH)
          {
            return WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION;
          }
          else if (hashCode == WORKSPACES_POOL_STOPPED_HASH)
          {
            return WorkspacesPoolErrorCode::WORKSPACES_POOL_STOPPED;
          }
          else if (hashCode == WORKSPACES_POOL_INSTANCE_PROVISIONING_FAILURE_HASH)
          {
            return WorkspacesPoolErrorCode::WORKSPACES_POOL_INSTANCE_PROVISIONING_FAILURE;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_FILE_NOT_FOUND_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_FILE_NOT_FOUND;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_ACCESS_DENIED_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_ACCESS_DENIED;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_LOGON_FAILURE_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_LOGON_FAILURE;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_INVALID_PARAMETER_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_INVALID_PARAMETER;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_MORE_DATA_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_MORE_DATA;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_NOT_SUPPORTED_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_NOT_SUPPORTED;
          }
          else if (hashCode == DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME;
          }
          else if (hashCode == DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED;
          }
          else if (hashCode == DOMAIN_JOIN_NERR_PASSWORD_EXPIRED_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_NERR_PASSWORD_EXPIRED;
          }
          else if (hashCode == DOMAIN_JOIN_INTERNAL_SERVICE_ERROR_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_INTERNAL_SERVICE_ERROR;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_SECRET_ACTION_PERMISSION_IS_MISSING_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_ACTION_PERMISSION_IS_MISSING;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_SECRET_DECRYPTION_FAILURE_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_DECRYPTION_FAILURE;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_SECRET_STATE_INVALID_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_STATE_INVALID;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_SECRET_NOT_FOUND_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_NOT_FOUND;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_SECRET_VALUE_KEY_NOT_FOUND_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_VALUE_KEY_NOT_FOUND;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_SECRET_INVALID_HASH)
          {
            return WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_INVALID;
          }
          else if (hashCode == BUNDLE_NOT_FOUND_HASH)
          {
            return WorkspacesPoolErrorCode::BUNDLE_NOT_FOUND;
          }
          else if (hashCode == DIRECTORY_NOT_FOUND_HASH)
          {
            return WorkspacesPoolErrorCode::DIRECTORY_NOT_FOUND;
          }
          else if (hashCode == INSUFFICIENT_PERMISSIONS_ERROR_HASH)
          {
            return WorkspacesPoolErrorCode::INSUFFICIENT_PERMISSIONS_ERROR;
          }
          else if (hashCode == DEFAULT_OU_IS_MISSING_HASH)
          {
            return WorkspacesPoolErrorCode::DEFAULT_OU_IS_MISSING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspacesPoolErrorCode>(hashCode);
          }

          return WorkspacesPoolErrorCode::NOT_SET;
        }

        Aws::String GetNameForWorkspacesPoolErrorCode(WorkspacesPoolErrorCode enumValue)
        {
          switch(enumValue)
          {
          case WorkspacesPoolErrorCode::NOT_SET:
            return {};
          case WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_IS_MISSING:
            return "IAM_SERVICE_ROLE_IS_MISSING";
          case WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION";
          case WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION";
          case WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION";
          case WorkspacesPoolErrorCode::NETWORK_INTERFACE_LIMIT_EXCEEDED:
            return "NETWORK_INTERFACE_LIMIT_EXCEEDED";
          case WorkspacesPoolErrorCode::INTERNAL_SERVICE_ERROR:
            return "INTERNAL_SERVICE_ERROR";
          case WorkspacesPoolErrorCode::MACHINE_ROLE_IS_MISSING:
            return "MACHINE_ROLE_IS_MISSING";
          case WorkspacesPoolErrorCode::STS_DISABLED_IN_REGION:
            return "STS_DISABLED_IN_REGION";
          case WorkspacesPoolErrorCode::SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES:
            return "SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES";
          case WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION";
          case WorkspacesPoolErrorCode::SUBNET_NOT_FOUND:
            return "SUBNET_NOT_FOUND";
          case WorkspacesPoolErrorCode::IMAGE_NOT_FOUND:
            return "IMAGE_NOT_FOUND";
          case WorkspacesPoolErrorCode::INVALID_SUBNET_CONFIGURATION:
            return "INVALID_SUBNET_CONFIGURATION";
          case WorkspacesPoolErrorCode::SECURITY_GROUPS_NOT_FOUND:
            return "SECURITY_GROUPS_NOT_FOUND";
          case WorkspacesPoolErrorCode::IGW_NOT_ATTACHED:
            return "IGW_NOT_ATTACHED";
          case WorkspacesPoolErrorCode::IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION";
          case WorkspacesPoolErrorCode::WORKSPACES_POOL_STOPPED:
            return "WORKSPACES_POOL_STOPPED";
          case WorkspacesPoolErrorCode::WORKSPACES_POOL_INSTANCE_PROVISIONING_FAILURE:
            return "WORKSPACES_POOL_INSTANCE_PROVISIONING_FAILURE";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_FILE_NOT_FOUND:
            return "DOMAIN_JOIN_ERROR_FILE_NOT_FOUND";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_ACCESS_DENIED:
            return "DOMAIN_JOIN_ERROR_ACCESS_DENIED";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_LOGON_FAILURE:
            return "DOMAIN_JOIN_ERROR_LOGON_FAILURE";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_INVALID_PARAMETER:
            return "DOMAIN_JOIN_ERROR_INVALID_PARAMETER";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_MORE_DATA:
            return "DOMAIN_JOIN_ERROR_MORE_DATA";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN:
            return "DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_NOT_SUPPORTED:
            return "DOMAIN_JOIN_ERROR_NOT_SUPPORTED";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME:
            return "DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED:
            return "DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED:
            return "DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_NERR_PASSWORD_EXPIRED:
            return "DOMAIN_JOIN_NERR_PASSWORD_EXPIRED";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_INTERNAL_SERVICE_ERROR:
            return "DOMAIN_JOIN_INTERNAL_SERVICE_ERROR";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_ACTION_PERMISSION_IS_MISSING:
            return "DOMAIN_JOIN_ERROR_SECRET_ACTION_PERMISSION_IS_MISSING";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_DECRYPTION_FAILURE:
            return "DOMAIN_JOIN_ERROR_SECRET_DECRYPTION_FAILURE";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_STATE_INVALID:
            return "DOMAIN_JOIN_ERROR_SECRET_STATE_INVALID";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_NOT_FOUND:
            return "DOMAIN_JOIN_ERROR_SECRET_NOT_FOUND";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_VALUE_KEY_NOT_FOUND:
            return "DOMAIN_JOIN_ERROR_SECRET_VALUE_KEY_NOT_FOUND";
          case WorkspacesPoolErrorCode::DOMAIN_JOIN_ERROR_SECRET_INVALID:
            return "DOMAIN_JOIN_ERROR_SECRET_INVALID";
          case WorkspacesPoolErrorCode::BUNDLE_NOT_FOUND:
            return "BUNDLE_NOT_FOUND";
          case WorkspacesPoolErrorCode::DIRECTORY_NOT_FOUND:
            return "DIRECTORY_NOT_FOUND";
          case WorkspacesPoolErrorCode::INSUFFICIENT_PERMISSIONS_ERROR:
            return "INSUFFICIENT_PERMISSIONS_ERROR";
          case WorkspacesPoolErrorCode::DEFAULT_OU_IS_MISSING:
            return "DEFAULT_OU_IS_MISSING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspacesPoolErrorCodeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
