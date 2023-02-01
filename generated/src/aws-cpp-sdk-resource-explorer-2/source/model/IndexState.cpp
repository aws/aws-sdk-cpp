/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/IndexState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceExplorer2
  {
    namespace Model
    {
      namespace IndexStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        IndexState GetIndexStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return IndexState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IndexState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return IndexState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return IndexState::DELETED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return IndexState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndexState>(hashCode);
          }

          return IndexState::NOT_SET;
        }

        Aws::String GetNameForIndexState(IndexState enumValue)
        {
          switch(enumValue)
          {
          case IndexState::CREATING:
            return "CREATING";
          case IndexState::ACTIVE:
            return "ACTIVE";
          case IndexState::DELETING:
            return "DELETING";
          case IndexState::DELETED:
            return "DELETED";
          case IndexState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndexStateMapper
    } // namespace Model
  } // namespace ResourceExplorer2
} // namespace Aws
