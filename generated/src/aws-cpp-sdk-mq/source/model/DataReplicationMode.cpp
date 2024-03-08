/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DataReplicationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace DataReplicationModeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int CRDR_HASH = HashingUtils::HashString("CRDR");


        DataReplicationMode GetDataReplicationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DataReplicationMode::NONE;
          }
          else if (hashCode == CRDR_HASH)
          {
            return DataReplicationMode::CRDR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataReplicationMode>(hashCode);
          }

          return DataReplicationMode::NOT_SET;
        }

        Aws::String GetNameForDataReplicationMode(DataReplicationMode enumValue)
        {
          switch(enumValue)
          {
          case DataReplicationMode::NOT_SET:
            return {};
          case DataReplicationMode::NONE:
            return "NONE";
          case DataReplicationMode::CRDR:
            return "CRDR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataReplicationModeMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
