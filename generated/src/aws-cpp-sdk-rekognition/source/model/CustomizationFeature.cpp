/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CustomizationFeature.h>
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
      namespace CustomizationFeatureMapper
      {

        static const int CONTENT_MODERATION_HASH = HashingUtils::HashString("CONTENT_MODERATION");
        static const int CUSTOM_LABELS_HASH = HashingUtils::HashString("CUSTOM_LABELS");


        CustomizationFeature GetCustomizationFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTENT_MODERATION_HASH)
          {
            return CustomizationFeature::CONTENT_MODERATION;
          }
          else if (hashCode == CUSTOM_LABELS_HASH)
          {
            return CustomizationFeature::CUSTOM_LABELS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomizationFeature>(hashCode);
          }

          return CustomizationFeature::NOT_SET;
        }

        Aws::String GetNameForCustomizationFeature(CustomizationFeature enumValue)
        {
          switch(enumValue)
          {
          case CustomizationFeature::NOT_SET:
            return {};
          case CustomizationFeature::CONTENT_MODERATION:
            return "CONTENT_MODERATION";
          case CustomizationFeature::CUSTOM_LABELS:
            return "CUSTOM_LABELS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomizationFeatureMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
