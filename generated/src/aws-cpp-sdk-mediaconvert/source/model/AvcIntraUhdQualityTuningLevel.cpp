/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraUhdQualityTuningLevel.h>
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
      namespace AvcIntraUhdQualityTuningLevelMapper
      {

        static constexpr uint32_t SINGLE_PASS_HASH = ConstExprHashingUtils::HashString("SINGLE_PASS");
        static constexpr uint32_t MULTI_PASS_HASH = ConstExprHashingUtils::HashString("MULTI_PASS");


        AvcIntraUhdQualityTuningLevel GetAvcIntraUhdQualityTuningLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_PASS_HASH)
          {
            return AvcIntraUhdQualityTuningLevel::SINGLE_PASS;
          }
          else if (hashCode == MULTI_PASS_HASH)
          {
            return AvcIntraUhdQualityTuningLevel::MULTI_PASS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvcIntraUhdQualityTuningLevel>(hashCode);
          }

          return AvcIntraUhdQualityTuningLevel::NOT_SET;
        }

        Aws::String GetNameForAvcIntraUhdQualityTuningLevel(AvcIntraUhdQualityTuningLevel enumValue)
        {
          switch(enumValue)
          {
          case AvcIntraUhdQualityTuningLevel::NOT_SET:
            return {};
          case AvcIntraUhdQualityTuningLevel::SINGLE_PASS:
            return "SINGLE_PASS";
          case AvcIntraUhdQualityTuningLevel::MULTI_PASS:
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

      } // namespace AvcIntraUhdQualityTuningLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
