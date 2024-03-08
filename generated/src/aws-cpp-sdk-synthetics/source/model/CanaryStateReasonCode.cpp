/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryStateReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace CanaryStateReasonCodeMapper
      {

        static const int INVALID_PERMISSIONS_HASH = HashingUtils::HashString("INVALID_PERMISSIONS");
        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_PENDING_HASH = HashingUtils::HashString("UPDATE_PENDING");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
        static const int ROLLBACK_COMPLETE_HASH = HashingUtils::HashString("ROLLBACK_COMPLETE");
        static const int ROLLBACK_FAILED_HASH = HashingUtils::HashString("ROLLBACK_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int SYNC_DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("SYNC_DELETE_IN_PROGRESS");


        CanaryStateReasonCode GetCanaryStateReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_PERMISSIONS_HASH)
          {
            return CanaryStateReasonCode::INVALID_PERMISSIONS;
          }
          else if (hashCode == CREATE_PENDING_HASH)
          {
            return CanaryStateReasonCode::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return CanaryStateReasonCode::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return CanaryStateReasonCode::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_PENDING_HASH)
          {
            return CanaryStateReasonCode::UPDATE_PENDING;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return CanaryStateReasonCode::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return CanaryStateReasonCode::UPDATE_COMPLETE;
          }
          else if (hashCode == ROLLBACK_COMPLETE_HASH)
          {
            return CanaryStateReasonCode::ROLLBACK_COMPLETE;
          }
          else if (hashCode == ROLLBACK_FAILED_HASH)
          {
            return CanaryStateReasonCode::ROLLBACK_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return CanaryStateReasonCode::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return CanaryStateReasonCode::DELETE_FAILED;
          }
          else if (hashCode == SYNC_DELETE_IN_PROGRESS_HASH)
          {
            return CanaryStateReasonCode::SYNC_DELETE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CanaryStateReasonCode>(hashCode);
          }

          return CanaryStateReasonCode::NOT_SET;
        }

        Aws::String GetNameForCanaryStateReasonCode(CanaryStateReasonCode enumValue)
        {
          switch(enumValue)
          {
          case CanaryStateReasonCode::NOT_SET:
            return {};
          case CanaryStateReasonCode::INVALID_PERMISSIONS:
            return "INVALID_PERMISSIONS";
          case CanaryStateReasonCode::CREATE_PENDING:
            return "CREATE_PENDING";
          case CanaryStateReasonCode::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case CanaryStateReasonCode::CREATE_FAILED:
            return "CREATE_FAILED";
          case CanaryStateReasonCode::UPDATE_PENDING:
            return "UPDATE_PENDING";
          case CanaryStateReasonCode::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case CanaryStateReasonCode::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case CanaryStateReasonCode::ROLLBACK_COMPLETE:
            return "ROLLBACK_COMPLETE";
          case CanaryStateReasonCode::ROLLBACK_FAILED:
            return "ROLLBACK_FAILED";
          case CanaryStateReasonCode::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case CanaryStateReasonCode::DELETE_FAILED:
            return "DELETE_FAILED";
          case CanaryStateReasonCode::SYNC_DELETE_IN_PROGRESS:
            return "SYNC_DELETE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CanaryStateReasonCodeMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
