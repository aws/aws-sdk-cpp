/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/Intent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCatalog
  {
    namespace Model
    {
      namespace IntentMapper
      {

        static const int VALIDATE_HASH = HashingUtils::HashString("VALIDATE");
        static const int APPLY_HASH = HashingUtils::HashString("APPLY");


        Intent GetIntentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATE_HASH)
          {
            return Intent::VALIDATE;
          }
          else if (hashCode == APPLY_HASH)
          {
            return Intent::APPLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Intent>(hashCode);
          }

          return Intent::NOT_SET;
        }

        Aws::String GetNameForIntent(Intent enumValue)
        {
          switch(enumValue)
          {
          case Intent::NOT_SET:
            return {};
          case Intent::VALIDATE:
            return "VALIDATE";
          case Intent::APPLY:
            return "APPLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntentMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
