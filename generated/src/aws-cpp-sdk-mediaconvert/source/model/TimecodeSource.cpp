/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TimecodeSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace TimecodeSourceMapper
      {

        static constexpr uint32_t EMBEDDED_HASH = ConstExprHashingUtils::HashString("EMBEDDED");
        static constexpr uint32_t ZEROBASED_HASH = ConstExprHashingUtils::HashString("ZEROBASED");
        static constexpr uint32_t SPECIFIEDSTART_HASH = ConstExprHashingUtils::HashString("SPECIFIEDSTART");


        TimecodeSource GetTimecodeSourceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMBEDDED_HASH)
          {
            return TimecodeSource::EMBEDDED;
          }
          else if (hashCode == ZEROBASED_HASH)
          {
            return TimecodeSource::ZEROBASED;
          }
          else if (hashCode == SPECIFIEDSTART_HASH)
          {
            return TimecodeSource::SPECIFIEDSTART;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimecodeSource>(hashCode);
          }

          return TimecodeSource::NOT_SET;
        }

        Aws::String GetNameForTimecodeSource(TimecodeSource enumValue)
        {
          switch(enumValue)
          {
          case TimecodeSource::NOT_SET:
            return {};
          case TimecodeSource::EMBEDDED:
            return "EMBEDDED";
          case TimecodeSource::ZEROBASED:
            return "ZEROBASED";
          case TimecodeSource::SPECIFIEDSTART:
            return "SPECIFIEDSTART";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimecodeSourceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
