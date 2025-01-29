/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeSessionControlEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeStreamingService
  {
    namespace Model
    {
      namespace MedicalScribeSessionControlEventTypeMapper
      {

        static const int END_OF_SESSION_HASH = HashingUtils::HashString("END_OF_SESSION");


        MedicalScribeSessionControlEventType GetMedicalScribeSessionControlEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == END_OF_SESSION_HASH)
          {
            return MedicalScribeSessionControlEventType::END_OF_SESSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeSessionControlEventType>(hashCode);
          }

          return MedicalScribeSessionControlEventType::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeSessionControlEventType(MedicalScribeSessionControlEventType enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeSessionControlEventType::NOT_SET:
            return {};
          case MedicalScribeSessionControlEventType::END_OF_SESSION:
            return "END_OF_SESSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MedicalScribeSessionControlEventTypeMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
