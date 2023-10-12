/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ConnectorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace ConnectorStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ConnectorStatus GetConnectorStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ConnectorStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ConnectorStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConnectorStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConnectorStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorStatus>(hashCode);
          }

          return ConnectorStatus::NOT_SET;
        }

        Aws::String GetNameForConnectorStatus(ConnectorStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectorStatus::NOT_SET:
            return {};
          case ConnectorStatus::CREATING:
            return "CREATING";
          case ConnectorStatus::ACTIVE:
            return "ACTIVE";
          case ConnectorStatus::DELETING:
            return "DELETING";
          case ConnectorStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorStatusMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
