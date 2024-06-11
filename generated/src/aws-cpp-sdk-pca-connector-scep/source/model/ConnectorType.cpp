/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/model/ConnectorType.h>
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
      namespace ConnectorTypeMapper
      {

        static const int GENERAL_PURPOSE_HASH = HashingUtils::HashString("GENERAL_PURPOSE");
        static const int INTUNE_HASH = HashingUtils::HashString("INTUNE");


        ConnectorType GetConnectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERAL_PURPOSE_HASH)
          {
            return ConnectorType::GENERAL_PURPOSE;
          }
          else if (hashCode == INTUNE_HASH)
          {
            return ConnectorType::INTUNE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorType>(hashCode);
          }

          return ConnectorType::NOT_SET;
        }

        Aws::String GetNameForConnectorType(ConnectorType enumValue)
        {
          switch(enumValue)
          {
          case ConnectorType::NOT_SET:
            return {};
          case ConnectorType::GENERAL_PURPOSE:
            return "GENERAL_PURPOSE";
          case ConnectorType::INTUNE:
            return "INTUNE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorTypeMapper
    } // namespace Model
  } // namespace PcaConnectorScep
} // namespace Aws
