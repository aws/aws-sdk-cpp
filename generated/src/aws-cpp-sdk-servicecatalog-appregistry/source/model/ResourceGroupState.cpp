/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ResourceGroupState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRegistry
  {
    namespace Model
    {
      namespace ResourceGroupStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        ResourceGroupState GetResourceGroupStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ResourceGroupState::CREATING;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return ResourceGroupState::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ResourceGroupState::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ResourceGroupState::UPDATING;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return ResourceGroupState::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ResourceGroupState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceGroupState>(hashCode);
          }

          return ResourceGroupState::NOT_SET;
        }

        Aws::String GetNameForResourceGroupState(ResourceGroupState enumValue)
        {
          switch(enumValue)
          {
          case ResourceGroupState::NOT_SET:
            return {};
          case ResourceGroupState::CREATING:
            return "CREATING";
          case ResourceGroupState::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case ResourceGroupState::CREATE_FAILED:
            return "CREATE_FAILED";
          case ResourceGroupState::UPDATING:
            return "UPDATING";
          case ResourceGroupState::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case ResourceGroupState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceGroupStateMapper
    } // namespace Model
  } // namespace AppRegistry
} // namespace Aws
