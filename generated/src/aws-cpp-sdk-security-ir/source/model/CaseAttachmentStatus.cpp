/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CaseAttachmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityIR
  {
    namespace Model
    {
      namespace CaseAttachmentStatusMapper
      {

        static const int Verified_HASH = HashingUtils::HashString("Verified");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Pending_HASH = HashingUtils::HashString("Pending");


        CaseAttachmentStatus GetCaseAttachmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Verified_HASH)
          {
            return CaseAttachmentStatus::Verified;
          }
          else if (hashCode == Failed_HASH)
          {
            return CaseAttachmentStatus::Failed;
          }
          else if (hashCode == Pending_HASH)
          {
            return CaseAttachmentStatus::Pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaseAttachmentStatus>(hashCode);
          }

          return CaseAttachmentStatus::NOT_SET;
        }

        Aws::String GetNameForCaseAttachmentStatus(CaseAttachmentStatus enumValue)
        {
          switch(enumValue)
          {
          case CaseAttachmentStatus::NOT_SET:
            return {};
          case CaseAttachmentStatus::Verified:
            return "Verified";
          case CaseAttachmentStatus::Failed:
            return "Failed";
          case CaseAttachmentStatus::Pending:
            return "Pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaseAttachmentStatusMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
