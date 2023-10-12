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

        static constexpr uint32_t Seconds_HASH = ConstExprHashingUtils::HashString("Seconds");
        static constexpr uint32_t Microseconds_HASH = ConstExprHashingUtils::HashString("Microseconds");
        static constexpr uint32_t Milliseconds_HASH = ConstExprHashingUtils::HashString("Milliseconds");
        static constexpr uint32_t Bytes_HASH = ConstExprHashingUtils::HashString("Bytes");
        static constexpr uint32_t Kilobytes_HASH = ConstExprHashingUtils::HashString("Kilobytes");
        static constexpr uint32_t Megabytes_HASH = ConstExprHashingUtils::HashString("Megabytes");
        static constexpr uint32_t Gigabytes_HASH = ConstExprHashingUtils::HashString("Gigabytes");
        static constexpr uint32_t Terabytes_HASH = ConstExprHashingUtils::HashString("Terabytes");
        static constexpr uint32_t Bits_HASH = ConstExprHashingUtils::HashString("Bits");
        static constexpr uint32_t Kilobits_HASH = ConstExprHashingUtils::HashString("Kilobits");
        static constexpr uint32_t Megabits_HASH = ConstExprHashingUtils::HashString("Megabits");
        static constexpr uint32_t Gigabits_HASH = ConstExprHashingUtils::HashString("Gigabits");
        static constexpr uint32_t Terabits_HASH = ConstExprHashingUtils::HashString("Terabits");
        static constexpr uint32_t Percent_HASH = ConstExprHashingUtils::HashString("Percent");
        static constexpr uint32_t Count_HASH = ConstExprHashingUtils::HashString("Count");
        static constexpr uint32_t Bytes_Second_HASH = ConstExprHashingUtils::HashString("Bytes/Second");
        static constexpr uint32_t Kilobytes_Second_HASH = ConstExprHashingUtils::HashString("Kilobytes/Second");
        static constexpr uint32_t Megabytes_Second_HASH = ConstExprHashingUtils::HashString("Megabytes/Second");
        static constexpr uint32_t Gigabytes_Second_HASH = ConstExprHashingUtils::HashString("Gigabytes/Second");
        static constexpr uint32_t Terabytes_Second_HASH = ConstExprHashingUtils::HashString("Terabytes/Second");
        static constexpr uint32_t Bits_Second_HASH = ConstExprHashingUtils::HashString("Bits/Second");
        static constexpr uint32_t Kilobits_Second_HASH = ConstExprHashingUtils::HashString("Kilobits/Second");
        static constexpr uint32_t Megabits_Second_HASH = ConstExprHashingUtils::HashString("Megabits/Second");
        static constexpr uint32_t Gigabits_Second_HASH = ConstExprHashingUtils::HashString("Gigabits/Second");
        static constexpr uint32_t Terabits_Second_HASH = ConstExprHashingUtils::HashString("Terabits/Second");
        static constexpr uint32_t Count_Second_HASH = ConstExprHashingUtils::HashString("Count/Second");
        static constexpr uint32_t None_HASH = ConstExprHashingUtils::HashString("None");


        Unit GetUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Unit::NOT_SET:
            return {};
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
