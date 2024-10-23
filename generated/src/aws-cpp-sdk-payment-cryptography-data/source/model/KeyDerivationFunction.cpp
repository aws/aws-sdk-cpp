/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/KeyDerivationFunction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PaymentCryptographyData
  {
    namespace Model
    {
      namespace KeyDerivationFunctionMapper
      {

        static const int NIST_SP800_HASH = HashingUtils::HashString("NIST_SP800");
        static const int ANSI_X963_HASH = HashingUtils::HashString("ANSI_X963");


        KeyDerivationFunction GetKeyDerivationFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NIST_SP800_HASH)
          {
            return KeyDerivationFunction::NIST_SP800;
          }
          else if (hashCode == ANSI_X963_HASH)
          {
            return KeyDerivationFunction::ANSI_X963;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyDerivationFunction>(hashCode);
          }

          return KeyDerivationFunction::NOT_SET;
        }

        Aws::String GetNameForKeyDerivationFunction(KeyDerivationFunction enumValue)
        {
          switch(enumValue)
          {
          case KeyDerivationFunction::NOT_SET:
            return {};
          case KeyDerivationFunction::NIST_SP800:
            return "NIST_SP800";
          case KeyDerivationFunction::ANSI_X963:
            return "ANSI_X963";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyDerivationFunctionMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
