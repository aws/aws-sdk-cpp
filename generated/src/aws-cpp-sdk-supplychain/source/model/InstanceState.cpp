/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/InstanceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SupplyChain
  {
    namespace Model
    {
      namespace InstanceStateMapper
      {

        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int CreateFailed_HASH = HashingUtils::HashString("CreateFailed");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        InstanceState GetInstanceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initializing_HASH)
          {
            return InstanceState::Initializing;
          }
          else if (hashCode == Active_HASH)
          {
            return InstanceState::Active;
          }
          else if (hashCode == CreateFailed_HASH)
          {
            return InstanceState::CreateFailed;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return InstanceState::DeleteFailed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return InstanceState::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return InstanceState::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceState>(hashCode);
          }

          return InstanceState::NOT_SET;
        }

        Aws::String GetNameForInstanceState(InstanceState enumValue)
        {
          switch(enumValue)
          {
          case InstanceState::NOT_SET:
            return {};
          case InstanceState::Initializing:
            return "Initializing";
          case InstanceState::Active:
            return "Active";
          case InstanceState::CreateFailed:
            return "CreateFailed";
          case InstanceState::DeleteFailed:
            return "DeleteFailed";
          case InstanceState::Deleting:
            return "Deleting";
          case InstanceState::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStateMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
