/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mpeg2QualityTuningLevel.h>
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
      namespace Mpeg2QualityTuningLevelMapper
      {

        static const int SINGLE_PASS_HASH = HashingUtils::HashString("SINGLE_PASS");
        static const int MULTI_PASS_HASH = HashingUtils::HashString("MULTI_PASS");


        Mpeg2QualityTuningLevel GetMpeg2QualityTuningLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_PASS_HASH)
          {
            return Mpeg2QualityTuningLevel::SINGLE_PASS;
          }
          else if (hashCode == MULTI_PASS_HASH)
          {
            return Mpeg2QualityTuningLevel::MULTI_PASS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2QualityTuningLevel>(hashCode);
          }

          return Mpeg2QualityTuningLevel::NOT_SET;
        }

        Aws::String GetNameForMpeg2QualityTuningLevel(Mpeg2QualityTuningLevel enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2QualityTuningLevel::SINGLE_PASS:
            return "SINGLE_PASS";
          case Mpeg2QualityTuningLevel::MULTI_PASS:
            return "MULTI_PASS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2QualityTuningLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
