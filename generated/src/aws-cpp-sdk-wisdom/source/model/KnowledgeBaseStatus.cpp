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

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        KnowledgeBaseStatus GetKnowledgeBaseStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
