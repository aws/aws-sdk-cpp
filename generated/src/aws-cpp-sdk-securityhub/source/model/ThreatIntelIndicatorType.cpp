/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ThreatIntelIndicatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ThreatIntelIndicatorTypeMapper
      {

        static constexpr uint32_t DOMAIN__HASH = ConstExprHashingUtils::HashString("DOMAIN");
        static constexpr uint32_t EMAIL_ADDRESS_HASH = ConstExprHashingUtils::HashString("EMAIL_ADDRESS");
        static constexpr uint32_t HASH_MD5_HASH = ConstExprHashingUtils::HashString("HASH_MD5");
        static constexpr uint32_t HASH_SHA1_HASH = ConstExprHashingUtils::HashString("HASH_SHA1");
        static constexpr uint32_t HASH_SHA256_HASH = ConstExprHashingUtils::HashString("HASH_SHA256");
        static constexpr uint32_t HASH_SHA512_HASH = ConstExprHashingUtils::HashString("HASH_SHA512");
        static constexpr uint32_t IPV4_ADDRESS_HASH = ConstExprHashingUtils::HashString("IPV4_ADDRESS");
        static constexpr uint32_t IPV6_ADDRESS_HASH = ConstExprHashingUtils::HashString("IPV6_ADDRESS");
        static constexpr uint32_t MUTEX_HASH = ConstExprHashingUtils::HashString("MUTEX");
        static constexpr uint32_t PROCESS_HASH = ConstExprHashingUtils::HashString("PROCESS");
        static constexpr uint32_t URL_HASH = ConstExprHashingUtils::HashString("URL");


        ThreatIntelIndicatorType GetThreatIntelIndicatorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOMAIN__HASH)
          {
            return ThreatIntelIndicatorType::DOMAIN_;
          }
          else if (hashCode == EMAIL_ADDRESS_HASH)
          {
            return ThreatIntelIndicatorType::EMAIL_ADDRESS;
          }
          else if (hashCode == HASH_MD5_HASH)
          {
            return ThreatIntelIndicatorType::HASH_MD5;
          }
          else if (hashCode == HASH_SHA1_HASH)
          {
            return ThreatIntelIndicatorType::HASH_SHA1;
          }
          else if (hashCode == HASH_SHA256_HASH)
          {
            return ThreatIntelIndicatorType::HASH_SHA256;
          }
          else if (hashCode == HASH_SHA512_HASH)
          {
            return ThreatIntelIndicatorType::HASH_SHA512;
          }
          else if (hashCode == IPV4_ADDRESS_HASH)
          {
            return ThreatIntelIndicatorType::IPV4_ADDRESS;
          }
          else if (hashCode == IPV6_ADDRESS_HASH)
          {
            return ThreatIntelIndicatorType::IPV6_ADDRESS;
          }
          else if (hashCode == MUTEX_HASH)
          {
            return ThreatIntelIndicatorType::MUTEX;
          }
          else if (hashCode == PROCESS_HASH)
          {
            return ThreatIntelIndicatorType::PROCESS;
          }
          else if (hashCode == URL_HASH)
          {
            return ThreatIntelIndicatorType::URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThreatIntelIndicatorType>(hashCode);
          }

          return ThreatIntelIndicatorType::NOT_SET;
        }

        Aws::String GetNameForThreatIntelIndicatorType(ThreatIntelIndicatorType enumValue)
        {
          switch(enumValue)
          {
          case ThreatIntelIndicatorType::NOT_SET:
            return {};
          case ThreatIntelIndicatorType::DOMAIN_:
            return "DOMAIN";
          case ThreatIntelIndicatorType::EMAIL_ADDRESS:
            return "EMAIL_ADDRESS";
          case ThreatIntelIndicatorType::HASH_MD5:
            return "HASH_MD5";
          case ThreatIntelIndicatorType::HASH_SHA1:
            return "HASH_SHA1";
          case ThreatIntelIndicatorType::HASH_SHA256:
            return "HASH_SHA256";
          case ThreatIntelIndicatorType::HASH_SHA512:
            return "HASH_SHA512";
          case ThreatIntelIndicatorType::IPV4_ADDRESS:
            return "IPV4_ADDRESS";
          case ThreatIntelIndicatorType::IPV6_ADDRESS:
            return "IPV6_ADDRESS";
          case ThreatIntelIndicatorType::MUTEX:
            return "MUTEX";
          case ThreatIntelIndicatorType::PROCESS:
            return "PROCESS";
          case ThreatIntelIndicatorType::URL:
            return "URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThreatIntelIndicatorTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
