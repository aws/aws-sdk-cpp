/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeParticipantRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace MedicalScribeParticipantRoleMapper
      {

        static const int PATIENT_HASH = HashingUtils::HashString("PATIENT");
        static const int CLINICIAN_HASH = HashingUtils::HashString("CLINICIAN");


        MedicalScribeParticipantRole GetMedicalScribeParticipantRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PATIENT_HASH)
          {
            return MedicalScribeParticipantRole::PATIENT;
          }
          else if (hashCode == CLINICIAN_HASH)
          {
            return MedicalScribeParticipantRole::CLINICIAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeParticipantRole>(hashCode);
          }

          return MedicalScribeParticipantRole::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeParticipantRole(MedicalScribeParticipantRole enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeParticipantRole::NOT_SET:
            return {};
          case MedicalScribeParticipantRole::PATIENT:
            return "PATIENT";
          case MedicalScribeParticipantRole::CLINICIAN:
            return "CLINICIAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MedicalScribeParticipantRoleMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
