/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/GlobalConfigurationOutputTimingSource.h>
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
      namespace GlobalConfigurationOutputTimingSourceMapper
      {

        static constexpr uint32_t INPUT_CLOCK_HASH = ConstExprHashingUtils::HashString("INPUT_CLOCK");
        static constexpr uint32_t SYSTEM_CLOCK_HASH = ConstExprHashingUtils::HashString("SYSTEM_CLOCK");


        GlobalConfigurationOutputTimingSource GetGlobalConfigurationOutputTimingSourceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPUT_CLOCK_HASH)
          {
            return GlobalConfigurationOutputTimingSource::INPUT_CLOCK;
          }
          else if (hashCode == SYSTEM_CLOCK_HASH)
          {
            return GlobalConfigurationOutputTimingSource::SYSTEM_CLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalConfigurationOutputTimingSource>(hashCode);
          }

          return GlobalConfigurationOutputTimingSource::NOT_SET;
        }

        Aws::String GetNameForGlobalConfigurationOutputTimingSource(GlobalConfigurationOutputTimingSource enumValue)
        {
          switch(enumValue)
          {
          case GlobalConfigurationOutputTimingSource::NOT_SET:
            return {};
          case GlobalConfigurationOutputTimingSource::INPUT_CLOCK:
            return "INPUT_CLOCK";
          case GlobalConfigurationOutputTimingSource::SYSTEM_CLOCK:
            return "SYSTEM_CLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalConfigurationOutputTimingSourceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
