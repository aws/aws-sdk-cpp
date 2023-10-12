/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/ResourceFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroups
  {
    namespace Model
    {
      namespace ResourceFilterNameMapper
      {

        static constexpr uint32_t resource_type_HASH = ConstExprHashingUtils::HashString("resource-type");


        ResourceFilterName GetResourceFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == resource_type_HASH)
          {
            return ResourceFilterName::resource_type;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceFilterName>(hashCode);
          }

          return ResourceFilterName::NOT_SET;
        }

        Aws::String GetNameForResourceFilterName(ResourceFilterName enumValue)
        {
          switch(enumValue)
          {
          case ResourceFilterName::NOT_SET:
            return {};
          case ResourceFilterName::resource_type:
            return "resource-type";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceFilterNameMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
