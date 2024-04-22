/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyExportability.h>
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
      namespace KeyExportabilityMapper
      {

        static const int EXPORTABLE_HASH = HashingUtils::HashString("EXPORTABLE");
        static const int NON_EXPORTABLE_HASH = HashingUtils::HashString("NON_EXPORTABLE");
        static const int SENSITIVE_HASH = HashingUtils::HashString("SENSITIVE");


        KeyExportability GetKeyExportabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPORTABLE_HASH)
          {
            return KeyExportability::EXPORTABLE;
          }
          else if (hashCode == NON_EXPORTABLE_HASH)
          {
            return KeyExportability::NON_EXPORTABLE;
          }
          else if (hashCode == SENSITIVE_HASH)
          {
            return KeyExportability::SENSITIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyExportability>(hashCode);
          }

          return KeyExportability::NOT_SET;
        }

        Aws::String GetNameForKeyExportability(KeyExportability enumValue)
        {
          switch(enumValue)
          {
          case KeyExportability::NOT_SET:
            return {};
          case KeyExportability::EXPORTABLE:
            return "EXPORTABLE";
          case KeyExportability::NON_EXPORTABLE:
            return "NON_EXPORTABLE";
          case KeyExportability::SENSITIVE:
            return "SENSITIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyExportabilityMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
