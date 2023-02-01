/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/RecipeProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Personalize
  {
    namespace Model
    {
      namespace RecipeProviderMapper
      {

        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");


        RecipeProvider GetRecipeProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_HASH)
          {
            return RecipeProvider::SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecipeProvider>(hashCode);
          }

          return RecipeProvider::NOT_SET;
        }

        Aws::String GetNameForRecipeProvider(RecipeProvider enumValue)
        {
          switch(enumValue)
          {
          case RecipeProvider::SERVICE:
            return "SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecipeProviderMapper
    } // namespace Model
  } // namespace Personalize
} // namespace Aws
