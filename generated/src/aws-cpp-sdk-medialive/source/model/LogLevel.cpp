/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/LogLevel.h>
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
      namespace LogLevelMapper
      {

        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t WARNING_HASH = ConstExprHashingUtils::HashString("WARNING");
        static constexpr uint32_t INFO_HASH = ConstExprHashingUtils::HashString("INFO");
        static constexpr uint32_t DEBUG__HASH = ConstExprHashingUtils::HashString("DEBUG");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        LogLevel GetLogLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return LogLevel::ERROR_;
          }
          else if (hashCode == WARNING_HASH)
          {
            return LogLevel::WARNING;
          }
          else if (hashCode == INFO_HASH)
          {
            return LogLevel::INFO;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return LogLevel::DEBUG_;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return LogLevel::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogLevel>(hashCode);
          }

          return LogLevel::NOT_SET;
        }

        Aws::String GetNameForLogLevel(LogLevel enumValue)
        {
          switch(enumValue)
          {
          case LogLevel::NOT_SET:
            return {};
          case LogLevel::ERROR_:
            return "ERROR";
          case LogLevel::WARNING:
            return "WARNING";
          case LogLevel::INFO:
            return "INFO";
          case LogLevel::DEBUG_:
            return "DEBUG";
          case LogLevel::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogLevelMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
