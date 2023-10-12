/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectLabelsFeatureName.h>
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
      namespace DetectLabelsFeatureNameMapper
      {

        static constexpr uint32_t GENERAL_LABELS_HASH = ConstExprHashingUtils::HashString("GENERAL_LABELS");
        static constexpr uint32_t IMAGE_PROPERTIES_HASH = ConstExprHashingUtils::HashString("IMAGE_PROPERTIES");


        DetectLabelsFeatureName GetDetectLabelsFeatureNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERAL_LABELS_HASH)
          {
            return DetectLabelsFeatureName::GENERAL_LABELS;
          }
          else if (hashCode == IMAGE_PROPERTIES_HASH)
          {
            return DetectLabelsFeatureName::IMAGE_PROPERTIES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetectLabelsFeatureName>(hashCode);
          }

          return DetectLabelsFeatureName::NOT_SET;
        }

        Aws::String GetNameForDetectLabelsFeatureName(DetectLabelsFeatureName enumValue)
        {
          switch(enumValue)
          {
          case DetectLabelsFeatureName::NOT_SET:
            return {};
          case DetectLabelsFeatureName::GENERAL_LABELS:
            return "GENERAL_LABELS";
          case DetectLabelsFeatureName::IMAGE_PROPERTIES:
            return "IMAGE_PROPERTIES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetectLabelsFeatureNameMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
