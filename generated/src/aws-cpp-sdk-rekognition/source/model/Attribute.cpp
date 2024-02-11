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

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int AGE_RANGE_HASH = HashingUtils::HashString("AGE_RANGE");
        static const int BEARD_HASH = HashingUtils::HashString("BEARD");
        static const int EMOTIONS_HASH = HashingUtils::HashString("EMOTIONS");
        static const int EYE_DIRECTION_HASH = HashingUtils::HashString("EYE_DIRECTION");
        static const int EYEGLASSES_HASH = HashingUtils::HashString("EYEGLASSES");
        static const int EYES_OPEN_HASH = HashingUtils::HashString("EYES_OPEN");
        static const int GENDER_HASH = HashingUtils::HashString("GENDER");
        static const int MOUTH_OPEN_HASH = HashingUtils::HashString("MOUTH_OPEN");
        static const int MUSTACHE_HASH = HashingUtils::HashString("MUSTACHE");
        static const int FACE_OCCLUDED_HASH = HashingUtils::HashString("FACE_OCCLUDED");
        static const int SMILE_HASH = HashingUtils::HashString("SMILE");
        static const int SUNGLASSES_HASH = HashingUtils::HashString("SUNGLASSES");


        Attribute GetAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
