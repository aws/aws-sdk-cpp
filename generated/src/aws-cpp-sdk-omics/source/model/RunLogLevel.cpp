/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunLogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace RunLogLevelMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int FATAL_HASH = HashingUtils::HashString("FATAL");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        RunLogLevel GetRunLogLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return RunLogLevel::OFF;
          }
          else if (hashCode == FATAL_HASH)
          {
            return RunLogLevel::FATAL;
          }
          else if (hashCode == ERROR__HASH)
          {
            return RunLogLevel::ERROR_;
          }
          else if (hashCode == ALL_HASH)
          {
            return RunLogLevel::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunLogLevel>(hashCode);
          }

          return RunLogLevel::NOT_SET;
        }

        Aws::String GetNameForRunLogLevel(RunLogLevel enumValue)
        {
          switch(enumValue)
          {
          case RunLogLevel::OFF:
            return "OFF";
          case RunLogLevel::FATAL:
            return "FATAL";
          case RunLogLevel::ERROR_:
            return "ERROR";
          case RunLogLevel::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunLogLevelMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
