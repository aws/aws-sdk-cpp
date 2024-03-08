/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Xavc4kProfileQualityTuningLevel.h>
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
      namespace Xavc4kProfileQualityTuningLevelMapper
      {

        static const int SINGLE_PASS_HASH = HashingUtils::HashString("SINGLE_PASS");
        static const int SINGLE_PASS_HQ_HASH = HashingUtils::HashString("SINGLE_PASS_HQ");
        static const int MULTI_PASS_HQ_HASH = HashingUtils::HashString("MULTI_PASS_HQ");


        Xavc4kProfileQualityTuningLevel GetXavc4kProfileQualityTuningLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_PASS_HASH)
          {
            return Xavc4kProfileQualityTuningLevel::SINGLE_PASS;
          }
          else if (hashCode == SINGLE_PASS_HQ_HASH)
          {
            return Xavc4kProfileQualityTuningLevel::SINGLE_PASS_HQ;
          }
          else if (hashCode == MULTI_PASS_HQ_HASH)
          {
            return Xavc4kProfileQualityTuningLevel::MULTI_PASS_HQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Xavc4kProfileQualityTuningLevel>(hashCode);
          }

          return Xavc4kProfileQualityTuningLevel::NOT_SET;
        }

        Aws::String GetNameForXavc4kProfileQualityTuningLevel(Xavc4kProfileQualityTuningLevel enumValue)
        {
          switch(enumValue)
          {
          case Xavc4kProfileQualityTuningLevel::NOT_SET:
            return {};
          case Xavc4kProfileQualityTuningLevel::SINGLE_PASS:
            return "SINGLE_PASS";
          case Xavc4kProfileQualityTuningLevel::SINGLE_PASS_HQ:
            return "SINGLE_PASS_HQ";
          case Xavc4kProfileQualityTuningLevel::MULTI_PASS_HQ:
            return "MULTI_PASS_HQ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Xavc4kProfileQualityTuningLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
