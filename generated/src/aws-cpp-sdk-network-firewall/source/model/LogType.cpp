/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/LogType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace LogTypeMapper
      {

        static const int ALERT_HASH = HashingUtils::HashString("ALERT");
        static const int FLOW_HASH = HashingUtils::HashString("FLOW");


        LogType GetLogTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALERT_HASH)
          {
            return LogType::ALERT;
          }
          else if (hashCode == FLOW_HASH)
          {
            return LogType::FLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogType>(hashCode);
          }

          return LogType::NOT_SET;
        }

        Aws::String GetNameForLogType(LogType enumValue)
        {
          switch(enumValue)
          {
          case LogType::ALERT:
            return "ALERT";
          case LogType::FLOW:
            return "FLOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
