/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourcesMapField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ResourcesMapFieldMapper
      {

        static const int tags_HASH = HashingUtils::HashString("tags");


        ResourcesMapField GetResourcesMapFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == tags_HASH)
          {
            return ResourcesMapField::tags;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourcesMapField>(hashCode);
          }

          return ResourcesMapField::NOT_SET;
        }

        Aws::String GetNameForResourcesMapField(ResourcesMapField enumValue)
        {
          switch(enumValue)
          {
          case ResourcesMapField::NOT_SET:
            return {};
          case ResourcesMapField::tags:
            return "tags";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourcesMapFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
