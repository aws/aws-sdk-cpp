/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/PayloadType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace PayloadTypeMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int FORM_ENCODED_HASH = HashingUtils::HashString("FORM_ENCODED");


        PayloadType GetPayloadTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return PayloadType::JSON;
          }
          else if (hashCode == FORM_ENCODED_HASH)
          {
            return PayloadType::FORM_ENCODED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PayloadType>(hashCode);
          }

          return PayloadType::NOT_SET;
        }

        Aws::String GetNameForPayloadType(PayloadType enumValue)
        {
          switch(enumValue)
          {
          case PayloadType::NOT_SET:
            return {};
          case PayloadType::JSON:
            return "JSON";
          case PayloadType::FORM_ENCODED:
            return "FORM_ENCODED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PayloadTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
