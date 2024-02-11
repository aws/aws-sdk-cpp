/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/Tr34KeyBlockFormat.h>
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
      namespace Tr34KeyBlockFormatMapper
      {

        static const int X9_TR34_2012_HASH = HashingUtils::HashString("X9_TR34_2012");


        Tr34KeyBlockFormat GetTr34KeyBlockFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == X9_TR34_2012_HASH)
          {
            return Tr34KeyBlockFormat::X9_TR34_2012;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Tr34KeyBlockFormat>(hashCode);
          }

          return Tr34KeyBlockFormat::NOT_SET;
        }

        Aws::String GetNameForTr34KeyBlockFormat(Tr34KeyBlockFormat enumValue)
        {
          switch(enumValue)
          {
          case Tr34KeyBlockFormat::NOT_SET:
            return {};
          case Tr34KeyBlockFormat::X9_TR34_2012:
            return "X9_TR34_2012";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Tr34KeyBlockFormatMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
