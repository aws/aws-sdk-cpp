/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningStatus.h>
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
      namespace SigningStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");


        SigningStatus GetSigningStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return SigningStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return SigningStatus::Failed;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return SigningStatus::Succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SigningStatus>(hashCode);
          }

          return SigningStatus::NOT_SET;
        }

        Aws::String GetNameForSigningStatus(SigningStatus enumValue)
        {
          switch(enumValue)
          {
          case SigningStatus::NOT_SET:
            return {};
          case SigningStatus::InProgress:
            return "InProgress";
          case SigningStatus::Failed:
            return "Failed";
          case SigningStatus::Succeeded:
            return "Succeeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SigningStatusMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
