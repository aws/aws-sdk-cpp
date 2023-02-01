/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsOfflineEncrypted.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace HlsOfflineEncryptedMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        HlsOfflineEncrypted GetHlsOfflineEncryptedForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return HlsOfflineEncrypted::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return HlsOfflineEncrypted::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsOfflineEncrypted>(hashCode);
          }

          return HlsOfflineEncrypted::NOT_SET;
        }

        Aws::String GetNameForHlsOfflineEncrypted(HlsOfflineEncrypted enumValue)
        {
          switch(enumValue)
          {
          case HlsOfflineEncrypted::ENABLED:
            return "ENABLED";
          case HlsOfflineEncrypted::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsOfflineEncryptedMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
