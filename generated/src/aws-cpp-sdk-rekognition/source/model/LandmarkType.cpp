/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LandmarkType.h>
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
      namespace LandmarkTypeMapper
      {

        static constexpr uint32_t eyeLeft_HASH = ConstExprHashingUtils::HashString("eyeLeft");
        static constexpr uint32_t eyeRight_HASH = ConstExprHashingUtils::HashString("eyeRight");
        static constexpr uint32_t nose_HASH = ConstExprHashingUtils::HashString("nose");
        static constexpr uint32_t mouthLeft_HASH = ConstExprHashingUtils::HashString("mouthLeft");
        static constexpr uint32_t mouthRight_HASH = ConstExprHashingUtils::HashString("mouthRight");
        static constexpr uint32_t leftEyeBrowLeft_HASH = ConstExprHashingUtils::HashString("leftEyeBrowLeft");
        static constexpr uint32_t leftEyeBrowRight_HASH = ConstExprHashingUtils::HashString("leftEyeBrowRight");
        static constexpr uint32_t leftEyeBrowUp_HASH = ConstExprHashingUtils::HashString("leftEyeBrowUp");
        static constexpr uint32_t rightEyeBrowLeft_HASH = ConstExprHashingUtils::HashString("rightEyeBrowLeft");
        static constexpr uint32_t rightEyeBrowRight_HASH = ConstExprHashingUtils::HashString("rightEyeBrowRight");
        static constexpr uint32_t rightEyeBrowUp_HASH = ConstExprHashingUtils::HashString("rightEyeBrowUp");
        static constexpr uint32_t leftEyeLeft_HASH = ConstExprHashingUtils::HashString("leftEyeLeft");
        static constexpr uint32_t leftEyeRight_HASH = ConstExprHashingUtils::HashString("leftEyeRight");
        static constexpr uint32_t leftEyeUp_HASH = ConstExprHashingUtils::HashString("leftEyeUp");
        static constexpr uint32_t leftEyeDown_HASH = ConstExprHashingUtils::HashString("leftEyeDown");
        static constexpr uint32_t rightEyeLeft_HASH = ConstExprHashingUtils::HashString("rightEyeLeft");
        static constexpr uint32_t rightEyeRight_HASH = ConstExprHashingUtils::HashString("rightEyeRight");
        static constexpr uint32_t rightEyeUp_HASH = ConstExprHashingUtils::HashString("rightEyeUp");
        static constexpr uint32_t rightEyeDown_HASH = ConstExprHashingUtils::HashString("rightEyeDown");
        static constexpr uint32_t noseLeft_HASH = ConstExprHashingUtils::HashString("noseLeft");
        static constexpr uint32_t noseRight_HASH = ConstExprHashingUtils::HashString("noseRight");
        static constexpr uint32_t mouthUp_HASH = ConstExprHashingUtils::HashString("mouthUp");
        static constexpr uint32_t mouthDown_HASH = ConstExprHashingUtils::HashString("mouthDown");
        static constexpr uint32_t leftPupil_HASH = ConstExprHashingUtils::HashString("leftPupil");
        static constexpr uint32_t rightPupil_HASH = ConstExprHashingUtils::HashString("rightPupil");
        static constexpr uint32_t upperJawlineLeft_HASH = ConstExprHashingUtils::HashString("upperJawlineLeft");
        static constexpr uint32_t midJawlineLeft_HASH = ConstExprHashingUtils::HashString("midJawlineLeft");
        static constexpr uint32_t chinBottom_HASH = ConstExprHashingUtils::HashString("chinBottom");
        static constexpr uint32_t midJawlineRight_HASH = ConstExprHashingUtils::HashString("midJawlineRight");
        static constexpr uint32_t upperJawlineRight_HASH = ConstExprHashingUtils::HashString("upperJawlineRight");


        LandmarkType GetLandmarkTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == eyeLeft_HASH)
          {
            return LandmarkType::eyeLeft;
          }
          else if (hashCode == eyeRight_HASH)
          {
            return LandmarkType::eyeRight;
          }
          else if (hashCode == nose_HASH)
          {
            return LandmarkType::nose;
          }
          else if (hashCode == mouthLeft_HASH)
          {
            return LandmarkType::mouthLeft;
          }
          else if (hashCode == mouthRight_HASH)
          {
            return LandmarkType::mouthRight;
          }
          else if (hashCode == leftEyeBrowLeft_HASH)
          {
            return LandmarkType::leftEyeBrowLeft;
          }
          else if (hashCode == leftEyeBrowRight_HASH)
          {
            return LandmarkType::leftEyeBrowRight;
          }
          else if (hashCode == leftEyeBrowUp_HASH)
          {
            return LandmarkType::leftEyeBrowUp;
          }
          else if (hashCode == rightEyeBrowLeft_HASH)
          {
            return LandmarkType::rightEyeBrowLeft;
          }
          else if (hashCode == rightEyeBrowRight_HASH)
          {
            return LandmarkType::rightEyeBrowRight;
          }
          else if (hashCode == rightEyeBrowUp_HASH)
          {
            return LandmarkType::rightEyeBrowUp;
          }
          else if (hashCode == leftEyeLeft_HASH)
          {
            return LandmarkType::leftEyeLeft;
          }
          else if (hashCode == leftEyeRight_HASH)
          {
            return LandmarkType::leftEyeRight;
          }
          else if (hashCode == leftEyeUp_HASH)
          {
            return LandmarkType::leftEyeUp;
          }
          else if (hashCode == leftEyeDown_HASH)
          {
            return LandmarkType::leftEyeDown;
          }
          else if (hashCode == rightEyeLeft_HASH)
          {
            return LandmarkType::rightEyeLeft;
          }
          else if (hashCode == rightEyeRight_HASH)
          {
            return LandmarkType::rightEyeRight;
          }
          else if (hashCode == rightEyeUp_HASH)
          {
            return LandmarkType::rightEyeUp;
          }
          else if (hashCode == rightEyeDown_HASH)
          {
            return LandmarkType::rightEyeDown;
          }
          else if (hashCode == noseLeft_HASH)
          {
            return LandmarkType::noseLeft;
          }
          else if (hashCode == noseRight_HASH)
          {
            return LandmarkType::noseRight;
          }
          else if (hashCode == mouthUp_HASH)
          {
            return LandmarkType::mouthUp;
          }
          else if (hashCode == mouthDown_HASH)
          {
            return LandmarkType::mouthDown;
          }
          else if (hashCode == leftPupil_HASH)
          {
            return LandmarkType::leftPupil;
          }
          else if (hashCode == rightPupil_HASH)
          {
            return LandmarkType::rightPupil;
          }
          else if (hashCode == upperJawlineLeft_HASH)
          {
            return LandmarkType::upperJawlineLeft;
          }
          else if (hashCode == midJawlineLeft_HASH)
          {
            return LandmarkType::midJawlineLeft;
          }
          else if (hashCode == chinBottom_HASH)
          {
            return LandmarkType::chinBottom;
          }
          else if (hashCode == midJawlineRight_HASH)
          {
            return LandmarkType::midJawlineRight;
          }
          else if (hashCode == upperJawlineRight_HASH)
          {
            return LandmarkType::upperJawlineRight;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LandmarkType>(hashCode);
          }

          return LandmarkType::NOT_SET;
        }

        Aws::String GetNameForLandmarkType(LandmarkType enumValue)
        {
          switch(enumValue)
          {
          case LandmarkType::NOT_SET:
            return {};
          case LandmarkType::eyeLeft:
            return "eyeLeft";
          case LandmarkType::eyeRight:
            return "eyeRight";
          case LandmarkType::nose:
            return "nose";
          case LandmarkType::mouthLeft:
            return "mouthLeft";
          case LandmarkType::mouthRight:
            return "mouthRight";
          case LandmarkType::leftEyeBrowLeft:
            return "leftEyeBrowLeft";
          case LandmarkType::leftEyeBrowRight:
            return "leftEyeBrowRight";
          case LandmarkType::leftEyeBrowUp:
            return "leftEyeBrowUp";
          case LandmarkType::rightEyeBrowLeft:
            return "rightEyeBrowLeft";
          case LandmarkType::rightEyeBrowRight:
            return "rightEyeBrowRight";
          case LandmarkType::rightEyeBrowUp:
            return "rightEyeBrowUp";
          case LandmarkType::leftEyeLeft:
            return "leftEyeLeft";
          case LandmarkType::leftEyeRight:
            return "leftEyeRight";
          case LandmarkType::leftEyeUp:
            return "leftEyeUp";
          case LandmarkType::leftEyeDown:
            return "leftEyeDown";
          case LandmarkType::rightEyeLeft:
            return "rightEyeLeft";
          case LandmarkType::rightEyeRight:
            return "rightEyeRight";
          case LandmarkType::rightEyeUp:
            return "rightEyeUp";
          case LandmarkType::rightEyeDown:
            return "rightEyeDown";
          case LandmarkType::noseLeft:
            return "noseLeft";
          case LandmarkType::noseRight:
            return "noseRight";
          case LandmarkType::mouthUp:
            return "mouthUp";
          case LandmarkType::mouthDown:
            return "mouthDown";
          case LandmarkType::leftPupil:
            return "leftPupil";
          case LandmarkType::rightPupil:
            return "rightPupil";
          case LandmarkType::upperJawlineLeft:
            return "upperJawlineLeft";
          case LandmarkType::midJawlineLeft:
            return "midJawlineLeft";
          case LandmarkType::chinBottom:
            return "chinBottom";
          case LandmarkType::midJawlineRight:
            return "midJawlineRight";
          case LandmarkType::upperJawlineRight:
            return "upperJawlineRight";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LandmarkTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
