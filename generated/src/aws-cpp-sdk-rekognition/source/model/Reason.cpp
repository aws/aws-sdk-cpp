/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Reason.h>
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
      namespace ReasonMapper
      {

        static constexpr uint32_t EXCEEDS_MAX_FACES_HASH = ConstExprHashingUtils::HashString("EXCEEDS_MAX_FACES");
        static constexpr uint32_t EXTREME_POSE_HASH = ConstExprHashingUtils::HashString("EXTREME_POSE");
        static constexpr uint32_t LOW_BRIGHTNESS_HASH = ConstExprHashingUtils::HashString("LOW_BRIGHTNESS");
        static constexpr uint32_t LOW_SHARPNESS_HASH = ConstExprHashingUtils::HashString("LOW_SHARPNESS");
        static constexpr uint32_t LOW_CONFIDENCE_HASH = ConstExprHashingUtils::HashString("LOW_CONFIDENCE");
        static constexpr uint32_t SMALL_BOUNDING_BOX_HASH = ConstExprHashingUtils::HashString("SMALL_BOUNDING_BOX");
        static constexpr uint32_t LOW_FACE_QUALITY_HASH = ConstExprHashingUtils::HashString("LOW_FACE_QUALITY");


        Reason GetReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCEEDS_MAX_FACES_HASH)
          {
            return Reason::EXCEEDS_MAX_FACES;
          }
          else if (hashCode == EXTREME_POSE_HASH)
          {
            return Reason::EXTREME_POSE;
          }
          else if (hashCode == LOW_BRIGHTNESS_HASH)
          {
            return Reason::LOW_BRIGHTNESS;
          }
          else if (hashCode == LOW_SHARPNESS_HASH)
          {
            return Reason::LOW_SHARPNESS;
          }
          else if (hashCode == LOW_CONFIDENCE_HASH)
          {
            return Reason::LOW_CONFIDENCE;
          }
          else if (hashCode == SMALL_BOUNDING_BOX_HASH)
          {
            return Reason::SMALL_BOUNDING_BOX;
          }
          else if (hashCode == LOW_FACE_QUALITY_HASH)
          {
            return Reason::LOW_FACE_QUALITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Reason>(hashCode);
          }

          return Reason::NOT_SET;
        }

        Aws::String GetNameForReason(Reason enumValue)
        {
          switch(enumValue)
          {
          case Reason::NOT_SET:
            return {};
          case Reason::EXCEEDS_MAX_FACES:
            return "EXCEEDS_MAX_FACES";
          case Reason::EXTREME_POSE:
            return "EXTREME_POSE";
          case Reason::LOW_BRIGHTNESS:
            return "LOW_BRIGHTNESS";
          case Reason::LOW_SHARPNESS:
            return "LOW_SHARPNESS";
          case Reason::LOW_CONFIDENCE:
            return "LOW_CONFIDENCE";
          case Reason::SMALL_BOUNDING_BOX:
            return "SMALL_BOUNDING_BOX";
          case Reason::LOW_FACE_QUALITY:
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

      } // namespace ReasonMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
