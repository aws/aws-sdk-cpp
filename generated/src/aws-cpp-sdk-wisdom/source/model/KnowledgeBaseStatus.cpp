/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/KnowledgeBaseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectWisdomService
  {
    namespace Model
    {
      namespace KnowledgeBaseStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        KnowledgeBaseStatus GetKnowledgeBaseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return KnowledgeBaseStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return KnowledgeBaseStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return KnowledgeBaseStatus::ACTIVE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return KnowledgeBaseStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return KnowledgeBaseStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return KnowledgeBaseStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KnowledgeBaseStatus>(hashCode);
          }

          return KnowledgeBaseStatus::NOT_SET;
        }

        Aws::String GetNameForKnowledgeBaseStatus(KnowledgeBaseStatus enumValue)
        {
          switch(enumValue)
          {
          case KnowledgeBaseStatus::NOT_SET:
            return {};
          case KnowledgeBaseStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case KnowledgeBaseStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case KnowledgeBaseStatus::ACTIVE:
            return "ACTIVE";
          case KnowledgeBaseStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case KnowledgeBaseStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case KnowledgeBaseStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KnowledgeBaseStatusMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
