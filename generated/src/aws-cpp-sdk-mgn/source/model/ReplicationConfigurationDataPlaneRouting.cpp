/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ReplicationConfigurationDataPlaneRouting.h>
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
      namespace ReplicationConfigurationDataPlaneRoutingMapper
      {

        static const int PRIVATE_IP_HASH = HashingUtils::HashString("PRIVATE_IP");
        static const int PUBLIC_IP_HASH = HashingUtils::HashString("PUBLIC_IP");


        ReplicationConfigurationDataPlaneRouting GetReplicationConfigurationDataPlaneRoutingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIVATE_IP_HASH)
          {
            return ReplicationConfigurationDataPlaneRouting::PRIVATE_IP;
          }
          else if (hashCode == PUBLIC_IP_HASH)
          {
            return ReplicationConfigurationDataPlaneRouting::PUBLIC_IP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationConfigurationDataPlaneRouting>(hashCode);
          }

          return ReplicationConfigurationDataPlaneRouting::NOT_SET;
        }

        Aws::String GetNameForReplicationConfigurationDataPlaneRouting(ReplicationConfigurationDataPlaneRouting enumValue)
        {
          switch(enumValue)
          {
          case ReplicationConfigurationDataPlaneRouting::NOT_SET:
            return {};
          case ReplicationConfigurationDataPlaneRouting::PRIVATE_IP:
            return "PRIVATE_IP";
          case ReplicationConfigurationDataPlaneRouting::PUBLIC_IP:
            return "PUBLIC_IP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationConfigurationDataPlaneRoutingMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
