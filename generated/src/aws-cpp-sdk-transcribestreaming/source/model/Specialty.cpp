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

        static constexpr uint32_t PRIMARYCARE_HASH = ConstExprHashingUtils::HashString("PRIMARYCARE");
        static constexpr uint32_t CARDIOLOGY_HASH = ConstExprHashingUtils::HashString("CARDIOLOGY");
        static constexpr uint32_t NEUROLOGY_HASH = ConstExprHashingUtils::HashString("NEUROLOGY");
        static constexpr uint32_t ONCOLOGY_HASH = ConstExprHashingUtils::HashString("ONCOLOGY");
        static constexpr uint32_t RADIOLOGY_HASH = ConstExprHashingUtils::HashString("RADIOLOGY");
        static constexpr uint32_t UROLOGY_HASH = ConstExprHashingUtils::HashString("UROLOGY");


        Specialty GetSpecialtyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Specialty::NOT_SET:
            return {};
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
