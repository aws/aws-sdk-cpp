/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyState.h>
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
      namespace KeyStateMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");


        KeyState GetKeyStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return KeyState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return KeyState::CREATE_COMPLETE;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return KeyState::DELETE_PENDING;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return KeyState::DELETE_COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyState>(hashCode);
          }

          return KeyState::NOT_SET;
        }

        Aws::String GetNameForKeyState(KeyState enumValue)
        {
          switch(enumValue)
          {
          case KeyState::NOT_SET:
            return {};
          case KeyState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case KeyState::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case KeyState::DELETE_PENDING:
            return "DELETE_PENDING";
          case KeyState::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyStateMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
