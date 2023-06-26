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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ParallelDataStatus GetParallelDataStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
