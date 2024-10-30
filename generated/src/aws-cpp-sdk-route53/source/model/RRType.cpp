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

        static const int SOA_HASH = HashingUtils::HashString("SOA");
        static const int A_HASH = HashingUtils::HashString("A");
        static const int TXT_HASH = HashingUtils::HashString("TXT");
        static const int NS_HASH = HashingUtils::HashString("NS");
        static const int CNAME_HASH = HashingUtils::HashString("CNAME");
        static const int MX_HASH = HashingUtils::HashString("MX");
        static const int NAPTR_HASH = HashingUtils::HashString("NAPTR");
        static const int PTR_HASH = HashingUtils::HashString("PTR");
        static const int SRV_HASH = HashingUtils::HashString("SRV");
        static const int SPF_HASH = HashingUtils::HashString("SPF");
        static const int AAAA_HASH = HashingUtils::HashString("AAAA");
        static const int CAA_HASH = HashingUtils::HashString("CAA");
        static const int DS_HASH = HashingUtils::HashString("DS");
        static const int TLSA_HASH = HashingUtils::HashString("TLSA");
        static const int SSHFP_HASH = HashingUtils::HashString("SSHFP");
        static const int SVCB_HASH = HashingUtils::HashString("SVCB");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");


        RRType GetRRTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == TLSA_HASH)
          {
            return RRType::TLSA;
          }
          else if (hashCode == SSHFP_HASH)
          {
            return RRType::SSHFP;
          }
          else if (hashCode == SVCB_HASH)
          {
            return RRType::SVCB;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return RRType::HTTPS;
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
          case RRType::TLSA:
            return "TLSA";
          case RRType::SSHFP:
            return "SSHFP";
          case RRType::SVCB:
            return "SVCB";
          case RRType::HTTPS:
            return "HTTPS";
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
