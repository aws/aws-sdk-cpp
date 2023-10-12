/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ConnectorCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ConnectorCapabilityMapper
      {

        static constexpr uint32_t VSPHERE_HASH = ConstExprHashingUtils::HashString("VSPHERE");
        static constexpr uint32_t SCVMM_HASH = ConstExprHashingUtils::HashString("SCVMM");
        static constexpr uint32_t HYPERV_MANAGER_HASH = ConstExprHashingUtils::HashString("HYPERV-MANAGER");
        static constexpr uint32_t SNAPSHOT_BATCHING_HASH = ConstExprHashingUtils::HashString("SNAPSHOT_BATCHING");
        static constexpr uint32_t SMS_OPTIMIZED_HASH = ConstExprHashingUtils::HashString("SMS_OPTIMIZED");


        ConnectorCapability GetConnectorCapabilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VSPHERE_HASH)
          {
            return ConnectorCapability::VSPHERE;
          }
          else if (hashCode == SCVMM_HASH)
          {
            return ConnectorCapability::SCVMM;
          }
          else if (hashCode == HYPERV_MANAGER_HASH)
          {
            return ConnectorCapability::HYPERV_MANAGER;
          }
          else if (hashCode == SNAPSHOT_BATCHING_HASH)
          {
            return ConnectorCapability::SNAPSHOT_BATCHING;
          }
          else if (hashCode == SMS_OPTIMIZED_HASH)
          {
            return ConnectorCapability::SMS_OPTIMIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorCapability>(hashCode);
          }

          return ConnectorCapability::NOT_SET;
        }

        Aws::String GetNameForConnectorCapability(ConnectorCapability enumValue)
        {
          switch(enumValue)
          {
          case ConnectorCapability::NOT_SET:
            return {};
          case ConnectorCapability::VSPHERE:
            return "VSPHERE";
          case ConnectorCapability::SCVMM:
            return "SCVMM";
          case ConnectorCapability::HYPERV_MANAGER:
            return "HYPERV-MANAGER";
          case ConnectorCapability::SNAPSHOT_BATCHING:
            return "SNAPSHOT_BATCHING";
          case ConnectorCapability::SMS_OPTIMIZED:
            return "SMS_OPTIMIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorCapabilityMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
