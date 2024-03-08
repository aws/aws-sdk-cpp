/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NielsenWatermarkTimezones.h>
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
      namespace NielsenWatermarkTimezonesMapper
      {

        static const int AMERICA_PUERTO_RICO_HASH = HashingUtils::HashString("AMERICA_PUERTO_RICO");
        static const int US_ALASKA_HASH = HashingUtils::HashString("US_ALASKA");
        static const int US_ARIZONA_HASH = HashingUtils::HashString("US_ARIZONA");
        static const int US_CENTRAL_HASH = HashingUtils::HashString("US_CENTRAL");
        static const int US_EASTERN_HASH = HashingUtils::HashString("US_EASTERN");
        static const int US_HAWAII_HASH = HashingUtils::HashString("US_HAWAII");
        static const int US_MOUNTAIN_HASH = HashingUtils::HashString("US_MOUNTAIN");
        static const int US_PACIFIC_HASH = HashingUtils::HashString("US_PACIFIC");
        static const int US_SAMOA_HASH = HashingUtils::HashString("US_SAMOA");
        static const int UTC_HASH = HashingUtils::HashString("UTC");


        NielsenWatermarkTimezones GetNielsenWatermarkTimezonesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMERICA_PUERTO_RICO_HASH)
          {
            return NielsenWatermarkTimezones::AMERICA_PUERTO_RICO;
          }
          else if (hashCode == US_ALASKA_HASH)
          {
            return NielsenWatermarkTimezones::US_ALASKA;
          }
          else if (hashCode == US_ARIZONA_HASH)
          {
            return NielsenWatermarkTimezones::US_ARIZONA;
          }
          else if (hashCode == US_CENTRAL_HASH)
          {
            return NielsenWatermarkTimezones::US_CENTRAL;
          }
          else if (hashCode == US_EASTERN_HASH)
          {
            return NielsenWatermarkTimezones::US_EASTERN;
          }
          else if (hashCode == US_HAWAII_HASH)
          {
            return NielsenWatermarkTimezones::US_HAWAII;
          }
          else if (hashCode == US_MOUNTAIN_HASH)
          {
            return NielsenWatermarkTimezones::US_MOUNTAIN;
          }
          else if (hashCode == US_PACIFIC_HASH)
          {
            return NielsenWatermarkTimezones::US_PACIFIC;
          }
          else if (hashCode == US_SAMOA_HASH)
          {
            return NielsenWatermarkTimezones::US_SAMOA;
          }
          else if (hashCode == UTC_HASH)
          {
            return NielsenWatermarkTimezones::UTC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NielsenWatermarkTimezones>(hashCode);
          }

          return NielsenWatermarkTimezones::NOT_SET;
        }

        Aws::String GetNameForNielsenWatermarkTimezones(NielsenWatermarkTimezones enumValue)
        {
          switch(enumValue)
          {
          case NielsenWatermarkTimezones::NOT_SET:
            return {};
          case NielsenWatermarkTimezones::AMERICA_PUERTO_RICO:
            return "AMERICA_PUERTO_RICO";
          case NielsenWatermarkTimezones::US_ALASKA:
            return "US_ALASKA";
          case NielsenWatermarkTimezones::US_ARIZONA:
            return "US_ARIZONA";
          case NielsenWatermarkTimezones::US_CENTRAL:
            return "US_CENTRAL";
          case NielsenWatermarkTimezones::US_EASTERN:
            return "US_EASTERN";
          case NielsenWatermarkTimezones::US_HAWAII:
            return "US_HAWAII";
          case NielsenWatermarkTimezones::US_MOUNTAIN:
            return "US_MOUNTAIN";
          case NielsenWatermarkTimezones::US_PACIFIC:
            return "US_PACIFIC";
          case NielsenWatermarkTimezones::US_SAMOA:
            return "US_SAMOA";
          case NielsenWatermarkTimezones::UTC:
            return "UTC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NielsenWatermarkTimezonesMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
