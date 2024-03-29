﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsClientCache.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace HlsClientCacheMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        HlsClientCache GetHlsClientCacheForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return HlsClientCache::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return HlsClientCache::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsClientCache>(hashCode);
          }

          return HlsClientCache::NOT_SET;
        }

        Aws::String GetNameForHlsClientCache(HlsClientCache enumValue)
        {
          switch(enumValue)
          {
          case HlsClientCache::NOT_SET:
            return {};
          case HlsClientCache::DISABLED:
            return "DISABLED";
          case HlsClientCache::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsClientCacheMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
