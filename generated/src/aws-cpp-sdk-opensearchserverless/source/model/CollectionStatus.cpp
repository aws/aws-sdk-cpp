/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CollectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace CollectionStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        CollectionStatus GetCollectionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CollectionStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CollectionStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return CollectionStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CollectionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CollectionStatus>(hashCode);
          }

          return CollectionStatus::NOT_SET;
        }

        Aws::String GetNameForCollectionStatus(CollectionStatus enumValue)
        {
          switch(enumValue)
          {
          case CollectionStatus::NOT_SET:
            return {};
          case CollectionStatus::CREATING:
            return "CREATING";
          case CollectionStatus::DELETING:
            return "DELETING";
          case CollectionStatus::ACTIVE:
            return "ACTIVE";
          case CollectionStatus::FAILED:
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

      } // namespace CollectionStatusMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
