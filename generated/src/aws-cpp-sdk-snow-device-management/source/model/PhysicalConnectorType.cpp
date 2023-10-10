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

        static const int RJ45_HASH = HashingUtils::HashString("RJ45");
        static const int SFP_PLUS_HASH = HashingUtils::HashString("SFP_PLUS");
        static const int QSFP_HASH = HashingUtils::HashString("QSFP");
        static const int RJ45_2_HASH = HashingUtils::HashString("RJ45_2");
        static const int WIFI_HASH = HashingUtils::HashString("WIFI");


        PhysicalConnectorType GetPhysicalConnectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
