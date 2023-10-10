/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcHdProfileQualityTuningLevel.h>
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
      namespace XavcHdProfileQualityTuningLevelMapper
      {

        static const int SINGLE_PASS_HASH = HashingUtils::HashString("SINGLE_PASS");
        static const int SINGLE_PASS_HQ_HASH = HashingUtils::HashString("SINGLE_PASS_HQ");
        static const int MULTI_PASS_HQ_HASH = HashingUtils::HashString("MULTI_PASS_HQ");


        XavcHdProfileQualityTuningLevel GetXavcHdProfileQualityTuningLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_PASS_HASH)
          {
            return XavcHdProfileQualityTuningLevel::SINGLE_PASS;
          }
          else if (hashCode == SINGLE_PASS_HQ_HASH)
          {
            return XavcHdProfileQualityTuningLevel::SINGLE_PASS_HQ;
          }
          else if (hashCode == MULTI_PASS_HQ_HASH)
          {
            return XavcHdProfileQualityTuningLevel::MULTI_PASS_HQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcHdProfileQualityTuningLevel>(hashCode);
          }

          return XavcHdProfileQualityTuningLevel::NOT_SET;
        }

        Aws::String GetNameForXavcHdProfileQualityTuningLevel(XavcHdProfileQualityTuningLevel enumValue)
        {
          switch(enumValue)
          {
          case XavcHdProfileQualityTuningLevel::NOT_SET:
            return {};
          case XavcHdProfileQualityTuningLevel::SINGLE_PASS:
            return "SINGLE_PASS";
          case XavcHdProfileQualityTuningLevel::SINGLE_PASS_HQ:
            return "SINGLE_PASS_HQ";
          case XavcHdProfileQualityTuningLevel::MULTI_PASS_HQ:
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

      } // namespace XavcHdProfileQualityTuningLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
