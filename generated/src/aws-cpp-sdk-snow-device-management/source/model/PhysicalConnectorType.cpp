/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/PhysicalConnectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SnowDeviceManagement
  {
    namespace Model
    {
      namespace PhysicalConnectorTypeMapper
      {

        static constexpr uint32_t RJ45_HASH = ConstExprHashingUtils::HashString("RJ45");
        static constexpr uint32_t SFP_PLUS_HASH = ConstExprHashingUtils::HashString("SFP_PLUS");
        static constexpr uint32_t QSFP_HASH = ConstExprHashingUtils::HashString("QSFP");
        static constexpr uint32_t RJ45_2_HASH = ConstExprHashingUtils::HashString("RJ45_2");
        static constexpr uint32_t WIFI_HASH = ConstExprHashingUtils::HashString("WIFI");


        PhysicalConnectorType GetPhysicalConnectorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RJ45_HASH)
          {
            return PhysicalConnectorType::RJ45;
          }
          else if (hashCode == SFP_PLUS_HASH)
          {
            return PhysicalConnectorType::SFP_PLUS;
          }
          else if (hashCode == QSFP_HASH)
          {
            return PhysicalConnectorType::QSFP;
          }
          else if (hashCode == RJ45_2_HASH)
          {
            return PhysicalConnectorType::RJ45_2;
          }
          else if (hashCode == WIFI_HASH)
          {
            return PhysicalConnectorType::WIFI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhysicalConnectorType>(hashCode);
          }

          return PhysicalConnectorType::NOT_SET;
        }

        Aws::String GetNameForPhysicalConnectorType(PhysicalConnectorType enumValue)
        {
          switch(enumValue)
          {
          case PhysicalConnectorType::NOT_SET:
            return {};
          case PhysicalConnectorType::RJ45:
            return "RJ45";
          case PhysicalConnectorType::SFP_PLUS:
            return "SFP_PLUS";
          case PhysicalConnectorType::QSFP:
            return "QSFP";
          case PhysicalConnectorType::RJ45_2:
            return "RJ45_2";
          case PhysicalConnectorType::WIFI:
            return "WIFI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhysicalConnectorTypeMapper
    } // namespace Model
  } // namespace SnowDeviceManagement
} // namespace Aws
