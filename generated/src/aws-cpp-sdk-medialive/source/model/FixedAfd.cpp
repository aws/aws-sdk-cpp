/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FixedAfd.h>
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
      namespace FixedAfdMapper
      {

        static const int AFD_0000_HASH = HashingUtils::HashString("AFD_0000");
        static const int AFD_0010_HASH = HashingUtils::HashString("AFD_0010");
        static const int AFD_0011_HASH = HashingUtils::HashString("AFD_0011");
        static const int AFD_0100_HASH = HashingUtils::HashString("AFD_0100");
        static const int AFD_1000_HASH = HashingUtils::HashString("AFD_1000");
        static const int AFD_1001_HASH = HashingUtils::HashString("AFD_1001");
        static const int AFD_1010_HASH = HashingUtils::HashString("AFD_1010");
        static const int AFD_1011_HASH = HashingUtils::HashString("AFD_1011");
        static const int AFD_1101_HASH = HashingUtils::HashString("AFD_1101");
        static const int AFD_1110_HASH = HashingUtils::HashString("AFD_1110");
        static const int AFD_1111_HASH = HashingUtils::HashString("AFD_1111");


        FixedAfd GetFixedAfdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AFD_0000_HASH)
          {
            return FixedAfd::AFD_0000;
          }
          else if (hashCode == AFD_0010_HASH)
          {
            return FixedAfd::AFD_0010;
          }
          else if (hashCode == AFD_0011_HASH)
          {
            return FixedAfd::AFD_0011;
          }
          else if (hashCode == AFD_0100_HASH)
          {
            return FixedAfd::AFD_0100;
          }
          else if (hashCode == AFD_1000_HASH)
          {
            return FixedAfd::AFD_1000;
          }
          else if (hashCode == AFD_1001_HASH)
          {
            return FixedAfd::AFD_1001;
          }
          else if (hashCode == AFD_1010_HASH)
          {
            return FixedAfd::AFD_1010;
          }
          else if (hashCode == AFD_1011_HASH)
          {
            return FixedAfd::AFD_1011;
          }
          else if (hashCode == AFD_1101_HASH)
          {
            return FixedAfd::AFD_1101;
          }
          else if (hashCode == AFD_1110_HASH)
          {
            return FixedAfd::AFD_1110;
          }
          else if (hashCode == AFD_1111_HASH)
          {
            return FixedAfd::AFD_1111;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FixedAfd>(hashCode);
          }

          return FixedAfd::NOT_SET;
        }

        Aws::String GetNameForFixedAfd(FixedAfd enumValue)
        {
          switch(enumValue)
          {
          case FixedAfd::AFD_0000:
            return "AFD_0000";
          case FixedAfd::AFD_0010:
            return "AFD_0010";
          case FixedAfd::AFD_0011:
            return "AFD_0011";
          case FixedAfd::AFD_0100:
            return "AFD_0100";
          case FixedAfd::AFD_1000:
            return "AFD_1000";
          case FixedAfd::AFD_1001:
            return "AFD_1001";
          case FixedAfd::AFD_1010:
            return "AFD_1010";
          case FixedAfd::AFD_1011:
            return "AFD_1011";
          case FixedAfd::AFD_1101:
            return "AFD_1101";
          case FixedAfd::AFD_1110:
            return "AFD_1110";
          case FixedAfd::AFD_1111:
            return "AFD_1111";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FixedAfdMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
