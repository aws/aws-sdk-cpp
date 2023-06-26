/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264CodecLevel.h>
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
      namespace H264CodecLevelMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int LEVEL_1_HASH = HashingUtils::HashString("LEVEL_1");
        static const int LEVEL_1_1_HASH = HashingUtils::HashString("LEVEL_1_1");
        static const int LEVEL_1_2_HASH = HashingUtils::HashString("LEVEL_1_2");
        static const int LEVEL_1_3_HASH = HashingUtils::HashString("LEVEL_1_3");
        static const int LEVEL_2_HASH = HashingUtils::HashString("LEVEL_2");
        static const int LEVEL_2_1_HASH = HashingUtils::HashString("LEVEL_2_1");
        static const int LEVEL_2_2_HASH = HashingUtils::HashString("LEVEL_2_2");
        static const int LEVEL_3_HASH = HashingUtils::HashString("LEVEL_3");
        static const int LEVEL_3_1_HASH = HashingUtils::HashString("LEVEL_3_1");
        static const int LEVEL_3_2_HASH = HashingUtils::HashString("LEVEL_3_2");
        static const int LEVEL_4_HASH = HashingUtils::HashString("LEVEL_4");
        static const int LEVEL_4_1_HASH = HashingUtils::HashString("LEVEL_4_1");
        static const int LEVEL_4_2_HASH = HashingUtils::HashString("LEVEL_4_2");
        static const int LEVEL_5_HASH = HashingUtils::HashString("LEVEL_5");
        static const int LEVEL_5_1_HASH = HashingUtils::HashString("LEVEL_5_1");
        static const int LEVEL_5_2_HASH = HashingUtils::HashString("LEVEL_5_2");


        H264CodecLevel GetH264CodecLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return H264CodecLevel::AUTO;
          }
          else if (hashCode == LEVEL_1_HASH)
          {
            return H264CodecLevel::LEVEL_1;
          }
          else if (hashCode == LEVEL_1_1_HASH)
          {
            return H264CodecLevel::LEVEL_1_1;
          }
          else if (hashCode == LEVEL_1_2_HASH)
          {
            return H264CodecLevel::LEVEL_1_2;
          }
          else if (hashCode == LEVEL_1_3_HASH)
          {
            return H264CodecLevel::LEVEL_1_3;
          }
          else if (hashCode == LEVEL_2_HASH)
          {
            return H264CodecLevel::LEVEL_2;
          }
          else if (hashCode == LEVEL_2_1_HASH)
          {
            return H264CodecLevel::LEVEL_2_1;
          }
          else if (hashCode == LEVEL_2_2_HASH)
          {
            return H264CodecLevel::LEVEL_2_2;
          }
          else if (hashCode == LEVEL_3_HASH)
          {
            return H264CodecLevel::LEVEL_3;
          }
          else if (hashCode == LEVEL_3_1_HASH)
          {
            return H264CodecLevel::LEVEL_3_1;
          }
          else if (hashCode == LEVEL_3_2_HASH)
          {
            return H264CodecLevel::LEVEL_3_2;
          }
          else if (hashCode == LEVEL_4_HASH)
          {
            return H264CodecLevel::LEVEL_4;
          }
          else if (hashCode == LEVEL_4_1_HASH)
          {
            return H264CodecLevel::LEVEL_4_1;
          }
          else if (hashCode == LEVEL_4_2_HASH)
          {
            return H264CodecLevel::LEVEL_4_2;
          }
          else if (hashCode == LEVEL_5_HASH)
          {
            return H264CodecLevel::LEVEL_5;
          }
          else if (hashCode == LEVEL_5_1_HASH)
          {
            return H264CodecLevel::LEVEL_5_1;
          }
          else if (hashCode == LEVEL_5_2_HASH)
          {
            return H264CodecLevel::LEVEL_5_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264CodecLevel>(hashCode);
          }

          return H264CodecLevel::NOT_SET;
        }

        Aws::String GetNameForH264CodecLevel(H264CodecLevel enumValue)
        {
          switch(enumValue)
          {
          case H264CodecLevel::AUTO:
            return "AUTO";
          case H264CodecLevel::LEVEL_1:
            return "LEVEL_1";
          case H264CodecLevel::LEVEL_1_1:
            return "LEVEL_1_1";
          case H264CodecLevel::LEVEL_1_2:
            return "LEVEL_1_2";
          case H264CodecLevel::LEVEL_1_3:
            return "LEVEL_1_3";
          case H264CodecLevel::LEVEL_2:
            return "LEVEL_2";
          case H264CodecLevel::LEVEL_2_1:
            return "LEVEL_2_1";
          case H264CodecLevel::LEVEL_2_2:
            return "LEVEL_2_2";
          case H264CodecLevel::LEVEL_3:
            return "LEVEL_3";
          case H264CodecLevel::LEVEL_3_1:
            return "LEVEL_3_1";
          case H264CodecLevel::LEVEL_3_2:
            return "LEVEL_3_2";
          case H264CodecLevel::LEVEL_4:
            return "LEVEL_4";
          case H264CodecLevel::LEVEL_4_1:
            return "LEVEL_4_1";
          case H264CodecLevel::LEVEL_4_2:
            return "LEVEL_4_2";
          case H264CodecLevel::LEVEL_5:
            return "LEVEL_5";
          case H264CodecLevel::LEVEL_5_1:
            return "LEVEL_5_1";
          case H264CodecLevel::LEVEL_5_2:
            return "LEVEL_5_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264CodecLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
