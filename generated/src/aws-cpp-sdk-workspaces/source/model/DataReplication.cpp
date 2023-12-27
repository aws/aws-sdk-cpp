/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DataReplication.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace DataReplicationMapper
      {

        static const int NO_REPLICATION_HASH = HashingUtils::HashString("NO_REPLICATION");
        static const int PRIMARY_AS_SOURCE_HASH = HashingUtils::HashString("PRIMARY_AS_SOURCE");


        DataReplication GetDataReplicationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_REPLICATION_HASH)
          {
            return DataReplication::NO_REPLICATION;
          }
          else if (hashCode == PRIMARY_AS_SOURCE_HASH)
          {
            return DataReplication::PRIMARY_AS_SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataReplication>(hashCode);
          }

          return DataReplication::NOT_SET;
        }

        Aws::String GetNameForDataReplication(DataReplication enumValue)
        {
          switch(enumValue)
          {
          case DataReplication::NOT_SET:
            return {};
          case DataReplication::NO_REPLICATION:
            return "NO_REPLICATION";
          case DataReplication::PRIMARY_AS_SOURCE:
            return "PRIMARY_AS_SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataReplicationMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
