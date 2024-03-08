/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/AgreementStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AgreementService
  {
    namespace Model
    {
      namespace AgreementStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int RENEWED_HASH = HashingUtils::HashString("RENEWED");
        static const int REPLACED_HASH = HashingUtils::HashString("REPLACED");
        static const int ROLLED_BACK_HASH = HashingUtils::HashString("ROLLED_BACK");
        static const int SUPERSEDED_HASH = HashingUtils::HashString("SUPERSEDED");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        AgreementStatus GetAgreementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AgreementStatus::ACTIVE;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return AgreementStatus::ARCHIVED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return AgreementStatus::CANCELLED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return AgreementStatus::EXPIRED;
          }
          else if (hashCode == RENEWED_HASH)
          {
            return AgreementStatus::RENEWED;
          }
          else if (hashCode == REPLACED_HASH)
          {
            return AgreementStatus::REPLACED;
          }
          else if (hashCode == ROLLED_BACK_HASH)
          {
            return AgreementStatus::ROLLED_BACK;
          }
          else if (hashCode == SUPERSEDED_HASH)
          {
            return AgreementStatus::SUPERSEDED;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return AgreementStatus::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgreementStatus>(hashCode);
          }

          return AgreementStatus::NOT_SET;
        }

        Aws::String GetNameForAgreementStatus(AgreementStatus enumValue)
        {
          switch(enumValue)
          {
          case AgreementStatus::NOT_SET:
            return {};
          case AgreementStatus::ACTIVE:
            return "ACTIVE";
          case AgreementStatus::ARCHIVED:
            return "ARCHIVED";
          case AgreementStatus::CANCELLED:
            return "CANCELLED";
          case AgreementStatus::EXPIRED:
            return "EXPIRED";
          case AgreementStatus::RENEWED:
            return "RENEWED";
          case AgreementStatus::REPLACED:
            return "REPLACED";
          case AgreementStatus::ROLLED_BACK:
            return "ROLLED_BACK";
          case AgreementStatus::SUPERSEDED:
            return "SUPERSEDED";
          case AgreementStatus::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgreementStatusMapper
    } // namespace Model
  } // namespace AgreementService
} // namespace Aws
