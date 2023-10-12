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

        static constexpr uint32_t NOT_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("NOT_ASSOCIATED");
        static constexpr uint32_t ASSOCIATED_WITH_OWNER_ACCOUNT_HASH = ConstExprHashingUtils::HashString("ASSOCIATED_WITH_OWNER_ACCOUNT");
        static constexpr uint32_t ASSOCIATED_WITH_SHARED_ACCOUNT_HASH = ConstExprHashingUtils::HashString("ASSOCIATED_WITH_SHARED_ACCOUNT");
        static constexpr uint32_t PENDING_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("PENDING_ASSOCIATION");
        static constexpr uint32_t PENDING_DISASSOCIATION_HASH = ConstExprHashingUtils::HashString("PENDING_DISASSOCIATION");


        AssociationStatus GetAssociationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AssociationStatus::NOT_SET:
            return {};
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
