﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalContentIdentificationType.h>
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
      namespace MedicalContentIdentificationTypeMapper
      {

        static const int PHI_HASH = HashingUtils::HashString("PHI");


        MedicalContentIdentificationType GetMedicalContentIdentificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PHI_HASH)
          {
            return MedicalContentIdentificationType::PHI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalContentIdentificationType>(hashCode);
          }

          return MedicalContentIdentificationType::NOT_SET;
        }

        Aws::String GetNameForMedicalContentIdentificationType(MedicalContentIdentificationType enumValue)
        {
          switch(enumValue)
          {
          case MedicalContentIdentificationType::PHI:
            return "PHI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MedicalContentIdentificationTypeMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
