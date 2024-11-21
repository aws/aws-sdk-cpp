/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NodeAttributeName.h>
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
      namespace NodeAttributeNameMapper
      {

        static const int AgentVersion_HASH = HashingUtils::HashString("AgentVersion");
        static const int PlatformName_HASH = HashingUtils::HashString("PlatformName");
        static const int PlatformType_HASH = HashingUtils::HashString("PlatformType");
        static const int PlatformVersion_HASH = HashingUtils::HashString("PlatformVersion");
        static const int Region_HASH = HashingUtils::HashString("Region");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");


        NodeAttributeName GetNodeAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AgentVersion_HASH)
          {
            return NodeAttributeName::AgentVersion;
          }
          else if (hashCode == PlatformName_HASH)
          {
            return NodeAttributeName::PlatformName;
          }
          else if (hashCode == PlatformType_HASH)
          {
            return NodeAttributeName::PlatformType;
          }
          else if (hashCode == PlatformVersion_HASH)
          {
            return NodeAttributeName::PlatformVersion;
          }
          else if (hashCode == Region_HASH)
          {
            return NodeAttributeName::Region;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return NodeAttributeName::ResourceType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeAttributeName>(hashCode);
          }

          return NodeAttributeName::NOT_SET;
        }

        Aws::String GetNameForNodeAttributeName(NodeAttributeName enumValue)
        {
          switch(enumValue)
          {
          case NodeAttributeName::NOT_SET:
            return {};
          case NodeAttributeName::AgentVersion:
            return "AgentVersion";
          case NodeAttributeName::PlatformName:
            return "PlatformName";
          case NodeAttributeName::PlatformType:
            return "PlatformType";
          case NodeAttributeName::PlatformVersion:
            return "PlatformVersion";
          case NodeAttributeName::Region:
            return "Region";
          case NodeAttributeName::ResourceType:
            return "ResourceType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeAttributeNameMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
