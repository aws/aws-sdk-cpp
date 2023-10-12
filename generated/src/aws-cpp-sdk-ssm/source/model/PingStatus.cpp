/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PingStatus.h>
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
      namespace PingStatusMapper
      {

        static constexpr uint32_t Online_HASH = ConstExprHashingUtils::HashString("Online");
        static constexpr uint32_t ConnectionLost_HASH = ConstExprHashingUtils::HashString("ConnectionLost");
        static constexpr uint32_t Inactive_HASH = ConstExprHashingUtils::HashString("Inactive");


        PingStatus GetPingStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Online_HASH)
          {
            return PingStatus::Online;
          }
          else if (hashCode == ConnectionLost_HASH)
          {
            return PingStatus::ConnectionLost;
          }
          else if (hashCode == Inactive_HASH)
          {
            return PingStatus::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PingStatus>(hashCode);
          }

          return PingStatus::NOT_SET;
        }

        Aws::String GetNameForPingStatus(PingStatus enumValue)
        {
          switch(enumValue)
          {
          case PingStatus::NOT_SET:
            return {};
          case PingStatus::Online:
            return "Online";
          case PingStatus::ConnectionLost:
            return "ConnectionLost";
          case PingStatus::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PingStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
