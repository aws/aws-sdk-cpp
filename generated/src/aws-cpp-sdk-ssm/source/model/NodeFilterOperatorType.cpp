/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NodeFilterOperatorType.h>
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
      namespace NodeFilterOperatorTypeMapper
      {

        static const int Equal_HASH = HashingUtils::HashString("Equal");
        static const int NotEqual_HASH = HashingUtils::HashString("NotEqual");
        static const int BeginWith_HASH = HashingUtils::HashString("BeginWith");


        NodeFilterOperatorType GetNodeFilterOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return NodeFilterOperatorType::Equal;
          }
          else if (hashCode == NotEqual_HASH)
          {
            return NodeFilterOperatorType::NotEqual;
          }
          else if (hashCode == BeginWith_HASH)
          {
            return NodeFilterOperatorType::BeginWith;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeFilterOperatorType>(hashCode);
          }

          return NodeFilterOperatorType::NOT_SET;
        }

        Aws::String GetNameForNodeFilterOperatorType(NodeFilterOperatorType enumValue)
        {
          switch(enumValue)
          {
          case NodeFilterOperatorType::NOT_SET:
            return {};
          case NodeFilterOperatorType::Equal:
            return "Equal";
          case NodeFilterOperatorType::NotEqual:
            return "NotEqual";
          case NodeFilterOperatorType::BeginWith:
            return "BeginWith";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeFilterOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
