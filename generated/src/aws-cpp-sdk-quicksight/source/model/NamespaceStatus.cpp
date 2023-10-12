/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamespaceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace NamespaceStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t RETRYABLE_FAILURE_HASH = ConstExprHashingUtils::HashString("RETRYABLE_FAILURE");
        static constexpr uint32_t NON_RETRYABLE_FAILURE_HASH = ConstExprHashingUtils::HashString("NON_RETRYABLE_FAILURE");


        NamespaceStatus GetNamespaceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return NamespaceStatus::CREATED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return NamespaceStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NamespaceStatus::DELETING;
          }
          else if (hashCode == RETRYABLE_FAILURE_HASH)
          {
            return NamespaceStatus::RETRYABLE_FAILURE;
          }
          else if (hashCode == NON_RETRYABLE_FAILURE_HASH)
          {
            return NamespaceStatus::NON_RETRYABLE_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceStatus>(hashCode);
          }

          return NamespaceStatus::NOT_SET;
        }

        Aws::String GetNameForNamespaceStatus(NamespaceStatus enumValue)
        {
          switch(enumValue)
          {
          case NamespaceStatus::NOT_SET:
            return {};
          case NamespaceStatus::CREATED:
            return "CREATED";
          case NamespaceStatus::CREATING:
            return "CREATING";
          case NamespaceStatus::DELETING:
            return "DELETING";
          case NamespaceStatus::RETRYABLE_FAILURE:
            return "RETRYABLE_FAILURE";
          case NamespaceStatus::NON_RETRYABLE_FAILURE:
            return "NON_RETRYABLE_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
