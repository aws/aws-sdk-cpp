/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LabelDetectionFeatureName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace LabelDetectionFeatureNameMapper
      {

        static const int GENERAL_LABELS_HASH = HashingUtils::HashString("GENERAL_LABELS");


        LabelDetectionFeatureName GetLabelDetectionFeatureNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERAL_LABELS_HASH)
          {
            return LabelDetectionFeatureName::GENERAL_LABELS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LabelDetectionFeatureName>(hashCode);
          }

          return LabelDetectionFeatureName::NOT_SET;
        }

        Aws::String GetNameForLabelDetectionFeatureName(LabelDetectionFeatureName enumValue)
        {
          switch(enumValue)
          {
          case LabelDetectionFeatureName::GENERAL_LABELS:
            return "GENERAL_LABELS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LabelDetectionFeatureNameMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
