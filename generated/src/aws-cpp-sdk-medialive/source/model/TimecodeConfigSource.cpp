/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TimecodeConfigSource.h>
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
      namespace TimecodeConfigSourceMapper
      {

        static constexpr uint32_t EMBEDDED_HASH = ConstExprHashingUtils::HashString("EMBEDDED");
        static constexpr uint32_t SYSTEMCLOCK_HASH = ConstExprHashingUtils::HashString("SYSTEMCLOCK");
        static constexpr uint32_t ZEROBASED_HASH = ConstExprHashingUtils::HashString("ZEROBASED");


        TimecodeConfigSource GetTimecodeConfigSourceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMBEDDED_HASH)
          {
            return TimecodeConfigSource::EMBEDDED;
          }
          else if (hashCode == SYSTEMCLOCK_HASH)
          {
            return TimecodeConfigSource::SYSTEMCLOCK;
          }
          else if (hashCode == ZEROBASED_HASH)
          {
            return TimecodeConfigSource::ZEROBASED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimecodeConfigSource>(hashCode);
          }

          return TimecodeConfigSource::NOT_SET;
        }

        Aws::String GetNameForTimecodeConfigSource(TimecodeConfigSource enumValue)
        {
          switch(enumValue)
          {
          case TimecodeConfigSource::NOT_SET:
            return {};
          case TimecodeConfigSource::EMBEDDED:
            return "EMBEDDED";
          case TimecodeConfigSource::SYSTEMCLOCK:
            return "SYSTEMCLOCK";
          case TimecodeConfigSource::ZEROBASED:
            return "ZEROBASED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimecodeConfigSourceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
