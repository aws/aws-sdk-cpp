/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ReplicationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace ReplicationTypeMapper
      {

        static const int AGENT_BASED_HASH = HashingUtils::HashString("AGENT_BASED");
        static const int SNAPSHOT_SHIPPING_HASH = HashingUtils::HashString("SNAPSHOT_SHIPPING");


        ReplicationType GetReplicationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_BASED_HASH)
          {
            return ReplicationType::AGENT_BASED;
          }
          else if (hashCode == SNAPSHOT_SHIPPING_HASH)
          {
            return ReplicationType::SNAPSHOT_SHIPPING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationType>(hashCode);
          }

          return ReplicationType::NOT_SET;
        }

        Aws::String GetNameForReplicationType(ReplicationType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationType::NOT_SET:
            return {};
          case ReplicationType::AGENT_BASED:
            return "AGENT_BASED";
          case ReplicationType::SNAPSHOT_SHIPPING:
            return "SNAPSHOT_SHIPPING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationTypeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
