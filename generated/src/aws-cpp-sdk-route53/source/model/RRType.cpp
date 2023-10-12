/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/RRType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace RRTypeMapper
      {

        static constexpr uint32_t SOA_HASH = ConstExprHashingUtils::HashString("SOA");
        static constexpr uint32_t A_HASH = ConstExprHashingUtils::HashString("A");
        static constexpr uint32_t TXT_HASH = ConstExprHashingUtils::HashString("TXT");
        static constexpr uint32_t NS_HASH = ConstExprHashingUtils::HashString("NS");
        static constexpr uint32_t CNAME_HASH = ConstExprHashingUtils::HashString("CNAME");
        static constexpr uint32_t MX_HASH = ConstExprHashingUtils::HashString("MX");
        static constexpr uint32_t NAPTR_HASH = ConstExprHashingUtils::HashString("NAPTR");
        static constexpr uint32_t PTR_HASH = ConstExprHashingUtils::HashString("PTR");
        static constexpr uint32_t SRV_HASH = ConstExprHashingUtils::HashString("SRV");
        static constexpr uint32_t SPF_HASH = ConstExprHashingUtils::HashString("SPF");
        static constexpr uint32_t AAAA_HASH = ConstExprHashingUtils::HashString("AAAA");
        static constexpr uint32_t CAA_HASH = ConstExprHashingUtils::HashString("CAA");
        static constexpr uint32_t DS_HASH = ConstExprHashingUtils::HashString("DS");


        RRType GetRRTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOA_HASH)
          {
            return RRType::SOA;
          }
          else if (hashCode == A_HASH)
          {
            return RRType::A;
          }
          else if (hashCode == TXT_HASH)
          {
            return RRType::TXT;
          }
          else if (hashCode == NS_HASH)
          {
            return RRType::NS;
          }
          else if (hashCode == CNAME_HASH)
          {
            return RRType::CNAME;
          }
          else if (hashCode == MX_HASH)
          {
            return RRType::MX;
          }
          else if (hashCode == NAPTR_HASH)
          {
            return RRType::NAPTR;
          }
          else if (hashCode == PTR_HASH)
          {
            return RRType::PTR;
          }
          else if (hashCode == SRV_HASH)
          {
            return RRType::SRV;
          }
          else if (hashCode == SPF_HASH)
          {
            return RRType::SPF;
          }
          else if (hashCode == AAAA_HASH)
          {
            return RRType::AAAA;
          }
          else if (hashCode == CAA_HASH)
          {
            return RRType::CAA;
          }
          else if (hashCode == DS_HASH)
          {
            return RRType::DS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RRType>(hashCode);
          }

          return RRType::NOT_SET;
        }

        Aws::String GetNameForRRType(RRType enumValue)
        {
          switch(enumValue)
          {
          case RRType::NOT_SET:
            return {};
          case RRType::SOA:
            return "SOA";
          case RRType::A:
            return "A";
          case RRType::TXT:
            return "TXT";
          case RRType::NS:
            return "NS";
          case RRType::CNAME:
            return "CNAME";
          case RRType::MX:
            return "MX";
          case RRType::NAPTR:
            return "NAPTR";
          case RRType::PTR:
            return "PTR";
          case RRType::SRV:
            return "SRV";
          case RRType::SPF:
            return "SPF";
          case RRType::AAAA:
            return "AAAA";
          case RRType::CAA:
            return "CAA";
          case RRType::DS:
            return "DS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RRTypeMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
