/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/MajorKeyDerivationMode.h>
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
      namespace MajorKeyDerivationModeMapper
      {

        static const int EMV_OPTION_A_HASH = HashingUtils::HashString("EMV_OPTION_A");
        static const int EMV_OPTION_B_HASH = HashingUtils::HashString("EMV_OPTION_B");


        MajorKeyDerivationMode GetMajorKeyDerivationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMV_OPTION_A_HASH)
          {
            return MajorKeyDerivationMode::EMV_OPTION_A;
          }
          else if (hashCode == EMV_OPTION_B_HASH)
          {
            return MajorKeyDerivationMode::EMV_OPTION_B;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MajorKeyDerivationMode>(hashCode);
          }

          return MajorKeyDerivationMode::NOT_SET;
        }

        Aws::String GetNameForMajorKeyDerivationMode(MajorKeyDerivationMode enumValue)
        {
          switch(enumValue)
          {
          case MajorKeyDerivationMode::NOT_SET:
            return {};
          case MajorKeyDerivationMode::EMV_OPTION_A:
            return "EMV_OPTION_A";
          case MajorKeyDerivationMode::EMV_OPTION_B:
            return "EMV_OPTION_B";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MajorKeyDerivationModeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
