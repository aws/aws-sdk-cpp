/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UnsuccessfulFaceDeletionReason.h>
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
      namespace UnsuccessfulFaceDeletionReasonMapper
      {

        static const int ASSOCIATED_TO_AN_EXISTING_USER_HASH = HashingUtils::HashString("ASSOCIATED_TO_AN_EXISTING_USER");
        static const int FACE_NOT_FOUND_HASH = HashingUtils::HashString("FACE_NOT_FOUND");


        UnsuccessfulFaceDeletionReason GetUnsuccessfulFaceDeletionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATED_TO_AN_EXISTING_USER_HASH)
          {
            return UnsuccessfulFaceDeletionReason::ASSOCIATED_TO_AN_EXISTING_USER;
          }
          else if (hashCode == FACE_NOT_FOUND_HASH)
          {
            return UnsuccessfulFaceDeletionReason::FACE_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnsuccessfulFaceDeletionReason>(hashCode);
          }

          return UnsuccessfulFaceDeletionReason::NOT_SET;
        }

        Aws::String GetNameForUnsuccessfulFaceDeletionReason(UnsuccessfulFaceDeletionReason enumValue)
        {
          switch(enumValue)
          {
          case UnsuccessfulFaceDeletionReason::NOT_SET:
            return {};
          case UnsuccessfulFaceDeletionReason::ASSOCIATED_TO_AN_EXISTING_USER:
            return "ASSOCIATED_TO_AN_EXISTING_USER";
          case UnsuccessfulFaceDeletionReason::FACE_NOT_FOUND:
            return "FACE_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnsuccessfulFaceDeletionReasonMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
