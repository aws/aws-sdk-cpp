/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ChallengeType.h>
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
      namespace ChallengeTypeMapper
      {

        static const int FaceMovementAndLightChallenge_HASH = HashingUtils::HashString("FaceMovementAndLightChallenge");
        static const int FaceMovementChallenge_HASH = HashingUtils::HashString("FaceMovementChallenge");


        ChallengeType GetChallengeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FaceMovementAndLightChallenge_HASH)
          {
            return ChallengeType::FaceMovementAndLightChallenge;
          }
          else if (hashCode == FaceMovementChallenge_HASH)
          {
            return ChallengeType::FaceMovementChallenge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChallengeType>(hashCode);
          }

          return ChallengeType::NOT_SET;
        }

        Aws::String GetNameForChallengeType(ChallengeType enumValue)
        {
          switch(enumValue)
          {
          case ChallengeType::NOT_SET:
            return {};
          case ChallengeType::FaceMovementAndLightChallenge:
            return "FaceMovementAndLightChallenge";
          case ChallengeType::FaceMovementChallenge:
            return "FaceMovementChallenge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChallengeTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
