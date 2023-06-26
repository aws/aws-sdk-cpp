/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265Level.h>
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
      namespace H265LevelMapper
      {

        static const int H265_LEVEL_1_HASH = HashingUtils::HashString("H265_LEVEL_1");
        static const int H265_LEVEL_2_HASH = HashingUtils::HashString("H265_LEVEL_2");
        static const int H265_LEVEL_2_1_HASH = HashingUtils::HashString("H265_LEVEL_2_1");
        static const int H265_LEVEL_3_HASH = HashingUtils::HashString("H265_LEVEL_3");
        static const int H265_LEVEL_3_1_HASH = HashingUtils::HashString("H265_LEVEL_3_1");
        static const int H265_LEVEL_4_HASH = HashingUtils::HashString("H265_LEVEL_4");
        static const int H265_LEVEL_4_1_HASH = HashingUtils::HashString("H265_LEVEL_4_1");
        static const int H265_LEVEL_5_HASH = HashingUtils::HashString("H265_LEVEL_5");
        static const int H265_LEVEL_5_1_HASH = HashingUtils::HashString("H265_LEVEL_5_1");
        static const int H265_LEVEL_5_2_HASH = HashingUtils::HashString("H265_LEVEL_5_2");
        static const int H265_LEVEL_6_HASH = HashingUtils::HashString("H265_LEVEL_6");
        static const int H265_LEVEL_6_1_HASH = HashingUtils::HashString("H265_LEVEL_6_1");
        static const int H265_LEVEL_6_2_HASH = HashingUtils::HashString("H265_LEVEL_6_2");
        static const int H265_LEVEL_AUTO_HASH = HashingUtils::HashString("H265_LEVEL_AUTO");


        H265Level GetH265LevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == H265_LEVEL_1_HASH)
          {
            return H265Level::H265_LEVEL_1;
          }
          else if (hashCode == H265_LEVEL_2_HASH)
          {
            return H265Level::H265_LEVEL_2;
          }
          else if (hashCode == H265_LEVEL_2_1_HASH)
          {
            return H265Level::H265_LEVEL_2_1;
          }
          else if (hashCode == H265_LEVEL_3_HASH)
          {
            return H265Level::H265_LEVEL_3;
          }
          else if (hashCode == H265_LEVEL_3_1_HASH)
          {
            return H265Level::H265_LEVEL_3_1;
          }
          else if (hashCode == H265_LEVEL_4_HASH)
          {
            return H265Level::H265_LEVEL_4;
          }
          else if (hashCode == H265_LEVEL_4_1_HASH)
          {
            return H265Level::H265_LEVEL_4_1;
          }
          else if (hashCode == H265_LEVEL_5_HASH)
          {
            return H265Level::H265_LEVEL_5;
          }
          else if (hashCode == H265_LEVEL_5_1_HASH)
          {
            return H265Level::H265_LEVEL_5_1;
          }
          else if (hashCode == H265_LEVEL_5_2_HASH)
          {
            return H265Level::H265_LEVEL_5_2;
          }
          else if (hashCode == H265_LEVEL_6_HASH)
          {
            return H265Level::H265_LEVEL_6;
          }
          else if (hashCode == H265_LEVEL_6_1_HASH)
          {
            return H265Level::H265_LEVEL_6_1;
          }
          else if (hashCode == H265_LEVEL_6_2_HASH)
          {
            return H265Level::H265_LEVEL_6_2;
          }
          else if (hashCode == H265_LEVEL_AUTO_HASH)
          {
            return H265Level::H265_LEVEL_AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265Level>(hashCode);
          }

          return H265Level::NOT_SET;
        }

        Aws::String GetNameForH265Level(H265Level enumValue)
        {
          switch(enumValue)
          {
          case H265Level::H265_LEVEL_1:
            return "H265_LEVEL_1";
          case H265Level::H265_LEVEL_2:
            return "H265_LEVEL_2";
          case H265Level::H265_LEVEL_2_1:
            return "H265_LEVEL_2_1";
          case H265Level::H265_LEVEL_3:
            return "H265_LEVEL_3";
          case H265Level::H265_LEVEL_3_1:
            return "H265_LEVEL_3_1";
          case H265Level::H265_LEVEL_4:
            return "H265_LEVEL_4";
          case H265Level::H265_LEVEL_4_1:
            return "H265_LEVEL_4_1";
          case H265Level::H265_LEVEL_5:
            return "H265_LEVEL_5";
          case H265Level::H265_LEVEL_5_1:
            return "H265_LEVEL_5_1";
          case H265Level::H265_LEVEL_5_2:
            return "H265_LEVEL_5_2";
          case H265Level::H265_LEVEL_6:
            return "H265_LEVEL_6";
          case H265Level::H265_LEVEL_6_1:
            return "H265_LEVEL_6_1";
          case H265Level::H265_LEVEL_6_2:
            return "H265_LEVEL_6_2";
          case H265Level::H265_LEVEL_AUTO:
            return "H265_LEVEL_AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265LevelMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
