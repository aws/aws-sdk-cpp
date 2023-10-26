/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyOrigin.h>
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
      namespace KeyOriginMapper
      {

        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");
        static const int AWS_PAYMENT_CRYPTOGRAPHY_HASH = HashingUtils::HashString("AWS_PAYMENT_CRYPTOGRAPHY");


        KeyOrigin GetKeyOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTERNAL_HASH)
          {
            return KeyOrigin::EXTERNAL;
          }
          else if (hashCode == AWS_PAYMENT_CRYPTOGRAPHY_HASH)
          {
            return KeyOrigin::AWS_PAYMENT_CRYPTOGRAPHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyOrigin>(hashCode);
          }

          return KeyOrigin::NOT_SET;
        }

        Aws::String GetNameForKeyOrigin(KeyOrigin enumValue)
        {
          switch(enumValue)
          {
          case KeyOrigin::NOT_SET:
            return {};
          case KeyOrigin::EXTERNAL:
            return "EXTERNAL";
          case KeyOrigin::AWS_PAYMENT_CRYPTOGRAPHY:
            return "AWS_PAYMENT_CRYPTOGRAPHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyOriginMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
