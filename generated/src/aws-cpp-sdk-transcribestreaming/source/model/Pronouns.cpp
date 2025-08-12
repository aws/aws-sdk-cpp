/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/Pronouns.h>
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
      namespace PronounsMapper
      {

        static const int HE_HIM_HASH = HashingUtils::HashString("HE_HIM");
        static const int SHE_HER_HASH = HashingUtils::HashString("SHE_HER");
        static const int THEY_THEM_HASH = HashingUtils::HashString("THEY_THEM");


        Pronouns GetPronounsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HE_HIM_HASH)
          {
            return Pronouns::HE_HIM;
          }
          else if (hashCode == SHE_HER_HASH)
          {
            return Pronouns::SHE_HER;
          }
          else if (hashCode == THEY_THEM_HASH)
          {
            return Pronouns::THEY_THEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Pronouns>(hashCode);
          }

          return Pronouns::NOT_SET;
        }

        Aws::String GetNameForPronouns(Pronouns enumValue)
        {
          switch(enumValue)
          {
          case Pronouns::NOT_SET:
            return {};
          case Pronouns::HE_HIM:
            return "HE_HIM";
          case Pronouns::SHE_HER:
            return "SHE_HER";
          case Pronouns::THEY_THEM:
            return "THEY_THEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PronounsMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
