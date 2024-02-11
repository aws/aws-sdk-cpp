/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UnsuccessfulFaceDisassociationReason.h>
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
      namespace UnsuccessfulFaceDisassociationReasonMapper
      {

        static const int FACE_NOT_FOUND_HASH = HashingUtils::HashString("FACE_NOT_FOUND");
        static const int ASSOCIATED_TO_A_DIFFERENT_USER_HASH = HashingUtils::HashString("ASSOCIATED_TO_A_DIFFERENT_USER");


        UnsuccessfulFaceDisassociationReason GetUnsuccessfulFaceDisassociationReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FACE_NOT_FOUND_HASH)
          {
            return UnsuccessfulFaceDisassociationReason::FACE_NOT_FOUND;
          }
          else if (hashCode == ASSOCIATED_TO_A_DIFFERENT_USER_HASH)
          {
            return UnsuccessfulFaceDisassociationReason::ASSOCIATED_TO_A_DIFFERENT_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnsuccessfulFaceDisassociationReason>(hashCode);
          }

          return UnsuccessfulFaceDisassociationReason::NOT_SET;
        }

        Aws::String GetNameForUnsuccessfulFaceDisassociationReason(UnsuccessfulFaceDisassociationReason enumValue)
        {
          switch(enumValue)
          {
          case UnsuccessfulFaceDisassociationReason::NOT_SET:
            return {};
          case UnsuccessfulFaceDisassociationReason::FACE_NOT_FOUND:
            return "FACE_NOT_FOUND";
          case UnsuccessfulFaceDisassociationReason::ASSOCIATED_TO_A_DIFFERENT_USER:
            return "ASSOCIATED_TO_A_DIFFERENT_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnsuccessfulFaceDisassociationReasonMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
