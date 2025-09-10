/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyReplicationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PaymentCryptography
  {
    namespace Model
    {
      namespace KeyReplicationStateMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SYNCHRONIZED_HASH = HashingUtils::HashString("SYNCHRONIZED");


        KeyReplicationState GetKeyReplicationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return KeyReplicationState::IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return KeyReplicationState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return KeyReplicationState::FAILED;
          }
          else if (hashCode == SYNCHRONIZED_HASH)
          {
            return KeyReplicationState::SYNCHRONIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyReplicationState>(hashCode);
          }

          return KeyReplicationState::NOT_SET;
        }

        Aws::String GetNameForKeyReplicationState(KeyReplicationState enumValue)
        {
          switch(enumValue)
          {
          case KeyReplicationState::NOT_SET:
            return {};
          case KeyReplicationState::IN_PROGRESS:
            return "IN_PROGRESS";
          case KeyReplicationState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case KeyReplicationState::FAILED:
            return "FAILED";
          case KeyReplicationState::SYNCHRONIZED:
            return "SYNCHRONIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyReplicationStateMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
