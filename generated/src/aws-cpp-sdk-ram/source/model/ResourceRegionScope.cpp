/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceRegionScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ResourceRegionScopeMapper
      {

        static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
        static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");


        ResourceRegionScope GetResourceRegionScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGIONAL_HASH)
          {
            return ResourceRegionScope::REGIONAL;
          }
          else if (hashCode == GLOBAL_HASH)
          {
            return ResourceRegionScope::GLOBAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceRegionScope>(hashCode);
          }

          return ResourceRegionScope::NOT_SET;
        }

        Aws::String GetNameForResourceRegionScope(ResourceRegionScope enumValue)
        {
          switch(enumValue)
          {
          case ResourceRegionScope::NOT_SET:
            return {};
          case ResourceRegionScope::REGIONAL:
            return "REGIONAL";
          case ResourceRegionScope::GLOBAL:
            return "GLOBAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceRegionScopeMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
