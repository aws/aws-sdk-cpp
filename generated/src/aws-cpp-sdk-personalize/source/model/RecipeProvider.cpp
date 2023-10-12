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

        static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("SERVICE");


        RecipeProvider GetRecipeProviderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RecipeProvider::NOT_SET:
            return {};
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
