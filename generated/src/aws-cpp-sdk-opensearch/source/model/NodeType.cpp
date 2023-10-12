/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/NodeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace NodeTypeMapper
      {

        static constexpr uint32_t Data_HASH = ConstExprHashingUtils::HashString("Data");
        static constexpr uint32_t Ultrawarm_HASH = ConstExprHashingUtils::HashString("Ultrawarm");
        static constexpr uint32_t Master_HASH = ConstExprHashingUtils::HashString("Master");


        NodeType GetNodeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Data_HASH)
          {
            return NodeType::Data;
          }
          else if (hashCode == Ultrawarm_HASH)
          {
            return NodeType::Ultrawarm;
          }
          else if (hashCode == Master_HASH)
          {
            return NodeType::Master;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeType>(hashCode);
          }

          return NodeType::NOT_SET;
        }

        Aws::String GetNameForNodeType(NodeType enumValue)
        {
          switch(enumValue)
          {
          case NodeType::NOT_SET:
            return {};
          case NodeType::Data:
            return "Data";
          case NodeType::Ultrawarm:
            return "Ultrawarm";
          case NodeType::Master:
            return "Master";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
