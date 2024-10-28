/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/NodeOptionsNodeType.h>
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
      namespace NodeOptionsNodeTypeMapper
      {

        static const int coordinator_HASH = HashingUtils::HashString("coordinator");


        NodeOptionsNodeType GetNodeOptionsNodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == coordinator_HASH)
          {
            return NodeOptionsNodeType::coordinator;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeOptionsNodeType>(hashCode);
          }

          return NodeOptionsNodeType::NOT_SET;
        }

        Aws::String GetNameForNodeOptionsNodeType(NodeOptionsNodeType enumValue)
        {
          switch(enumValue)
          {
          case NodeOptionsNodeType::NOT_SET:
            return {};
          case NodeOptionsNodeType::coordinator:
            return "coordinator";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeOptionsNodeTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
