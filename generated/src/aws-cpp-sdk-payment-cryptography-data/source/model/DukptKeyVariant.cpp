/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DukptKeyVariant.h>
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
      namespace DukptKeyVariantMapper
      {

        static const int BIDIRECTIONAL_HASH = HashingUtils::HashString("BIDIRECTIONAL");
        static const int REQUEST_HASH = HashingUtils::HashString("REQUEST");
        static const int RESPONSE_HASH = HashingUtils::HashString("RESPONSE");


        DukptKeyVariant GetDukptKeyVariantForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BIDIRECTIONAL_HASH)
          {
            return DukptKeyVariant::BIDIRECTIONAL;
          }
          else if (hashCode == REQUEST_HASH)
          {
            return DukptKeyVariant::REQUEST;
          }
          else if (hashCode == RESPONSE_HASH)
          {
            return DukptKeyVariant::RESPONSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DukptKeyVariant>(hashCode);
          }

          return DukptKeyVariant::NOT_SET;
        }

        Aws::String GetNameForDukptKeyVariant(DukptKeyVariant enumValue)
        {
          switch(enumValue)
          {
          case DukptKeyVariant::NOT_SET:
            return {};
          case DukptKeyVariant::BIDIRECTIONAL:
            return "BIDIRECTIONAL";
          case DukptKeyVariant::REQUEST:
            return "REQUEST";
          case DukptKeyVariant::RESPONSE:
            return "RESPONSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DukptKeyVariantMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
