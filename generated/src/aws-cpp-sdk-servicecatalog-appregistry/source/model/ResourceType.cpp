/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRegistry
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int CFN_STACK_HASH = HashingUtils::HashString("CFN_STACK");
        static const int RESOURCE_TAG_VALUE_HASH = HashingUtils::HashString("RESOURCE_TAG_VALUE");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CFN_STACK_HASH)
          {
            return ResourceType::CFN_STACK;
          }
          else if (hashCode == RESOURCE_TAG_VALUE_HASH)
          {
            return ResourceType::RESOURCE_TAG_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::CFN_STACK:
            return "CFN_STACK";
          case ResourceType::RESOURCE_TAG_VALUE:
            return "RESOURCE_TAG_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace AppRegistry
} // namespace Aws
