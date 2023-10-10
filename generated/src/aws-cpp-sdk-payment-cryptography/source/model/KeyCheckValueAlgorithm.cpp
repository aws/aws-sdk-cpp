﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyCheckValueAlgorithm.h>
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
      namespace KeyCheckValueAlgorithmMapper
      {

        static const int CMAC_HASH = HashingUtils::HashString("CMAC");
        static const int ANSI_X9_24_HASH = HashingUtils::HashString("ANSI_X9_24");


        KeyCheckValueAlgorithm GetKeyCheckValueAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CMAC_HASH)
          {
            return KeyCheckValueAlgorithm::CMAC;
          }
          else if (hashCode == ANSI_X9_24_HASH)
          {
            return KeyCheckValueAlgorithm::ANSI_X9_24;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyCheckValueAlgorithm>(hashCode);
          }

          return KeyCheckValueAlgorithm::NOT_SET;
        }

        Aws::String GetNameForKeyCheckValueAlgorithm(KeyCheckValueAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case KeyCheckValueAlgorithm::NOT_SET:
            return {};
          case KeyCheckValueAlgorithm::CMAC:
            return "CMAC";
          case KeyCheckValueAlgorithm::ANSI_X9_24:
            return "ANSI_X9_24";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyCheckValueAlgorithmMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
