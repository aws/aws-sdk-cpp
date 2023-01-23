/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/EmotionName.h>
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
      namespace EmotionNameMapper
      {

        static const int HAPPY_HASH = HashingUtils::HashString("HAPPY");
        static const int SAD_HASH = HashingUtils::HashString("SAD");
        static const int ANGRY_HASH = HashingUtils::HashString("ANGRY");
        static const int CONFUSED_HASH = HashingUtils::HashString("CONFUSED");
        static const int DISGUSTED_HASH = HashingUtils::HashString("DISGUSTED");
        static const int SURPRISED_HASH = HashingUtils::HashString("SURPRISED");
        static const int CALM_HASH = HashingUtils::HashString("CALM");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int FEAR_HASH = HashingUtils::HashString("FEAR");


        EmotionName GetEmotionNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HAPPY_HASH)
          {
            return EmotionName::HAPPY;
          }
          else if (hashCode == SAD_HASH)
          {
            return EmotionName::SAD;
          }
          else if (hashCode == ANGRY_HASH)
          {
            return EmotionName::ANGRY;
          }
          else if (hashCode == CONFUSED_HASH)
          {
            return EmotionName::CONFUSED;
          }
          else if (hashCode == DISGUSTED_HASH)
          {
            return EmotionName::DISGUSTED;
          }
          else if (hashCode == SURPRISED_HASH)
          {
            return EmotionName::SURPRISED;
          }
          else if (hashCode == CALM_HASH)
          {
            return EmotionName::CALM;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return EmotionName::UNKNOWN;
          }
          else if (hashCode == FEAR_HASH)
          {
            return EmotionName::FEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmotionName>(hashCode);
          }

          return EmotionName::NOT_SET;
        }

        Aws::String GetNameForEmotionName(EmotionName enumValue)
        {
          switch(enumValue)
          {
          case EmotionName::HAPPY:
            return "HAPPY";
          case EmotionName::SAD:
            return "SAD";
          case EmotionName::ANGRY:
            return "ANGRY";
          case EmotionName::CONFUSED:
            return "CONFUSED";
          case EmotionName::DISGUSTED:
            return "DISGUSTED";
          case EmotionName::SURPRISED:
            return "SURPRISED";
          case EmotionName::CALM:
            return "CALM";
          case EmotionName::UNKNOWN:
            return "UNKNOWN";
          case EmotionName::FEAR:
            return "FEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmotionNameMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
