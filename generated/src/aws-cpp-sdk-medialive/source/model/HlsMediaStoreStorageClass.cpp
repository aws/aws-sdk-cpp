/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsMediaStoreStorageClass.h>
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
      namespace HlsMediaStoreStorageClassMapper
      {

        static const int TEMPORAL_HASH = HashingUtils::HashString("TEMPORAL");


        HlsMediaStoreStorageClass GetHlsMediaStoreStorageClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEMPORAL_HASH)
          {
            return HlsMediaStoreStorageClass::TEMPORAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsMediaStoreStorageClass>(hashCode);
          }

          return HlsMediaStoreStorageClass::NOT_SET;
        }

        Aws::String GetNameForHlsMediaStoreStorageClass(HlsMediaStoreStorageClass enumValue)
        {
          switch(enumValue)
          {
          case HlsMediaStoreStorageClass::TEMPORAL:
            return "TEMPORAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsMediaStoreStorageClassMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
