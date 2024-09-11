/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Av1Level.h>
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
      namespace Av1LevelMapper
      {

        static const int AV1_LEVEL_2_HASH = HashingUtils::HashString("AV1_LEVEL_2");
        static const int AV1_LEVEL_2_1_HASH = HashingUtils::HashString("AV1_LEVEL_2_1");
        static const int AV1_LEVEL_3_HASH = HashingUtils::HashString("AV1_LEVEL_3");
        static const int AV1_LEVEL_3_1_HASH = HashingUtils::HashString("AV1_LEVEL_3_1");
        static const int AV1_LEVEL_4_HASH = HashingUtils::HashString("AV1_LEVEL_4");
        static const int AV1_LEVEL_4_1_HASH = HashingUtils::HashString("AV1_LEVEL_4_1");
        static const int AV1_LEVEL_5_HASH = HashingUtils::HashString("AV1_LEVEL_5");
        static const int AV1_LEVEL_5_1_HASH = HashingUtils::HashString("AV1_LEVEL_5_1");
        static const int AV1_LEVEL_5_2_HASH = HashingUtils::HashString("AV1_LEVEL_5_2");
        static const int AV1_LEVEL_5_3_HASH = HashingUtils::HashString("AV1_LEVEL_5_3");
        static const int AV1_LEVEL_6_HASH = HashingUtils::HashString("AV1_LEVEL_6");
        static const int AV1_LEVEL_6_1_HASH = HashingUtils::HashString("AV1_LEVEL_6_1");
        static const int AV1_LEVEL_6_2_HASH = HashingUtils::HashString("AV1_LEVEL_6_2");
        static const int AV1_LEVEL_6_3_HASH = HashingUtils::HashString("AV1_LEVEL_6_3");
        static const int AV1_LEVEL_AUTO_HASH = HashingUtils::HashString("AV1_LEVEL_AUTO");


        Av1Level GetAv1LevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AV1_LEVEL_2_HASH)
          {
            return Av1Level::AV1_LEVEL_2;
          }
          else if (hashCode == AV1_LEVEL_2_1_HASH)
          {
            return Av1Level::AV1_LEVEL_2_1;
          }
          else if (hashCode == AV1_LEVEL_3_HASH)
          {
            return Av1Level::AV1_LEVEL_3;
          }
          else if (hashCode == AV1_LEVEL_3_1_HASH)
          {
            return Av1Level::AV1_LEVEL_3_1;
          }
          else if (hashCode == AV1_LEVEL_4_HASH)
          {
            return Av1Level::AV1_LEVEL_4;
          }
          else if (hashCode == AV1_LEVEL_4_1_HASH)
          {
            return Av1Level::AV1_LEVEL_4_1;
          }
          else if (hashCode == AV1_LEVEL_5_HASH)
          {
            return Av1Level::AV1_LEVEL_5;
          }
          else if (hashCode == AV1_LEVEL_5_1_HASH)
          {
            return Av1Level::AV1_LEVEL_5_1;
          }
          else if (hashCode == AV1_LEVEL_5_2_HASH)
          {
            return Av1Level::AV1_LEVEL_5_2;
          }
          else if (hashCode == AV1_LEVEL_5_3_HASH)
          {
            return Av1Level::AV1_LEVEL_5_3;
          }
          else if (hashCode == AV1_LEVEL_6_HASH)
          {
            return Av1Level::AV1_LEVEL_6;
          }
          else if (hashCode == AV1_LEVEL_6_1_HASH)
          {
            return Av1Level::AV1_LEVEL_6_1;
          }
          else if (hashCode == AV1_LEVEL_6_2_HASH)
          {
            return Av1Level::AV1_LEVEL_6_2;
          }
          else if (hashCode == AV1_LEVEL_6_3_HASH)
          {
            return Av1Level::AV1_LEVEL_6_3;
          }
          else if (hashCode == AV1_LEVEL_AUTO_HASH)
          {
            return Av1Level::AV1_LEVEL_AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1Level>(hashCode);
          }

          return Av1Level::NOT_SET;
        }

        Aws::String GetNameForAv1Level(Av1Level enumValue)
        {
          switch(enumValue)
          {
          case Av1Level::NOT_SET:
            return {};
          case Av1Level::AV1_LEVEL_2:
            return "AV1_LEVEL_2";
          case Av1Level::AV1_LEVEL_2_1:
            return "AV1_LEVEL_2_1";
          case Av1Level::AV1_LEVEL_3:
            return "AV1_LEVEL_3";
          case Av1Level::AV1_LEVEL_3_1:
            return "AV1_LEVEL_3_1";
          case Av1Level::AV1_LEVEL_4:
            return "AV1_LEVEL_4";
          case Av1Level::AV1_LEVEL_4_1:
            return "AV1_LEVEL_4_1";
          case Av1Level::AV1_LEVEL_5:
            return "AV1_LEVEL_5";
          case Av1Level::AV1_LEVEL_5_1:
            return "AV1_LEVEL_5_1";
          case Av1Level::AV1_LEVEL_5_2:
            return "AV1_LEVEL_5_2";
          case Av1Level::AV1_LEVEL_5_3:
            return "AV1_LEVEL_5_3";
          case Av1Level::AV1_LEVEL_6:
            return "AV1_LEVEL_6";
          case Av1Level::AV1_LEVEL_6_1:
            return "AV1_LEVEL_6_1";
          case Av1Level::AV1_LEVEL_6_2:
            return "AV1_LEVEL_6_2";
          case Av1Level::AV1_LEVEL_6_3:
            return "AV1_LEVEL_6_3";
          case Av1Level::AV1_LEVEL_AUTO:
            return "AV1_LEVEL_AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Av1LevelMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
