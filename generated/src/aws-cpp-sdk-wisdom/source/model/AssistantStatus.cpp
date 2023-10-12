/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/AssistantStatus.h>
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
      namespace AssistantStatusMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        AssistantStatus GetAssistantStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return AssistantStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AssistantStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AssistantStatus::ACTIVE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return AssistantStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return AssistantStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return AssistantStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssistantStatus>(hashCode);
          }

          return AssistantStatus::NOT_SET;
        }

        Aws::String GetNameForAssistantStatus(AssistantStatus enumValue)
        {
          switch(enumValue)
          {
          case AssistantStatus::NOT_SET:
            return {};
          case AssistantStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case AssistantStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AssistantStatus::ACTIVE:
            return "ACTIVE";
          case AssistantStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case AssistantStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case AssistantStatus::DELETED:
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

      } // namespace AssistantStatusMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
