/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Attribute.h>
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
      namespace AttributeMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t AGE_RANGE_HASH = ConstExprHashingUtils::HashString("AGE_RANGE");
        static constexpr uint32_t BEARD_HASH = ConstExprHashingUtils::HashString("BEARD");
        static constexpr uint32_t EMOTIONS_HASH = ConstExprHashingUtils::HashString("EMOTIONS");
        static constexpr uint32_t EYE_DIRECTION_HASH = ConstExprHashingUtils::HashString("EYE_DIRECTION");
        static constexpr uint32_t EYEGLASSES_HASH = ConstExprHashingUtils::HashString("EYEGLASSES");
        static constexpr uint32_t EYES_OPEN_HASH = ConstExprHashingUtils::HashString("EYES_OPEN");
        static constexpr uint32_t GENDER_HASH = ConstExprHashingUtils::HashString("GENDER");
        static constexpr uint32_t MOUTH_OPEN_HASH = ConstExprHashingUtils::HashString("MOUTH_OPEN");
        static constexpr uint32_t MUSTACHE_HASH = ConstExprHashingUtils::HashString("MUSTACHE");
        static constexpr uint32_t FACE_OCCLUDED_HASH = ConstExprHashingUtils::HashString("FACE_OCCLUDED");
        static constexpr uint32_t SMILE_HASH = ConstExprHashingUtils::HashString("SMILE");
        static constexpr uint32_t SUNGLASSES_HASH = ConstExprHashingUtils::HashString("SUNGLASSES");


        Attribute GetAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return Attribute::DEFAULT;
          }
          else if (hashCode == ALL_HASH)
          {
            return Attribute::ALL;
          }
          else if (hashCode == AGE_RANGE_HASH)
          {
            return Attribute::AGE_RANGE;
          }
          else if (hashCode == BEARD_HASH)
          {
            return Attribute::BEARD;
          }
          else if (hashCode == EMOTIONS_HASH)
          {
            return Attribute::EMOTIONS;
          }
          else if (hashCode == EYE_DIRECTION_HASH)
          {
            return Attribute::EYE_DIRECTION;
          }
          else if (hashCode == EYEGLASSES_HASH)
          {
            return Attribute::EYEGLASSES;
          }
          else if (hashCode == EYES_OPEN_HASH)
          {
            return Attribute::EYES_OPEN;
          }
          else if (hashCode == GENDER_HASH)
          {
            return Attribute::GENDER;
          }
          else if (hashCode == MOUTH_OPEN_HASH)
          {
            return Attribute::MOUTH_OPEN;
          }
          else if (hashCode == MUSTACHE_HASH)
          {
            return Attribute::MUSTACHE;
          }
          else if (hashCode == FACE_OCCLUDED_HASH)
          {
            return Attribute::FACE_OCCLUDED;
          }
          else if (hashCode == SMILE_HASH)
          {
            return Attribute::SMILE;
          }
          else if (hashCode == SUNGLASSES_HASH)
          {
            return Attribute::SUNGLASSES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Attribute>(hashCode);
          }

          return Attribute::NOT_SET;
        }

        Aws::String GetNameForAttribute(Attribute enumValue)
        {
          switch(enumValue)
          {
          case Attribute::NOT_SET:
            return {};
          case Attribute::DEFAULT:
            return "DEFAULT";
          case Attribute::ALL:
            return "ALL";
          case Attribute::AGE_RANGE:
            return "AGE_RANGE";
          case Attribute::BEARD:
            return "BEARD";
          case Attribute::EMOTIONS:
            return "EMOTIONS";
          case Attribute::EYE_DIRECTION:
            return "EYE_DIRECTION";
          case Attribute::EYEGLASSES:
            return "EYEGLASSES";
          case Attribute::EYES_OPEN:
            return "EYES_OPEN";
          case Attribute::GENDER:
            return "GENDER";
          case Attribute::MOUTH_OPEN:
            return "MOUTH_OPEN";
          case Attribute::MUSTACHE:
            return "MUSTACHE";
          case Attribute::FACE_OCCLUDED:
            return "FACE_OCCLUDED";
          case Attribute::SMILE:
            return "SMILE";
          case Attribute::SUNGLASSES:
            return "SUNGLASSES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
