/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/PowerConnector.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace PowerConnectorMapper
      {

        static constexpr uint32_t L6_30P_HASH = ConstExprHashingUtils::HashString("L6_30P");
        static constexpr uint32_t IEC309_HASH = ConstExprHashingUtils::HashString("IEC309");
        static constexpr uint32_t AH530P7W_HASH = ConstExprHashingUtils::HashString("AH530P7W");
        static constexpr uint32_t AH532P6W_HASH = ConstExprHashingUtils::HashString("AH532P6W");


        PowerConnector GetPowerConnectorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == L6_30P_HASH)
          {
            return PowerConnector::L6_30P;
          }
          else if (hashCode == IEC309_HASH)
          {
            return PowerConnector::IEC309;
          }
          else if (hashCode == AH530P7W_HASH)
          {
            return PowerConnector::AH530P7W;
          }
          else if (hashCode == AH532P6W_HASH)
          {
            return PowerConnector::AH532P6W;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PowerConnector>(hashCode);
          }

          return PowerConnector::NOT_SET;
        }

        Aws::String GetNameForPowerConnector(PowerConnector enumValue)
        {
          switch(enumValue)
          {
          case PowerConnector::NOT_SET:
            return {};
          case PowerConnector::L6_30P:
            return "L6_30P";
          case PowerConnector::IEC309:
            return "IEC309";
          case PowerConnector::AH530P7W:
            return "AH530P7W";
          case PowerConnector::AH532P6W:
            return "AH532P6W";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PowerConnectorMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
