/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeNoteTemplate.h>
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
      namespace MedicalScribeNoteTemplateMapper
      {

        static const int HISTORY_AND_PHYSICAL_HASH = HashingUtils::HashString("HISTORY_AND_PHYSICAL");
        static const int GIRPP_HASH = HashingUtils::HashString("GIRPP");
        static const int DAP_HASH = HashingUtils::HashString("DAP");
        static const int SIRP_HASH = HashingUtils::HashString("SIRP");
        static const int BIRP_HASH = HashingUtils::HashString("BIRP");
        static const int BEHAVIORAL_SOAP_HASH = HashingUtils::HashString("BEHAVIORAL_SOAP");
        static const int PHYSICAL_SOAP_HASH = HashingUtils::HashString("PHYSICAL_SOAP");


        MedicalScribeNoteTemplate GetMedicalScribeNoteTemplateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HISTORY_AND_PHYSICAL_HASH)
          {
            return MedicalScribeNoteTemplate::HISTORY_AND_PHYSICAL;
          }
          else if (hashCode == GIRPP_HASH)
          {
            return MedicalScribeNoteTemplate::GIRPP;
          }
          else if (hashCode == DAP_HASH)
          {
            return MedicalScribeNoteTemplate::DAP;
          }
          else if (hashCode == SIRP_HASH)
          {
            return MedicalScribeNoteTemplate::SIRP;
          }
          else if (hashCode == BIRP_HASH)
          {
            return MedicalScribeNoteTemplate::BIRP;
          }
          else if (hashCode == BEHAVIORAL_SOAP_HASH)
          {
            return MedicalScribeNoteTemplate::BEHAVIORAL_SOAP;
          }
          else if (hashCode == PHYSICAL_SOAP_HASH)
          {
            return MedicalScribeNoteTemplate::PHYSICAL_SOAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeNoteTemplate>(hashCode);
          }

          return MedicalScribeNoteTemplate::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeNoteTemplate(MedicalScribeNoteTemplate enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeNoteTemplate::NOT_SET:
            return {};
          case MedicalScribeNoteTemplate::HISTORY_AND_PHYSICAL:
            return "HISTORY_AND_PHYSICAL";
          case MedicalScribeNoteTemplate::GIRPP:
            return "GIRPP";
          case MedicalScribeNoteTemplate::DAP:
            return "DAP";
          case MedicalScribeNoteTemplate::SIRP:
            return "SIRP";
          case MedicalScribeNoteTemplate::BIRP:
            return "BIRP";
          case MedicalScribeNoteTemplate::BEHAVIORAL_SOAP:
            return "BEHAVIORAL_SOAP";
          case MedicalScribeNoteTemplate::PHYSICAL_SOAP:
            return "PHYSICAL_SOAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MedicalScribeNoteTemplateMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
