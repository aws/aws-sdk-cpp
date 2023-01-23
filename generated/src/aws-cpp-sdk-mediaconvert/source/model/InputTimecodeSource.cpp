/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputTimecodeSource.h>
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
      namespace InputTimecodeSourceMapper
      {

        static const int EMBEDDED_HASH = HashingUtils::HashString("EMBEDDED");
        static const int ZEROBASED_HASH = HashingUtils::HashString("ZEROBASED");
        static const int SPECIFIEDSTART_HASH = HashingUtils::HashString("SPECIFIEDSTART");


        InputTimecodeSource GetInputTimecodeSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMBEDDED_HASH)
          {
            return InputTimecodeSource::EMBEDDED;
          }
          else if (hashCode == ZEROBASED_HASH)
          {
            return InputTimecodeSource::ZEROBASED;
          }
          else if (hashCode == SPECIFIEDSTART_HASH)
          {
            return InputTimecodeSource::SPECIFIEDSTART;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputTimecodeSource>(hashCode);
          }

          return InputTimecodeSource::NOT_SET;
        }

        Aws::String GetNameForInputTimecodeSource(InputTimecodeSource enumValue)
        {
          switch(enumValue)
          {
          case InputTimecodeSource::EMBEDDED:
            return "EMBEDDED";
          case InputTimecodeSource::ZEROBASED:
            return "ZEROBASED";
          case InputTimecodeSource::SPECIFIEDSTART:
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

      } // namespace InputTimecodeSourceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
