/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsWebdavHttpTransferMode.h>
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
      namespace HlsWebdavHttpTransferModeMapper
      {

        static const int CHUNKED_HASH = HashingUtils::HashString("CHUNKED");
        static const int NON_CHUNKED_HASH = HashingUtils::HashString("NON_CHUNKED");


        HlsWebdavHttpTransferMode GetHlsWebdavHttpTransferModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHUNKED_HASH)
          {
            return HlsWebdavHttpTransferMode::CHUNKED;
          }
          else if (hashCode == NON_CHUNKED_HASH)
          {
            return HlsWebdavHttpTransferMode::NON_CHUNKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsWebdavHttpTransferMode>(hashCode);
          }

          return HlsWebdavHttpTransferMode::NOT_SET;
        }

        Aws::String GetNameForHlsWebdavHttpTransferMode(HlsWebdavHttpTransferMode enumValue)
        {
          switch(enumValue)
          {
          case HlsWebdavHttpTransferMode::CHUNKED:
            return "CHUNKED";
          case HlsWebdavHttpTransferMode::NON_CHUNKED:
            return "NON_CHUNKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsWebdavHttpTransferModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
