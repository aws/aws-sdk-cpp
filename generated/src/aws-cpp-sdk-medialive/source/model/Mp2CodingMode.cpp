/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mp2CodingMode.h>
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
      namespace Mp2CodingModeMapper
      {

        static const int CODING_MODE_1_0_HASH = HashingUtils::HashString("CODING_MODE_1_0");
        static const int CODING_MODE_2_0_HASH = HashingUtils::HashString("CODING_MODE_2_0");


        Mp2CodingMode GetMp2CodingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODING_MODE_1_0_HASH)
          {
            return Mp2CodingMode::CODING_MODE_1_0;
          }
          else if (hashCode == CODING_MODE_2_0_HASH)
          {
            return Mp2CodingMode::CODING_MODE_2_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mp2CodingMode>(hashCode);
          }

          return Mp2CodingMode::NOT_SET;
        }

        Aws::String GetNameForMp2CodingMode(Mp2CodingMode enumValue)
        {
          switch(enumValue)
          {
          case Mp2CodingMode::CODING_MODE_1_0:
            return "CODING_MODE_1_0";
          case Mp2CodingMode::CODING_MODE_2_0:
            return "CODING_MODE_2_0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mp2CodingModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
