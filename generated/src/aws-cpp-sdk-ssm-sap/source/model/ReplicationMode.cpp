/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ReplicationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ReplicationModeMapper
      {

        static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SYNC_HASH = HashingUtils::HashString("SYNC");
        static const int SYNCMEM_HASH = HashingUtils::HashString("SYNCMEM");
        static const int ASYNC_HASH = HashingUtils::HashString("ASYNC");


        ReplicationMode GetReplicationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_HASH)
          {
            return ReplicationMode::PRIMARY;
          }
          else if (hashCode == NONE_HASH)
          {
            return ReplicationMode::NONE;
          }
          else if (hashCode == SYNC_HASH)
          {
            return ReplicationMode::SYNC;
          }
          else if (hashCode == SYNCMEM_HASH)
          {
            return ReplicationMode::SYNCMEM;
          }
          else if (hashCode == ASYNC_HASH)
          {
            return ReplicationMode::ASYNC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationMode>(hashCode);
          }

          return ReplicationMode::NOT_SET;
        }

        Aws::String GetNameForReplicationMode(ReplicationMode enumValue)
        {
          switch(enumValue)
          {
          case ReplicationMode::NOT_SET:
            return {};
          case ReplicationMode::PRIMARY:
            return "PRIMARY";
          case ReplicationMode::NONE:
            return "NONE";
          case ReplicationMode::SYNC:
            return "SYNC";
          case ReplicationMode::SYNCMEM:
            return "SYNCMEM";
          case ReplicationMode::ASYNC:
            return "ASYNC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationModeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
