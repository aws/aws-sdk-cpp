/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSessionStorageMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace StreamingSessionStorageModeMapper
      {

        static const int UPLOAD_HASH = HashingUtils::HashString("UPLOAD");


        StreamingSessionStorageMode GetStreamingSessionStorageModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPLOAD_HASH)
          {
            return StreamingSessionStorageMode::UPLOAD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingSessionStorageMode>(hashCode);
          }

          return StreamingSessionStorageMode::NOT_SET;
        }

        Aws::String GetNameForStreamingSessionStorageMode(StreamingSessionStorageMode enumValue)
        {
          switch(enumValue)
          {
          case StreamingSessionStorageMode::NOT_SET:
            return {};
          case StreamingSessionStorageMode::UPLOAD:
            return "UPLOAD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingSessionStorageModeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
