/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NodeFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace NodeFilterKeyMapper
      {

        static const int AgentType_HASH = HashingUtils::HashString("AgentType");
        static const int AgentVersion_HASH = HashingUtils::HashString("AgentVersion");
        static const int ComputerName_HASH = HashingUtils::HashString("ComputerName");
        static const int InstanceId_HASH = HashingUtils::HashString("InstanceId");
        static const int InstanceStatus_HASH = HashingUtils::HashString("InstanceStatus");
        static const int IpAddress_HASH = HashingUtils::HashString("IpAddress");
        static const int ManagedStatus_HASH = HashingUtils::HashString("ManagedStatus");
        static const int PlatformName_HASH = HashingUtils::HashString("PlatformName");
        static const int PlatformType_HASH = HashingUtils::HashString("PlatformType");
        static const int PlatformVersion_HASH = HashingUtils::HashString("PlatformVersion");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
        static const int OrganizationalUnitId_HASH = HashingUtils::HashString("OrganizationalUnitId");
        static const int OrganizationalUnitPath_HASH = HashingUtils::HashString("OrganizationalUnitPath");
        static const int Region_HASH = HashingUtils::HashString("Region");
        static const int AccountId_HASH = HashingUtils::HashString("AccountId");


        NodeFilterKey GetNodeFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AgentType_HASH)
          {
            return NodeFilterKey::AgentType;
          }
          else if (hashCode == AgentVersion_HASH)
          {
            return NodeFilterKey::AgentVersion;
          }
          else if (hashCode == ComputerName_HASH)
          {
            return NodeFilterKey::ComputerName;
          }
          else if (hashCode == InstanceId_HASH)
          {
            return NodeFilterKey::InstanceId;
          }
          else if (hashCode == InstanceStatus_HASH)
          {
            return NodeFilterKey::InstanceStatus;
          }
          else if (hashCode == IpAddress_HASH)
          {
            return NodeFilterKey::IpAddress;
          }
          else if (hashCode == ManagedStatus_HASH)
          {
            return NodeFilterKey::ManagedStatus;
          }
          else if (hashCode == PlatformName_HASH)
          {
            return NodeFilterKey::PlatformName;
          }
          else if (hashCode == PlatformType_HASH)
          {
            return NodeFilterKey::PlatformType;
          }
          else if (hashCode == PlatformVersion_HASH)
          {
            return NodeFilterKey::PlatformVersion;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return NodeFilterKey::ResourceType;
          }
          else if (hashCode == OrganizationalUnitId_HASH)
          {
            return NodeFilterKey::OrganizationalUnitId;
          }
          else if (hashCode == OrganizationalUnitPath_HASH)
          {
            return NodeFilterKey::OrganizationalUnitPath;
          }
          else if (hashCode == Region_HASH)
          {
            return NodeFilterKey::Region;
          }
          else if (hashCode == AccountId_HASH)
          {
            return NodeFilterKey::AccountId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeFilterKey>(hashCode);
          }

          return NodeFilterKey::NOT_SET;
        }

        Aws::String GetNameForNodeFilterKey(NodeFilterKey enumValue)
        {
          switch(enumValue)
          {
          case NodeFilterKey::NOT_SET:
            return {};
          case NodeFilterKey::AgentType:
            return "AgentType";
          case NodeFilterKey::AgentVersion:
            return "AgentVersion";
          case NodeFilterKey::ComputerName:
            return "ComputerName";
          case NodeFilterKey::InstanceId:
            return "InstanceId";
          case NodeFilterKey::InstanceStatus:
            return "InstanceStatus";
          case NodeFilterKey::IpAddress:
            return "IpAddress";
          case NodeFilterKey::ManagedStatus:
            return "ManagedStatus";
          case NodeFilterKey::PlatformName:
            return "PlatformName";
          case NodeFilterKey::PlatformType:
            return "PlatformType";
          case NodeFilterKey::PlatformVersion:
            return "PlatformVersion";
          case NodeFilterKey::ResourceType:
            return "ResourceType";
          case NodeFilterKey::OrganizationalUnitId:
            return "OrganizationalUnitId";
          case NodeFilterKey::OrganizationalUnitPath:
            return "OrganizationalUnitPath";
          case NodeFilterKey::Region:
            return "Region";
          case NodeFilterKey::AccountId:
            return "AccountId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
