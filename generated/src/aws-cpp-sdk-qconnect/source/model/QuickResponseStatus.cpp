/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QuickResponseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace QuickResponseStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        QuickResponseStatus GetQuickResponseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return QuickResponseStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return QuickResponseStatus::CREATE_FAILED;
          }
          else if (hashCode == CREATED_HASH)
          {
            return QuickResponseStatus::CREATED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return QuickResponseStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return QuickResponseStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return QuickResponseStatus::DELETED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return QuickResponseStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return QuickResponseStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuickResponseStatus>(hashCode);
          }

          return QuickResponseStatus::NOT_SET;
        }

        Aws::String GetNameForQuickResponseStatus(QuickResponseStatus enumValue)
        {
          switch(enumValue)
          {
          case QuickResponseStatus::NOT_SET:
            return {};
          case QuickResponseStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case QuickResponseStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case QuickResponseStatus::CREATED:
            return "CREATED";
          case QuickResponseStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case QuickResponseStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case QuickResponseStatus::DELETED:
            return "DELETED";
          case QuickResponseStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case QuickResponseStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuickResponseStatusMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
