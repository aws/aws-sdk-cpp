/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/Brevity.h>
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
      namespace BrevityMapper
      {

        static const int ON_HASH = HashingUtils::HashString("ON");


        Brevity GetBrevityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_HASH)
          {
            return Brevity::ON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Brevity>(hashCode);
          }

          return Brevity::NOT_SET;
        }

        Aws::String GetNameForBrevity(Brevity enumValue)
        {
          switch(enumValue)
          {
          case Brevity::NOT_SET:
            return {};
          case Brevity::ON:
            return "ON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrevityMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
