/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/LoggingStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace LoggingStrategyMapper
      {

        static const int VENDED_LOGS_HASH = HashingUtils::HashString("VENDED_LOGS");
        static const int LEGACY_CLOUDWATCH_HASH = HashingUtils::HashString("LEGACY_CLOUDWATCH");


        LoggingStrategy GetLoggingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VENDED_LOGS_HASH)
          {
            return LoggingStrategy::VENDED_LOGS;
          }
          else if (hashCode == LEGACY_CLOUDWATCH_HASH)
          {
            return LoggingStrategy::LEGACY_CLOUDWATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoggingStrategy>(hashCode);
          }

          return LoggingStrategy::NOT_SET;
        }

        Aws::String GetNameForLoggingStrategy(LoggingStrategy enumValue)
        {
          switch(enumValue)
          {
          case LoggingStrategy::NOT_SET:
            return {};
          case LoggingStrategy::VENDED_LOGS:
            return "VENDED_LOGS";
          case LoggingStrategy::LEGACY_CLOUDWATCH:
            return "LEGACY_CLOUDWATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoggingStrategyMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
