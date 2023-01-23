/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/Specialty.h>
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
      namespace SpecialtyMapper
      {

        static const int PRIMARYCARE_HASH = HashingUtils::HashString("PRIMARYCARE");
        static const int CARDIOLOGY_HASH = HashingUtils::HashString("CARDIOLOGY");
        static const int NEUROLOGY_HASH = HashingUtils::HashString("NEUROLOGY");
        static const int ONCOLOGY_HASH = HashingUtils::HashString("ONCOLOGY");
        static const int RADIOLOGY_HASH = HashingUtils::HashString("RADIOLOGY");
        static const int UROLOGY_HASH = HashingUtils::HashString("UROLOGY");


        Specialty GetSpecialtyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARYCARE_HASH)
          {
            return Specialty::PRIMARYCARE;
          }
          else if (hashCode == CARDIOLOGY_HASH)
          {
            return Specialty::CARDIOLOGY;
          }
          else if (hashCode == NEUROLOGY_HASH)
          {
            return Specialty::NEUROLOGY;
          }
          else if (hashCode == ONCOLOGY_HASH)
          {
            return Specialty::ONCOLOGY;
          }
          else if (hashCode == RADIOLOGY_HASH)
          {
            return Specialty::RADIOLOGY;
          }
          else if (hashCode == UROLOGY_HASH)
          {
            return Specialty::UROLOGY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Specialty>(hashCode);
          }

          return Specialty::NOT_SET;
        }

        Aws::String GetNameForSpecialty(Specialty enumValue)
        {
          switch(enumValue)
          {
          case Specialty::PRIMARYCARE:
            return "PRIMARYCARE";
          case Specialty::CARDIOLOGY:
            return "CARDIOLOGY";
          case Specialty::NEUROLOGY:
            return "NEUROLOGY";
          case Specialty::ONCOLOGY:
            return "ONCOLOGY";
          case Specialty::RADIOLOGY:
            return "RADIOLOGY";
          case Specialty::UROLOGY:
            return "UROLOGY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpecialtyMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
