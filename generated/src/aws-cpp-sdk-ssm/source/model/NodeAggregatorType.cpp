/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NodeAggregatorType.h>
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
      namespace NodeAggregatorTypeMapper
      {

        static const int Count_HASH = HashingUtils::HashString("Count");


        NodeAggregatorType GetNodeAggregatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Count_HASH)
          {
            return NodeAggregatorType::Count;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeAggregatorType>(hashCode);
          }

          return NodeAggregatorType::NOT_SET;
        }

        Aws::String GetNameForNodeAggregatorType(NodeAggregatorType enumValue)
        {
          switch(enumValue)
          {
          case NodeAggregatorType::NOT_SET:
            return {};
          case NodeAggregatorType::Count:
            return "Count";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeAggregatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
