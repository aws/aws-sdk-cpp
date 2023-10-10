/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/SMSSandboxPhoneNumberVerificationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SNS
  {
    namespace Model
    {
      namespace SMSSandboxPhoneNumberVerificationStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Verified_HASH = HashingUtils::HashString("Verified");


        SMSSandboxPhoneNumberVerificationStatus GetSMSSandboxPhoneNumberVerificationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return SMSSandboxPhoneNumberVerificationStatus::Pending;
          }
          else if (hashCode == Verified_HASH)
          {
            return SMSSandboxPhoneNumberVerificationStatus::Verified;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SMSSandboxPhoneNumberVerificationStatus>(hashCode);
          }

          return SMSSandboxPhoneNumberVerificationStatus::NOT_SET;
        }

        Aws::String GetNameForSMSSandboxPhoneNumberVerificationStatus(SMSSandboxPhoneNumberVerificationStatus enumValue)
        {
          switch(enumValue)
          {
          case SMSSandboxPhoneNumberVerificationStatus::NOT_SET:
            return {};
          case SMSSandboxPhoneNumberVerificationStatus::Pending:
            return "Pending";
          case SMSSandboxPhoneNumberVerificationStatus::Verified:
            return "Verified";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SMSSandboxPhoneNumberVerificationStatusMapper
    } // namespace Model
  } // namespace SNS
} // namespace Aws
