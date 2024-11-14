/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AwsMemberBusinessTitle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace AwsMemberBusinessTitleMapper
      {

        static const int AWSSalesRep_HASH = HashingUtils::HashString("AWSSalesRep");
        static const int AWSAccountOwner_HASH = HashingUtils::HashString("AWSAccountOwner");
        static const int WWPSPDM_HASH = HashingUtils::HashString("WWPSPDM");
        static const int PDM_HASH = HashingUtils::HashString("PDM");
        static const int PSM_HASH = HashingUtils::HashString("PSM");
        static const int ISVSM_HASH = HashingUtils::HashString("ISVSM");


        AwsMemberBusinessTitle GetAwsMemberBusinessTitleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSSalesRep_HASH)
          {
            return AwsMemberBusinessTitle::AWSSalesRep;
          }
          else if (hashCode == AWSAccountOwner_HASH)
          {
            return AwsMemberBusinessTitle::AWSAccountOwner;
          }
          else if (hashCode == WWPSPDM_HASH)
          {
            return AwsMemberBusinessTitle::WWPSPDM;
          }
          else if (hashCode == PDM_HASH)
          {
            return AwsMemberBusinessTitle::PDM;
          }
          else if (hashCode == PSM_HASH)
          {
            return AwsMemberBusinessTitle::PSM;
          }
          else if (hashCode == ISVSM_HASH)
          {
            return AwsMemberBusinessTitle::ISVSM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsMemberBusinessTitle>(hashCode);
          }

          return AwsMemberBusinessTitle::NOT_SET;
        }

        Aws::String GetNameForAwsMemberBusinessTitle(AwsMemberBusinessTitle enumValue)
        {
          switch(enumValue)
          {
          case AwsMemberBusinessTitle::NOT_SET:
            return {};
          case AwsMemberBusinessTitle::AWSSalesRep:
            return "AWSSalesRep";
          case AwsMemberBusinessTitle::AWSAccountOwner:
            return "AWSAccountOwner";
          case AwsMemberBusinessTitle::WWPSPDM:
            return "WWPSPDM";
          case AwsMemberBusinessTitle::PDM:
            return "PDM";
          case AwsMemberBusinessTitle::PSM:
            return "PSM";
          case AwsMemberBusinessTitle::ISVSM:
            return "ISVSM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsMemberBusinessTitleMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
