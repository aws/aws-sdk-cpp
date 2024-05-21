/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/SearchState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace SearchStateMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        SearchState GetSearchStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return SearchState::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return SearchState::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return SearchState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SearchState::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return SearchState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchState>(hashCode);
          }

          return SearchState::NOT_SET;
        }

        Aws::String GetNameForSearchState(SearchState enumValue)
        {
          switch(enumValue)
          {
          case SearchState::NOT_SET:
            return {};
          case SearchState::QUEUED:
            return "QUEUED";
          case SearchState::RUNNING:
            return "RUNNING";
          case SearchState::COMPLETED:
            return "COMPLETED";
          case SearchState::FAILED:
            return "FAILED";
          case SearchState::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchStateMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
