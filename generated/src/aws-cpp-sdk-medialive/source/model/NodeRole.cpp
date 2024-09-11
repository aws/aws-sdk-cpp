/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NodeRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace NodeRoleMapper
      {

        static const int BACKUP_HASH = HashingUtils::HashString("BACKUP");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        NodeRole GetNodeRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BACKUP_HASH)
          {
            return NodeRole::BACKUP;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return NodeRole::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeRole>(hashCode);
          }

          return NodeRole::NOT_SET;
        }

        Aws::String GetNameForNodeRole(NodeRole enumValue)
        {
          switch(enumValue)
          {
          case NodeRole::NOT_SET:
            return {};
          case NodeRole::BACKUP:
            return "BACKUP";
          case NodeRole::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeRoleMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
