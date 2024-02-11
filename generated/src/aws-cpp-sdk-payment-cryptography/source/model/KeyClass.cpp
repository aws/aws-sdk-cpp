/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyClass.h>
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
      namespace KeyClassMapper
      {

        static const int SYMMETRIC_KEY_HASH = HashingUtils::HashString("SYMMETRIC_KEY");
        static const int ASYMMETRIC_KEY_PAIR_HASH = HashingUtils::HashString("ASYMMETRIC_KEY_PAIR");
        static const int PRIVATE_KEY_HASH = HashingUtils::HashString("PRIVATE_KEY");
        static const int PUBLIC_KEY_HASH = HashingUtils::HashString("PUBLIC_KEY");


        KeyClass GetKeyClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYMMETRIC_KEY_HASH)
          {
            return KeyClass::SYMMETRIC_KEY;
          }
          else if (hashCode == ASYMMETRIC_KEY_PAIR_HASH)
          {
            return KeyClass::ASYMMETRIC_KEY_PAIR;
          }
          else if (hashCode == PRIVATE_KEY_HASH)
          {
            return KeyClass::PRIVATE_KEY;
          }
          else if (hashCode == PUBLIC_KEY_HASH)
          {
            return KeyClass::PUBLIC_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyClass>(hashCode);
          }

          return KeyClass::NOT_SET;
        }

        Aws::String GetNameForKeyClass(KeyClass enumValue)
        {
          switch(enumValue)
          {
          case KeyClass::NOT_SET:
            return {};
          case KeyClass::SYMMETRIC_KEY:
            return "SYMMETRIC_KEY";
          case KeyClass::ASYMMETRIC_KEY_PAIR:
            return "ASYMMETRIC_KEY_PAIR";
          case KeyClass::PRIVATE_KEY:
            return "PRIVATE_KEY";
          case KeyClass::PUBLIC_KEY:
            return "PUBLIC_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyClassMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
