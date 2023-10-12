/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningProfileStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace signer
  {
    namespace Model
    {
      namespace SigningProfileStatusMapper
      {

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Canceled_HASH = ConstExprHashingUtils::HashString("Canceled");
        static constexpr uint32_t Revoked_HASH = ConstExprHashingUtils::HashString("Revoked");


        SigningProfileStatus GetSigningProfileStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return SigningProfileStatus::Active;
          }
          else if (hashCode == Canceled_HASH)
          {
            return SigningProfileStatus::Canceled;
          }
          else if (hashCode == Revoked_HASH)
          {
            return SigningProfileStatus::Revoked;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SigningProfileStatus>(hashCode);
          }

          return SigningProfileStatus::NOT_SET;
        }

        Aws::String GetNameForSigningProfileStatus(SigningProfileStatus enumValue)
        {
          switch(enumValue)
          {
          case SigningProfileStatus::NOT_SET:
            return {};
          case SigningProfileStatus::Active:
            return "Active";
          case SigningProfileStatus::Canceled:
            return "Canceled";
          case SigningProfileStatus::Revoked:
            return "Revoked";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SigningProfileStatusMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
