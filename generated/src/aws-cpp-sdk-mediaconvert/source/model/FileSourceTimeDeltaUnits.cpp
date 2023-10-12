/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/FileSourceTimeDeltaUnits.h>
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
      namespace FileSourceTimeDeltaUnitsMapper
      {

        static constexpr uint32_t SECONDS_HASH = ConstExprHashingUtils::HashString("SECONDS");
        static constexpr uint32_t MILLISECONDS_HASH = ConstExprHashingUtils::HashString("MILLISECONDS");


        FileSourceTimeDeltaUnits GetFileSourceTimeDeltaUnitsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECONDS_HASH)
          {
            return FileSourceTimeDeltaUnits::SECONDS;
          }
          else if (hashCode == MILLISECONDS_HASH)
          {
            return FileSourceTimeDeltaUnits::MILLISECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileSourceTimeDeltaUnits>(hashCode);
          }

          return FileSourceTimeDeltaUnits::NOT_SET;
        }

        Aws::String GetNameForFileSourceTimeDeltaUnits(FileSourceTimeDeltaUnits enumValue)
        {
          switch(enumValue)
          {
          case FileSourceTimeDeltaUnits::NOT_SET:
            return {};
          case FileSourceTimeDeltaUnits::SECONDS:
            return "SECONDS";
          case FileSourceTimeDeltaUnits::MILLISECONDS:
            return "MILLISECONDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileSourceTimeDeltaUnitsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
