/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UnsearchedFaceReason.h>
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
      namespace UnsearchedFaceReasonMapper
      {

        static constexpr uint32_t FACE_NOT_LARGEST_HASH = ConstExprHashingUtils::HashString("FACE_NOT_LARGEST");
        static constexpr uint32_t EXCEEDS_MAX_FACES_HASH = ConstExprHashingUtils::HashString("EXCEEDS_MAX_FACES");
        static constexpr uint32_t EXTREME_POSE_HASH = ConstExprHashingUtils::HashString("EXTREME_POSE");
        static constexpr uint32_t LOW_BRIGHTNESS_HASH = ConstExprHashingUtils::HashString("LOW_BRIGHTNESS");
        static constexpr uint32_t LOW_SHARPNESS_HASH = ConstExprHashingUtils::HashString("LOW_SHARPNESS");
        static constexpr uint32_t LOW_CONFIDENCE_HASH = ConstExprHashingUtils::HashString("LOW_CONFIDENCE");
        static constexpr uint32_t SMALL_BOUNDING_BOX_HASH = ConstExprHashingUtils::HashString("SMALL_BOUNDING_BOX");
        static constexpr uint32_t LOW_FACE_QUALITY_HASH = ConstExprHashingUtils::HashString("LOW_FACE_QUALITY");


        UnsearchedFaceReason GetUnsearchedFaceReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FACE_NOT_LARGEST_HASH)
          {
            return UnsearchedFaceReason::FACE_NOT_LARGEST;
          }
          else if (hashCode == EXCEEDS_MAX_FACES_HASH)
          {
            return UnsearchedFaceReason::EXCEEDS_MAX_FACES;
          }
          else if (hashCode == EXTREME_POSE_HASH)
          {
            return UnsearchedFaceReason::EXTREME_POSE;
          }
          else if (hashCode == LOW_BRIGHTNESS_HASH)
          {
            return UnsearchedFaceReason::LOW_BRIGHTNESS;
          }
          else if (hashCode == LOW_SHARPNESS_HASH)
          {
            return UnsearchedFaceReason::LOW_SHARPNESS;
          }
          else if (hashCode == LOW_CONFIDENCE_HASH)
          {
            return UnsearchedFaceReason::LOW_CONFIDENCE;
          }
          else if (hashCode == SMALL_BOUNDING_BOX_HASH)
          {
            return UnsearchedFaceReason::SMALL_BOUNDING_BOX;
          }
          else if (hashCode == LOW_FACE_QUALITY_HASH)
          {
            return UnsearchedFaceReason::LOW_FACE_QUALITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnsearchedFaceReason>(hashCode);
          }

          return UnsearchedFaceReason::NOT_SET;
        }

        Aws::String GetNameForUnsearchedFaceReason(UnsearchedFaceReason enumValue)
        {
          switch(enumValue)
          {
          case UnsearchedFaceReason::NOT_SET:
            return {};
          case UnsearchedFaceReason::FACE_NOT_LARGEST:
            return "FACE_NOT_LARGEST";
          case UnsearchedFaceReason::EXCEEDS_MAX_FACES:
            return "EXCEEDS_MAX_FACES";
          case UnsearchedFaceReason::EXTREME_POSE:
            return "EXTREME_POSE";
          case UnsearchedFaceReason::LOW_BRIGHTNESS:
            return "LOW_BRIGHTNESS";
          case UnsearchedFaceReason::LOW_SHARPNESS:
            return "LOW_SHARPNESS";
          case UnsearchedFaceReason::LOW_CONFIDENCE:
            return "LOW_CONFIDENCE";
          case UnsearchedFaceReason::SMALL_BOUNDING_BOX:
            return "SMALL_BOUNDING_BOX";
          case UnsearchedFaceReason::LOW_FACE_QUALITY:
            return "LOW_FACE_QUALITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnsearchedFaceReasonMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
