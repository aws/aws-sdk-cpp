/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ResourceSourceTypeMapper
      {

        static const int AppTemplate_HASH = HashingUtils::HashString("AppTemplate");
        static const int Discovered_HASH = HashingUtils::HashString("Discovered");


        ResourceSourceType GetResourceSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AppTemplate_HASH)
          {
            return ResourceSourceType::AppTemplate;
          }
          else if (hashCode == Discovered_HASH)
          {
            return ResourceSourceType::Discovered;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSourceType>(hashCode);
          }

          return ResourceSourceType::NOT_SET;
        }

        Aws::String GetNameForResourceSourceType(ResourceSourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceSourceType::NOT_SET:
            return {};
          case ResourceSourceType::AppTemplate:
            return "AppTemplate";
          case ResourceSourceType::Discovered:
            return "Discovered";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSourceTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
