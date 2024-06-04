/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/EpochTimeUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace EpochTimeUnitMapper
      {

        static const int MILLISECONDS_HASH = HashingUtils::HashString("MILLISECONDS");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");
        static const int MICROSECONDS_HASH = HashingUtils::HashString("MICROSECONDS");
        static const int NANOSECONDS_HASH = HashingUtils::HashString("NANOSECONDS");


        EpochTimeUnit GetEpochTimeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MILLISECONDS_HASH)
          {
            return EpochTimeUnit::MILLISECONDS;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return EpochTimeUnit::SECONDS;
          }
          else if (hashCode == MICROSECONDS_HASH)
          {
            return EpochTimeUnit::MICROSECONDS;
          }
          else if (hashCode == NANOSECONDS_HASH)
          {
            return EpochTimeUnit::NANOSECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EpochTimeUnit>(hashCode);
          }

          return EpochTimeUnit::NOT_SET;
        }

        Aws::String GetNameForEpochTimeUnit(EpochTimeUnit enumValue)
        {
          switch(enumValue)
          {
          case EpochTimeUnit::NOT_SET:
            return {};
          case EpochTimeUnit::MILLISECONDS:
            return "MILLISECONDS";
          case EpochTimeUnit::SECONDS:
            return "SECONDS";
          case EpochTimeUnit::MICROSECONDS:
            return "MICROSECONDS";
          case EpochTimeUnit::NANOSECONDS:
            return "NANOSECONDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EpochTimeUnitMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
