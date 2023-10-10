/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/KeySpec.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace KeySpecMapper
      {

        static const int KEY_EXCHANGE_HASH = HashingUtils::HashString("KEY_EXCHANGE");
        static const int SIGNATURE_HASH = HashingUtils::HashString("SIGNATURE");


        KeySpec GetKeySpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEY_EXCHANGE_HASH)
          {
            return KeySpec::KEY_EXCHANGE;
          }
          else if (hashCode == SIGNATURE_HASH)
          {
            return KeySpec::SIGNATURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeySpec>(hashCode);
          }

          return KeySpec::NOT_SET;
        }

        Aws::String GetNameForKeySpec(KeySpec enumValue)
        {
          switch(enumValue)
          {
          case KeySpec::NOT_SET:
            return {};
          case KeySpec::KEY_EXCHANGE:
            return "KEY_EXCHANGE";
          case KeySpec::SIGNATURE:
            return "SIGNATURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeySpecMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
