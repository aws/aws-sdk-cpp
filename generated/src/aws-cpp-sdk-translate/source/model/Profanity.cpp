/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/Profanity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Translate
  {
    namespace Model
    {
      namespace ProfanityMapper
      {

        static const int MASK_HASH = HashingUtils::HashString("MASK");


        Profanity GetProfanityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MASK_HASH)
          {
            return Profanity::MASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Profanity>(hashCode);
          }

          return Profanity::NOT_SET;
        }

        Aws::String GetNameForProfanity(Profanity enumValue)
        {
          switch(enumValue)
          {
          case Profanity::NOT_SET:
            return {};
          case Profanity::MASK:
            return "MASK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfanityMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
