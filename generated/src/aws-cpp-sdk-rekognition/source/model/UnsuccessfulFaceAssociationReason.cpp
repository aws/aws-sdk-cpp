/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UnsuccessfulFaceAssociationReason.h>
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
      namespace UnsuccessfulFaceAssociationReasonMapper
      {

        static const int FACE_NOT_FOUND_HASH = HashingUtils::HashString("FACE_NOT_FOUND");
        static const int ASSOCIATED_TO_A_DIFFERENT_USER_HASH = HashingUtils::HashString("ASSOCIATED_TO_A_DIFFERENT_USER");
        static const int LOW_MATCH_CONFIDENCE_HASH = HashingUtils::HashString("LOW_MATCH_CONFIDENCE");


        UnsuccessfulFaceAssociationReason GetUnsuccessfulFaceAssociationReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FACE_NOT_FOUND_HASH)
          {
            return UnsuccessfulFaceAssociationReason::FACE_NOT_FOUND;
          }
          else if (hashCode == ASSOCIATED_TO_A_DIFFERENT_USER_HASH)
          {
            return UnsuccessfulFaceAssociationReason::ASSOCIATED_TO_A_DIFFERENT_USER;
          }
          else if (hashCode == LOW_MATCH_CONFIDENCE_HASH)
          {
            return UnsuccessfulFaceAssociationReason::LOW_MATCH_CONFIDENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnsuccessfulFaceAssociationReason>(hashCode);
          }

          return UnsuccessfulFaceAssociationReason::NOT_SET;
        }

        Aws::String GetNameForUnsuccessfulFaceAssociationReason(UnsuccessfulFaceAssociationReason enumValue)
        {
          switch(enumValue)
          {
          case UnsuccessfulFaceAssociationReason::NOT_SET:
            return {};
          case UnsuccessfulFaceAssociationReason::FACE_NOT_FOUND:
            return "FACE_NOT_FOUND";
          case UnsuccessfulFaceAssociationReason::ASSOCIATED_TO_A_DIFFERENT_USER:
            return "ASSOCIATED_TO_A_DIFFERENT_USER";
          case UnsuccessfulFaceAssociationReason::LOW_MATCH_CONFIDENCE:
            return "LOW_MATCH_CONFIDENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnsuccessfulFaceAssociationReasonMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
