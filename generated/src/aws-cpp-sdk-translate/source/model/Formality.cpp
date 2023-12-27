/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/Formality.h>
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
      namespace FormalityMapper
      {

        static const int FORMAL_HASH = HashingUtils::HashString("FORMAL");
        static const int INFORMAL_HASH = HashingUtils::HashString("INFORMAL");


        Formality GetFormalityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORMAL_HASH)
          {
            return Formality::FORMAL;
          }
          else if (hashCode == INFORMAL_HASH)
          {
            return Formality::INFORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Formality>(hashCode);
          }

          return Formality::NOT_SET;
        }

        Aws::String GetNameForFormality(Formality enumValue)
        {
          switch(enumValue)
          {
          case Formality::NOT_SET:
            return {};
          case Formality::FORMAL:
            return "FORMAL";
          case Formality::INFORMAL:
            return "INFORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormalityMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
