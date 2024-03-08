/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/FailoverMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace FailoverModeMapper
      {

        static const int MERGE_HASH = HashingUtils::HashString("MERGE");
        static const int FAILOVER_HASH = HashingUtils::HashString("FAILOVER");


        FailoverMode GetFailoverModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MERGE_HASH)
          {
            return FailoverMode::MERGE;
          }
          else if (hashCode == FAILOVER_HASH)
          {
            return FailoverMode::FAILOVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailoverMode>(hashCode);
          }

          return FailoverMode::NOT_SET;
        }

        Aws::String GetNameForFailoverMode(FailoverMode enumValue)
        {
          switch(enumValue)
          {
          case FailoverMode::NOT_SET:
            return {};
          case FailoverMode::MERGE:
            return "MERGE";
          case FailoverMode::FAILOVER:
            return "FAILOVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailoverModeMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
