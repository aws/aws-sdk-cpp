/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/PromoteMode.h>
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
      namespace PromoteModeMapper
      {

        static const int SWITCHOVER_HASH = HashingUtils::HashString("SWITCHOVER");
        static const int FAILOVER_HASH = HashingUtils::HashString("FAILOVER");


        PromoteMode GetPromoteModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SWITCHOVER_HASH)
          {
            return PromoteMode::SWITCHOVER;
          }
          else if (hashCode == FAILOVER_HASH)
          {
            return PromoteMode::FAILOVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PromoteMode>(hashCode);
          }

          return PromoteMode::NOT_SET;
        }

        Aws::String GetNameForPromoteMode(PromoteMode enumValue)
        {
          switch(enumValue)
          {
          case PromoteMode::NOT_SET:
            return {};
          case PromoteMode::SWITCHOVER:
            return "SWITCHOVER";
          case PromoteMode::FAILOVER:
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

      } // namespace PromoteModeMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
