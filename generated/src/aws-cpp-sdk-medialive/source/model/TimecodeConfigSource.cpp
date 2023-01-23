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

        static const int EMBEDDED_HASH = HashingUtils::HashString("EMBEDDED");
        static const int SYSTEMCLOCK_HASH = HashingUtils::HashString("SYSTEMCLOCK");
        static const int ZEROBASED_HASH = HashingUtils::HashString("ZEROBASED");


        TimecodeConfigSource GetTimecodeConfigSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
