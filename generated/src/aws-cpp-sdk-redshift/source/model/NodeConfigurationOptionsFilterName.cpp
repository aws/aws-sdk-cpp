/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/NodeConfigurationOptionsFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace NodeConfigurationOptionsFilterNameMapper
      {

        static const int NodeType_HASH = HashingUtils::HashString("NodeType");
        static const int NumberOfNodes_HASH = HashingUtils::HashString("NumberOfNodes");
        static const int EstimatedDiskUtilizationPercent_HASH = HashingUtils::HashString("EstimatedDiskUtilizationPercent");
        static const int Mode_HASH = HashingUtils::HashString("Mode");


        NodeConfigurationOptionsFilterName GetNodeConfigurationOptionsFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NodeType_HASH)
          {
            return NodeConfigurationOptionsFilterName::NodeType;
          }
          else if (hashCode == NumberOfNodes_HASH)
          {
            return NodeConfigurationOptionsFilterName::NumberOfNodes;
          }
          else if (hashCode == EstimatedDiskUtilizationPercent_HASH)
          {
            return NodeConfigurationOptionsFilterName::EstimatedDiskUtilizationPercent;
          }
          else if (hashCode == Mode_HASH)
          {
            return NodeConfigurationOptionsFilterName::Mode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeConfigurationOptionsFilterName>(hashCode);
          }

          return NodeConfigurationOptionsFilterName::NOT_SET;
        }

        Aws::String GetNameForNodeConfigurationOptionsFilterName(NodeConfigurationOptionsFilterName enumValue)
        {
          switch(enumValue)
          {
          case NodeConfigurationOptionsFilterName::NodeType:
            return "NodeType";
          case NodeConfigurationOptionsFilterName::NumberOfNodes:
            return "NumberOfNodes";
          case NodeConfigurationOptionsFilterName::EstimatedDiskUtilizationPercent:
            return "EstimatedDiskUtilizationPercent";
          case NodeConfigurationOptionsFilterName::Mode:
            return "Mode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeConfigurationOptionsFilterNameMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
