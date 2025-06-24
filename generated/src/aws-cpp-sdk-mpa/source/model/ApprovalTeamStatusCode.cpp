/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/ApprovalTeamStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace ApprovalTeamStatusCodeMapper
      {

        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int PENDING_ACTIVATION_HASH = HashingUtils::HashString("PENDING_ACTIVATION");
        static const int FAILED_VALIDATION_HASH = HashingUtils::HashString("FAILED_VALIDATION");
        static const int FAILED_ACTIVATION_HASH = HashingUtils::HashString("FAILED_ACTIVATION");
        static const int UPDATE_PENDING_APPROVAL_HASH = HashingUtils::HashString("UPDATE_PENDING_APPROVAL");
        static const int UPDATE_PENDING_ACTIVATION_HASH = HashingUtils::HashString("UPDATE_PENDING_ACTIVATION");
        static const int UPDATE_FAILED_APPROVAL_HASH = HashingUtils::HashString("UPDATE_FAILED_APPROVAL");
        static const int UPDATE_FAILED_ACTIVATION_HASH = HashingUtils::HashString("UPDATE_FAILED_ACTIVATION");
        static const int UPDATE_FAILED_VALIDATION_HASH = HashingUtils::HashString("UPDATE_FAILED_VALIDATION");
        static const int DELETE_PENDING_APPROVAL_HASH = HashingUtils::HashString("DELETE_PENDING_APPROVAL");
        static const int DELETE_FAILED_APPROVAL_HASH = HashingUtils::HashString("DELETE_FAILED_APPROVAL");
        static const int DELETE_FAILED_VALIDATION_HASH = HashingUtils::HashString("DELETE_FAILED_VALIDATION");


        ApprovalTeamStatusCode GetApprovalTeamStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATING_HASH)
          {
            return ApprovalTeamStatusCode::VALIDATING;
          }
          else if (hashCode == PENDING_ACTIVATION_HASH)
          {
            return ApprovalTeamStatusCode::PENDING_ACTIVATION;
          }
          else if (hashCode == FAILED_VALIDATION_HASH)
          {
            return ApprovalTeamStatusCode::FAILED_VALIDATION;
          }
          else if (hashCode == FAILED_ACTIVATION_HASH)
          {
            return ApprovalTeamStatusCode::FAILED_ACTIVATION;
          }
          else if (hashCode == UPDATE_PENDING_APPROVAL_HASH)
          {
            return ApprovalTeamStatusCode::UPDATE_PENDING_APPROVAL;
          }
          else if (hashCode == UPDATE_PENDING_ACTIVATION_HASH)
          {
            return ApprovalTeamStatusCode::UPDATE_PENDING_ACTIVATION;
          }
          else if (hashCode == UPDATE_FAILED_APPROVAL_HASH)
          {
            return ApprovalTeamStatusCode::UPDATE_FAILED_APPROVAL;
          }
          else if (hashCode == UPDATE_FAILED_ACTIVATION_HASH)
          {
            return ApprovalTeamStatusCode::UPDATE_FAILED_ACTIVATION;
          }
          else if (hashCode == UPDATE_FAILED_VALIDATION_HASH)
          {
            return ApprovalTeamStatusCode::UPDATE_FAILED_VALIDATION;
          }
          else if (hashCode == DELETE_PENDING_APPROVAL_HASH)
          {
            return ApprovalTeamStatusCode::DELETE_PENDING_APPROVAL;
          }
          else if (hashCode == DELETE_FAILED_APPROVAL_HASH)
          {
            return ApprovalTeamStatusCode::DELETE_FAILED_APPROVAL;
          }
          else if (hashCode == DELETE_FAILED_VALIDATION_HASH)
          {
            return ApprovalTeamStatusCode::DELETE_FAILED_VALIDATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApprovalTeamStatusCode>(hashCode);
          }

          return ApprovalTeamStatusCode::NOT_SET;
        }

        Aws::String GetNameForApprovalTeamStatusCode(ApprovalTeamStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ApprovalTeamStatusCode::NOT_SET:
            return {};
          case ApprovalTeamStatusCode::VALIDATING:
            return "VALIDATING";
          case ApprovalTeamStatusCode::PENDING_ACTIVATION:
            return "PENDING_ACTIVATION";
          case ApprovalTeamStatusCode::FAILED_VALIDATION:
            return "FAILED_VALIDATION";
          case ApprovalTeamStatusCode::FAILED_ACTIVATION:
            return "FAILED_ACTIVATION";
          case ApprovalTeamStatusCode::UPDATE_PENDING_APPROVAL:
            return "UPDATE_PENDING_APPROVAL";
          case ApprovalTeamStatusCode::UPDATE_PENDING_ACTIVATION:
            return "UPDATE_PENDING_ACTIVATION";
          case ApprovalTeamStatusCode::UPDATE_FAILED_APPROVAL:
            return "UPDATE_FAILED_APPROVAL";
          case ApprovalTeamStatusCode::UPDATE_FAILED_ACTIVATION:
            return "UPDATE_FAILED_ACTIVATION";
          case ApprovalTeamStatusCode::UPDATE_FAILED_VALIDATION:
            return "UPDATE_FAILED_VALIDATION";
          case ApprovalTeamStatusCode::DELETE_PENDING_APPROVAL:
            return "DELETE_PENDING_APPROVAL";
          case ApprovalTeamStatusCode::DELETE_FAILED_APPROVAL:
            return "DELETE_FAILED_APPROVAL";
          case ApprovalTeamStatusCode::DELETE_FAILED_VALIDATION:
            return "DELETE_FAILED_VALIDATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApprovalTeamStatusCodeMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
