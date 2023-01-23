/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/Category.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace signer
  {
    namespace Model
    {
      namespace CategoryMapper
      {

        static const int AWSIoT_HASH = HashingUtils::HashString("AWSIoT");


        Category GetCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSIoT_HASH)
          {
            return Category::AWSIoT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Category>(hashCode);
          }

          return Category::NOT_SET;
        }

        Aws::String GetNameForCategory(Category enumValue)
        {
          switch(enumValue)
          {
          case Category::AWSIoT:
            return "AWSIoT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoryMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
