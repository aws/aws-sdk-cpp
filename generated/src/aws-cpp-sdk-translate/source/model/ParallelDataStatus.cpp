/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ParallelDataStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Translate
  {
    namespace Model
    {
      namespace ParallelDataStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ParallelDataStatus GetParallelDataStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ParallelDataStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ParallelDataStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ParallelDataStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ParallelDataStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ParallelDataStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParallelDataStatus>(hashCode);
          }

          return ParallelDataStatus::NOT_SET;
        }

        Aws::String GetNameForParallelDataStatus(ParallelDataStatus enumValue)
        {
          switch(enumValue)
          {
          case ParallelDataStatus::NOT_SET:
            return {};
          case ParallelDataStatus::CREATING:
            return "CREATING";
          case ParallelDataStatus::UPDATING:
            return "UPDATING";
          case ParallelDataStatus::ACTIVE:
            return "ACTIVE";
          case ParallelDataStatus::DELETING:
            return "DELETING";
          case ParallelDataStatus::FAILED:
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

      } // namespace ParallelDataStatusMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
