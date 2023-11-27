/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeLanguageCode.h>
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
      namespace MedicalScribeLanguageCodeMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");


        MedicalScribeLanguageCode GetMedicalScribeLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return MedicalScribeLanguageCode::en_US;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeLanguageCode>(hashCode);
          }

          return MedicalScribeLanguageCode::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeLanguageCode(MedicalScribeLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeLanguageCode::NOT_SET:
            return {};
          case MedicalScribeLanguageCode::en_US:
            return "en-US";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MedicalScribeLanguageCodeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
