/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/model/ConnectorStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorScep
  {
    namespace Model
    {
      namespace ConnectorStatusReasonMapper
      {

        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int PRIVATECA_ACCESS_DENIED_HASH = HashingUtils::HashString("PRIVATECA_ACCESS_DENIED");
        static const int PRIVATECA_INVALID_STATE_HASH = HashingUtils::HashString("PRIVATECA_INVALID_STATE");
        static const int PRIVATECA_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("PRIVATECA_RESOURCE_NOT_FOUND");


        ConnectorStatusReason GetConnectorStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return ConnectorStatusReason::INTERNAL_FAILURE;
          }
          else if (hashCode == PRIVATECA_ACCESS_DENIED_HASH)
          {
            return ConnectorStatusReason::PRIVATECA_ACCESS_DENIED;
          }
          else if (hashCode == PRIVATECA_INVALID_STATE_HASH)
          {
            return ConnectorStatusReason::PRIVATECA_INVALID_STATE;
          }
          else if (hashCode == PRIVATECA_RESOURCE_NOT_FOUND_HASH)
          {
            return ConnectorStatusReason::PRIVATECA_RESOURCE_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorStatusReason>(hashCode);
          }

          return ConnectorStatusReason::NOT_SET;
        }

        Aws::String GetNameForConnectorStatusReason(ConnectorStatusReason enumValue)
        {
          switch(enumValue)
          {
          case ConnectorStatusReason::NOT_SET:
            return {};
          case ConnectorStatusReason::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case ConnectorStatusReason::PRIVATECA_ACCESS_DENIED:
            return "PRIVATECA_ACCESS_DENIED";
          case ConnectorStatusReason::PRIVATECA_INVALID_STATE:
            return "PRIVATECA_INVALID_STATE";
          case ConnectorStatusReason::PRIVATECA_RESOURCE_NOT_FOUND:
            return "PRIVATECA_RESOURCE_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorStatusReasonMapper
    } // namespace Model
  } // namespace PcaConnectorScep
} // namespace Aws
