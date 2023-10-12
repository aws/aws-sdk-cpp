/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/TargetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace TargetTypeMapper
      {

        static constexpr uint32_t TLS_SNI_HASH = ConstExprHashingUtils::HashString("TLS_SNI");
        static constexpr uint32_t HTTP_HOST_HASH = ConstExprHashingUtils::HashString("HTTP_HOST");


        TargetType GetTargetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TLS_SNI_HASH)
          {
            return TargetType::TLS_SNI;
          }
          else if (hashCode == HTTP_HOST_HASH)
          {
            return TargetType::HTTP_HOST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetType>(hashCode);
          }

          return TargetType::NOT_SET;
        }

        Aws::String GetNameForTargetType(TargetType enumValue)
        {
          switch(enumValue)
          {
          case TargetType::NOT_SET:
            return {};
          case TargetType::TLS_SNI:
            return "TLS_SNI";
          case TargetType::HTTP_HOST:
            return "HTTP_HOST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
