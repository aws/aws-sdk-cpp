/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AssociationStatus.h>
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
      namespace AssociationStatusMapper
      {

        static const int NOT_ASSOCIATED_HASH = HashingUtils::HashString("NOT_ASSOCIATED");
        static const int ASSOCIATED_WITH_OWNER_ACCOUNT_HASH = HashingUtils::HashString("ASSOCIATED_WITH_OWNER_ACCOUNT");
        static const int ASSOCIATED_WITH_SHARED_ACCOUNT_HASH = HashingUtils::HashString("ASSOCIATED_WITH_SHARED_ACCOUNT");
        static const int PENDING_ASSOCIATION_HASH = HashingUtils::HashString("PENDING_ASSOCIATION");
        static const int PENDING_DISASSOCIATION_HASH = HashingUtils::HashString("PENDING_DISASSOCIATION");


        AssociationStatus GetAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_ASSOCIATED_HASH)
          {
            return AssociationStatus::NOT_ASSOCIATED;
          }
          else if (hashCode == ASSOCIATED_WITH_OWNER_ACCOUNT_HASH)
          {
            return AssociationStatus::ASSOCIATED_WITH_OWNER_ACCOUNT;
          }
          else if (hashCode == ASSOCIATED_WITH_SHARED_ACCOUNT_HASH)
          {
            return AssociationStatus::ASSOCIATED_WITH_SHARED_ACCOUNT;
          }
          else if (hashCode == PENDING_ASSOCIATION_HASH)
          {
            return AssociationStatus::PENDING_ASSOCIATION;
          }
          else if (hashCode == PENDING_DISASSOCIATION_HASH)
          {
            return AssociationStatus::PENDING_DISASSOCIATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationStatus>(hashCode);
          }

          return AssociationStatus::NOT_SET;
        }

        Aws::String GetNameForAssociationStatus(AssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case AssociationStatus::NOT_ASSOCIATED:
            return "NOT_ASSOCIATED";
          case AssociationStatus::ASSOCIATED_WITH_OWNER_ACCOUNT:
            return "ASSOCIATED_WITH_OWNER_ACCOUNT";
          case AssociationStatus::ASSOCIATED_WITH_SHARED_ACCOUNT:
            return "ASSOCIATED_WITH_SHARED_ACCOUNT";
          case AssociationStatus::PENDING_ASSOCIATION:
            return "PENDING_ASSOCIATION";
          case AssociationStatus::PENDING_DISASSOCIATION:
            return "PENDING_DISASSOCIATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationStatusMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
