/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ServerSideEncryptionUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace ServerSideEncryptionUpdateStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ServerSideEncryptionUpdateStatus GetServerSideEncryptionUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ServerSideEncryptionUpdateStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ServerSideEncryptionUpdateStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ServerSideEncryptionUpdateStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerSideEncryptionUpdateStatus>(hashCode);
          }

          return ServerSideEncryptionUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForServerSideEncryptionUpdateStatus(ServerSideEncryptionUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case ServerSideEncryptionUpdateStatus::NOT_SET:
            return {};
          case ServerSideEncryptionUpdateStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ServerSideEncryptionUpdateStatus::COMPLETED:
            return "COMPLETED";
          case ServerSideEncryptionUpdateStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerSideEncryptionUpdateStatusMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
