/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NodeTypeName.h>
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
      namespace NodeTypeNameMapper
      {

        static const int Instance_HASH = HashingUtils::HashString("Instance");


        NodeTypeName GetNodeTypeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Instance_HASH)
          {
            return NodeTypeName::Instance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeTypeName>(hashCode);
          }

          return NodeTypeName::NOT_SET;
        }

        Aws::String GetNameForNodeTypeName(NodeTypeName enumValue)
        {
          switch(enumValue)
          {
          case NodeTypeName::NOT_SET:
            return {};
          case NodeTypeName::Instance:
            return "Instance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeTypeNameMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
