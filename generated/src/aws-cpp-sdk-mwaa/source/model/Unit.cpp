/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/Unit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace UnitMapper
      {

        static const int Seconds_HASH = HashingUtils::HashString("Seconds");
        static const int Microseconds_HASH = HashingUtils::HashString("Microseconds");
        static const int Milliseconds_HASH = HashingUtils::HashString("Milliseconds");
        static const int Bytes_HASH = HashingUtils::HashString("Bytes");
        static const int Kilobytes_HASH = HashingUtils::HashString("Kilobytes");
        static const int Megabytes_HASH = HashingUtils::HashString("Megabytes");
        static const int Gigabytes_HASH = HashingUtils::HashString("Gigabytes");
        static const int Terabytes_HASH = HashingUtils::HashString("Terabytes");
        static const int Bits_HASH = HashingUtils::HashString("Bits");
        static const int Kilobits_HASH = HashingUtils::HashString("Kilobits");
        static const int Megabits_HASH = HashingUtils::HashString("Megabits");
        static const int Gigabits_HASH = HashingUtils::HashString("Gigabits");
        static const int Terabits_HASH = HashingUtils::HashString("Terabits");
        static const int Percent_HASH = HashingUtils::HashString("Percent");
        static const int Count_HASH = HashingUtils::HashString("Count");
        static const int Bytes_Second_HASH = HashingUtils::HashString("Bytes/Second");
        static const int Kilobytes_Second_HASH = HashingUtils::HashString("Kilobytes/Second");
        static const int Megabytes_Second_HASH = HashingUtils::HashString("Megabytes/Second");
        static const int Gigabytes_Second_HASH = HashingUtils::HashString("Gigabytes/Second");
        static const int Terabytes_Second_HASH = HashingUtils::HashString("Terabytes/Second");
        static const int Bits_Second_HASH = HashingUtils::HashString("Bits/Second");
        static const int Kilobits_Second_HASH = HashingUtils::HashString("Kilobits/Second");
        static const int Megabits_Second_HASH = HashingUtils::HashString("Megabits/Second");
        static const int Gigabits_Second_HASH = HashingUtils::HashString("Gigabits/Second");
        static const int Terabits_Second_HASH = HashingUtils::HashString("Terabits/Second");
        static const int Count_Second_HASH = HashingUtils::HashString("Count/Second");
        static const int None_HASH = HashingUtils::HashString("None");


        Unit GetUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Seconds_HASH)
          {
            return Unit::Seconds;
          }
          else if (hashCode == Microseconds_HASH)
          {
            return Unit::Microseconds;
          }
          else if (hashCode == Milliseconds_HASH)
          {
            return Unit::Milliseconds;
          }
          else if (hashCode == Bytes_HASH)
          {
            return Unit::Bytes;
          }
          else if (hashCode == Kilobytes_HASH)
          {
            return Unit::Kilobytes;
          }
          else if (hashCode == Megabytes_HASH)
          {
            return Unit::Megabytes;
          }
          else if (hashCode == Gigabytes_HASH)
          {
            return Unit::Gigabytes;
          }
          else if (hashCode == Terabytes_HASH)
          {
            return Unit::Terabytes;
          }
          else if (hashCode == Bits_HASH)
          {
            return Unit::Bits;
          }
          else if (hashCode == Kilobits_HASH)
          {
            return Unit::Kilobits;
          }
          else if (hashCode == Megabits_HASH)
          {
            return Unit::Megabits;
          }
          else if (hashCode == Gigabits_HASH)
          {
            return Unit::Gigabits;
          }
          else if (hashCode == Terabits_HASH)
          {
            return Unit::Terabits;
          }
          else if (hashCode == Percent_HASH)
          {
            return Unit::Percent;
          }
          else if (hashCode == Count_HASH)
          {
            return Unit::Count;
          }
          else if (hashCode == Bytes_Second_HASH)
          {
            return Unit::Bytes_Second;
          }
          else if (hashCode == Kilobytes_Second_HASH)
          {
            return Unit::Kilobytes_Second;
          }
          else if (hashCode == Megabytes_Second_HASH)
          {
            return Unit::Megabytes_Second;
          }
          else if (hashCode == Gigabytes_Second_HASH)
          {
            return Unit::Gigabytes_Second;
          }
          else if (hashCode == Terabytes_Second_HASH)
          {
            return Unit::Terabytes_Second;
          }
          else if (hashCode == Bits_Second_HASH)
          {
            return Unit::Bits_Second;
          }
          else if (hashCode == Kilobits_Second_HASH)
          {
            return Unit::Kilobits_Second;
          }
          else if (hashCode == Megabits_Second_HASH)
          {
            return Unit::Megabits_Second;
          }
          else if (hashCode == Gigabits_Second_HASH)
          {
            return Unit::Gigabits_Second;
          }
          else if (hashCode == Terabits_Second_HASH)
          {
            return Unit::Terabits_Second;
          }
          else if (hashCode == Count_Second_HASH)
          {
            return Unit::Count_Second;
          }
          else if (hashCode == None_HASH)
          {
            return Unit::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Unit>(hashCode);
          }

          return Unit::NOT_SET;
        }

        Aws::String GetNameForUnit(Unit enumValue)
        {
          switch(enumValue)
          {
          case Unit::Seconds:
            return "Seconds";
          case Unit::Microseconds:
            return "Microseconds";
          case Unit::Milliseconds:
            return "Milliseconds";
          case Unit::Bytes:
            return "Bytes";
          case Unit::Kilobytes:
            return "Kilobytes";
          case Unit::Megabytes:
            return "Megabytes";
          case Unit::Gigabytes:
            return "Gigabytes";
          case Unit::Terabytes:
            return "Terabytes";
          case Unit::Bits:
            return "Bits";
          case Unit::Kilobits:
            return "Kilobits";
          case Unit::Megabits:
            return "Megabits";
          case Unit::Gigabits:
            return "Gigabits";
          case Unit::Terabits:
            return "Terabits";
          case Unit::Percent:
            return "Percent";
          case Unit::Count:
            return "Count";
          case Unit::Bytes_Second:
            return "Bytes/Second";
          case Unit::Kilobytes_Second:
            return "Kilobytes/Second";
          case Unit::Megabytes_Second:
            return "Megabytes/Second";
          case Unit::Gigabytes_Second:
            return "Gigabytes/Second";
          case Unit::Terabytes_Second:
            return "Terabytes/Second";
          case Unit::Bits_Second:
            return "Bits/Second";
          case Unit::Kilobits_Second:
            return "Kilobits/Second";
          case Unit::Megabits_Second:
            return "Megabits/Second";
          case Unit::Gigabits_Second:
            return "Gigabits/Second";
          case Unit::Terabits_Second:
            return "Terabits/Second";
          case Unit::Count_Second:
            return "Count/Second";
          case Unit::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnitMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws
