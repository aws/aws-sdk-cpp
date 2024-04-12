/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SignalMapStatus.h>
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
      namespace SignalMapStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
        static const int UPDATE_REVERTED_HASH = HashingUtils::HashString("UPDATE_REVERTED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int NOT_READY_HASH = HashingUtils::HashString("NOT_READY");


        SignalMapStatus GetSignalMapStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return SignalMapStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return SignalMapStatus::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return SignalMapStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return SignalMapStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return SignalMapStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_REVERTED_HASH)
          {
            return SignalMapStatus::UPDATE_REVERTED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return SignalMapStatus::UPDATE_FAILED;
          }
          else if (hashCode == READY_HASH)
          {
            return SignalMapStatus::READY;
          }
          else if (hashCode == NOT_READY_HASH)
          {
            return SignalMapStatus::NOT_READY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalMapStatus>(hashCode);
          }

          return SignalMapStatus::NOT_SET;
        }

        Aws::String GetNameForSignalMapStatus(SignalMapStatus enumValue)
        {
          switch(enumValue)
          {
          case SignalMapStatus::NOT_SET:
            return {};
          case SignalMapStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case SignalMapStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case SignalMapStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case SignalMapStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case SignalMapStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case SignalMapStatus::UPDATE_REVERTED:
            return "UPDATE_REVERTED";
          case SignalMapStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case SignalMapStatus::READY:
            return "READY";
          case SignalMapStatus::NOT_READY:
            return "NOT_READY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignalMapStatusMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
