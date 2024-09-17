/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstancePropertyFilterKey.h>
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
      namespace InstancePropertyFilterKeyMapper
      {

        static const int InstanceIds_HASH = HashingUtils::HashString("InstanceIds");
        static const int AgentVersion_HASH = HashingUtils::HashString("AgentVersion");
        static const int PingStatus_HASH = HashingUtils::HashString("PingStatus");
        static const int PlatformTypes_HASH = HashingUtils::HashString("PlatformTypes");
        static const int DocumentName_HASH = HashingUtils::HashString("DocumentName");
        static const int ActivationIds_HASH = HashingUtils::HashString("ActivationIds");
        static const int IamRole_HASH = HashingUtils::HashString("IamRole");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
        static const int AssociationStatus_HASH = HashingUtils::HashString("AssociationStatus");


        InstancePropertyFilterKey GetInstancePropertyFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceIds_HASH)
          {
            return InstancePropertyFilterKey::InstanceIds;
          }
          else if (hashCode == AgentVersion_HASH)
          {
            return InstancePropertyFilterKey::AgentVersion;
          }
          else if (hashCode == PingStatus_HASH)
          {
            return InstancePropertyFilterKey::PingStatus;
          }
          else if (hashCode == PlatformTypes_HASH)
          {
            return InstancePropertyFilterKey::PlatformTypes;
          }
          else if (hashCode == DocumentName_HASH)
          {
            return InstancePropertyFilterKey::DocumentName;
          }
          else if (hashCode == ActivationIds_HASH)
          {
            return InstancePropertyFilterKey::ActivationIds;
          }
          else if (hashCode == IamRole_HASH)
          {
            return InstancePropertyFilterKey::IamRole;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return InstancePropertyFilterKey::ResourceType;
          }
          else if (hashCode == AssociationStatus_HASH)
          {
            return InstancePropertyFilterKey::AssociationStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstancePropertyFilterKey>(hashCode);
          }

          return InstancePropertyFilterKey::NOT_SET;
        }

        Aws::String GetNameForInstancePropertyFilterKey(InstancePropertyFilterKey enumValue)
        {
          switch(enumValue)
          {
          case InstancePropertyFilterKey::NOT_SET:
            return {};
          case InstancePropertyFilterKey::InstanceIds:
            return "InstanceIds";
          case InstancePropertyFilterKey::AgentVersion:
            return "AgentVersion";
          case InstancePropertyFilterKey::PingStatus:
            return "PingStatus";
          case InstancePropertyFilterKey::PlatformTypes:
            return "PlatformTypes";
          case InstancePropertyFilterKey::DocumentName:
            return "DocumentName";
          case InstancePropertyFilterKey::ActivationIds:
            return "ActivationIds";
          case InstancePropertyFilterKey::IamRole:
            return "IamRole";
          case InstancePropertyFilterKey::ResourceType:
            return "ResourceType";
          case InstancePropertyFilterKey::AssociationStatus:
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

      } // namespace InstancePropertyFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
