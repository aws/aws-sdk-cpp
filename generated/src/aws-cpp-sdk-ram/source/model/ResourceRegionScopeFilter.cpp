/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceRegionScopeFilter.h>
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
      namespace ResourceRegionScopeFilterMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
        static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");


        ResourceRegionScopeFilter GetResourceRegionScopeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ResourceRegionScopeFilter::ALL;
          }
          else if (hashCode == REGIONAL_HASH)
          {
            return ResourceRegionScopeFilter::REGIONAL;
          }
          else if (hashCode == GLOBAL_HASH)
          {
            return ResourceRegionScopeFilter::GLOBAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceRegionScopeFilter>(hashCode);
          }

          return ResourceRegionScopeFilter::NOT_SET;
        }

        Aws::String GetNameForResourceRegionScopeFilter(ResourceRegionScopeFilter enumValue)
        {
          switch(enumValue)
          {
          case ResourceRegionScopeFilter::NOT_SET:
            return {};
          case ResourceRegionScopeFilter::ALL:
            return "ALL";
          case ResourceRegionScopeFilter::REGIONAL:
            return "REGIONAL";
          case ResourceRegionScopeFilter::GLOBAL:
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

      } // namespace ResourceRegionScopeFilterMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
