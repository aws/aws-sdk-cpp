/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceInformationFilterKey.h>
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
      namespace InstanceInformationFilterKeyMapper
      {

        static constexpr uint32_t InstanceIds_HASH = ConstExprHashingUtils::HashString("InstanceIds");
        static constexpr uint32_t AgentVersion_HASH = ConstExprHashingUtils::HashString("AgentVersion");
        static constexpr uint32_t PingStatus_HASH = ConstExprHashingUtils::HashString("PingStatus");
        static constexpr uint32_t PlatformTypes_HASH = ConstExprHashingUtils::HashString("PlatformTypes");
        static constexpr uint32_t ActivationIds_HASH = ConstExprHashingUtils::HashString("ActivationIds");
        static constexpr uint32_t IamRole_HASH = ConstExprHashingUtils::HashString("IamRole");
        static constexpr uint32_t ResourceType_HASH = ConstExprHashingUtils::HashString("ResourceType");
        static constexpr uint32_t AssociationStatus_HASH = ConstExprHashingUtils::HashString("AssociationStatus");


        InstanceInformationFilterKey GetInstanceInformationFilterKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceIds_HASH)
          {
            return InstanceInformationFilterKey::InstanceIds;
          }
          else if (hashCode == AgentVersion_HASH)
          {
            return InstanceInformationFilterKey::AgentVersion;
          }
          else if (hashCode == PingStatus_HASH)
          {
            return InstanceInformationFilterKey::PingStatus;
          }
          else if (hashCode == PlatformTypes_HASH)
          {
            return InstanceInformationFilterKey::PlatformTypes;
          }
          else if (hashCode == ActivationIds_HASH)
          {
            return InstanceInformationFilterKey::ActivationIds;
          }
          else if (hashCode == IamRole_HASH)
          {
            return InstanceInformationFilterKey::IamRole;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return InstanceInformationFilterKey::ResourceType;
          }
          else if (hashCode == AssociationStatus_HASH)
          {
            return InstanceInformationFilterKey::AssociationStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceInformationFilterKey>(hashCode);
          }

          return InstanceInformationFilterKey::NOT_SET;
        }

        Aws::String GetNameForInstanceInformationFilterKey(InstanceInformationFilterKey enumValue)
        {
          switch(enumValue)
          {
          case InstanceInformationFilterKey::NOT_SET:
            return {};
          case InstanceInformationFilterKey::InstanceIds:
            return "InstanceIds";
          case InstanceInformationFilterKey::AgentVersion:
            return "AgentVersion";
          case InstanceInformationFilterKey::PingStatus:
            return "PingStatus";
          case InstanceInformationFilterKey::PlatformTypes:
            return "PlatformTypes";
          case InstanceInformationFilterKey::ActivationIds:
            return "ActivationIds";
          case InstanceInformationFilterKey::IamRole:
            return "IamRole";
          case InstanceInformationFilterKey::ResourceType:
            return "ResourceType";
          case InstanceInformationFilterKey::AssociationStatus:
            return "AssociationStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceInformationFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
