/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ReceiverResponsibility.h>
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
      namespace ReceiverResponsibilityMapper
      {

        static const int Distributor_HASH = HashingUtils::HashString("Distributor");
        static const int Reseller_HASH = HashingUtils::HashString("Reseller");
        static const int Hardware_Partner_HASH = HashingUtils::HashString("Hardware Partner");
        static const int Managed_Service_Provider_HASH = HashingUtils::HashString("Managed Service Provider");
        static const int Software_Partner_HASH = HashingUtils::HashString("Software Partner");
        static const int Services_Partner_HASH = HashingUtils::HashString("Services Partner");
        static const int Training_Partner_HASH = HashingUtils::HashString("Training Partner");
        static const int Co_Sell_Facilitator_HASH = HashingUtils::HashString("Co-Sell Facilitator");
        static const int Facilitator_HASH = HashingUtils::HashString("Facilitator");


        ReceiverResponsibility GetReceiverResponsibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Distributor_HASH)
          {
            return ReceiverResponsibility::Distributor;
          }
          else if (hashCode == Reseller_HASH)
          {
            return ReceiverResponsibility::Reseller;
          }
          else if (hashCode == Hardware_Partner_HASH)
          {
            return ReceiverResponsibility::Hardware_Partner;
          }
          else if (hashCode == Managed_Service_Provider_HASH)
          {
            return ReceiverResponsibility::Managed_Service_Provider;
          }
          else if (hashCode == Software_Partner_HASH)
          {
            return ReceiverResponsibility::Software_Partner;
          }
          else if (hashCode == Services_Partner_HASH)
          {
            return ReceiverResponsibility::Services_Partner;
          }
          else if (hashCode == Training_Partner_HASH)
          {
            return ReceiverResponsibility::Training_Partner;
          }
          else if (hashCode == Co_Sell_Facilitator_HASH)
          {
            return ReceiverResponsibility::Co_Sell_Facilitator;
          }
          else if (hashCode == Facilitator_HASH)
          {
            return ReceiverResponsibility::Facilitator;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReceiverResponsibility>(hashCode);
          }

          return ReceiverResponsibility::NOT_SET;
        }

        Aws::String GetNameForReceiverResponsibility(ReceiverResponsibility enumValue)
        {
          switch(enumValue)
          {
          case ReceiverResponsibility::NOT_SET:
            return {};
          case ReceiverResponsibility::Distributor:
            return "Distributor";
          case ReceiverResponsibility::Reseller:
            return "Reseller";
          case ReceiverResponsibility::Hardware_Partner:
            return "Hardware Partner";
          case ReceiverResponsibility::Managed_Service_Provider:
            return "Managed Service Provider";
          case ReceiverResponsibility::Software_Partner:
            return "Software Partner";
          case ReceiverResponsibility::Services_Partner:
            return "Services Partner";
          case ReceiverResponsibility::Training_Partner:
            return "Training Partner";
          case ReceiverResponsibility::Co_Sell_Facilitator:
            return "Co-Sell Facilitator";
          case ReceiverResponsibility::Facilitator:
            return "Facilitator";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReceiverResponsibilityMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
