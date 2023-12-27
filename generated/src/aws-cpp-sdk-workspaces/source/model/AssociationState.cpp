/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AssociationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace AssociationStateMapper
      {

        static const int PENDING_INSTALL_HASH = HashingUtils::HashString("PENDING_INSTALL");
        static const int PENDING_INSTALL_DEPLOYMENT_HASH = HashingUtils::HashString("PENDING_INSTALL_DEPLOYMENT");
        static const int PENDING_UNINSTALL_HASH = HashingUtils::HashString("PENDING_UNINSTALL");
        static const int PENDING_UNINSTALL_DEPLOYMENT_HASH = HashingUtils::HashString("PENDING_UNINSTALL_DEPLOYMENT");
        static const int INSTALLING_HASH = HashingUtils::HashString("INSTALLING");
        static const int UNINSTALLING_HASH = HashingUtils::HashString("UNINSTALLING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");


        AssociationState GetAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_INSTALL_HASH)
          {
            return AssociationState::PENDING_INSTALL;
          }
          else if (hashCode == PENDING_INSTALL_DEPLOYMENT_HASH)
          {
            return AssociationState::PENDING_INSTALL_DEPLOYMENT;
          }
          else if (hashCode == PENDING_UNINSTALL_HASH)
          {
            return AssociationState::PENDING_UNINSTALL;
          }
          else if (hashCode == PENDING_UNINSTALL_DEPLOYMENT_HASH)
          {
            return AssociationState::PENDING_UNINSTALL_DEPLOYMENT;
          }
          else if (hashCode == INSTALLING_HASH)
          {
            return AssociationState::INSTALLING;
          }
          else if (hashCode == UNINSTALLING_HASH)
          {
            return AssociationState::UNINSTALLING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AssociationState::ERROR_;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AssociationState::COMPLETED;
          }
          else if (hashCode == REMOVED_HASH)
          {
            return AssociationState::REMOVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationState>(hashCode);
          }

          return AssociationState::NOT_SET;
        }

        Aws::String GetNameForAssociationState(AssociationState enumValue)
        {
          switch(enumValue)
          {
          case AssociationState::NOT_SET:
            return {};
          case AssociationState::PENDING_INSTALL:
            return "PENDING_INSTALL";
          case AssociationState::PENDING_INSTALL_DEPLOYMENT:
            return "PENDING_INSTALL_DEPLOYMENT";
          case AssociationState::PENDING_UNINSTALL:
            return "PENDING_UNINSTALL";
          case AssociationState::PENDING_UNINSTALL_DEPLOYMENT:
            return "PENDING_UNINSTALL_DEPLOYMENT";
          case AssociationState::INSTALLING:
            return "INSTALLING";
          case AssociationState::UNINSTALLING:
            return "UNINSTALLING";
          case AssociationState::ERROR_:
            return "ERROR";
          case AssociationState::COMPLETED:
            return "COMPLETED";
          case AssociationState::REMOVED:
            return "REMOVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
