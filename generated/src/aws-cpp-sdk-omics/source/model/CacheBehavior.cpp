/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CacheBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace CacheBehaviorMapper
      {

        static const int CACHE_ON_FAILURE_HASH = HashingUtils::HashString("CACHE_ON_FAILURE");
        static const int CACHE_ALWAYS_HASH = HashingUtils::HashString("CACHE_ALWAYS");


        CacheBehavior GetCacheBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CACHE_ON_FAILURE_HASH)
          {
            return CacheBehavior::CACHE_ON_FAILURE;
          }
          else if (hashCode == CACHE_ALWAYS_HASH)
          {
            return CacheBehavior::CACHE_ALWAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheBehavior>(hashCode);
          }

          return CacheBehavior::NOT_SET;
        }

        Aws::String GetNameForCacheBehavior(CacheBehavior enumValue)
        {
          switch(enumValue)
          {
          case CacheBehavior::NOT_SET:
            return {};
          case CacheBehavior::CACHE_ON_FAILURE:
            return "CACHE_ON_FAILURE";
          case CacheBehavior::CACHE_ALWAYS:
            return "CACHE_ALWAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CacheBehaviorMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
