/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ReservedNodeExchangeActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ReservedNodeExchangeActionTypeMapper
      {

        static constexpr uint32_t restore_cluster_HASH = ConstExprHashingUtils::HashString("restore-cluster");
        static constexpr uint32_t resize_cluster_HASH = ConstExprHashingUtils::HashString("resize-cluster");


        ReservedNodeExchangeActionType GetReservedNodeExchangeActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == restore_cluster_HASH)
          {
            return ReservedNodeExchangeActionType::restore_cluster;
          }
          else if (hashCode == resize_cluster_HASH)
          {
            return ReservedNodeExchangeActionType::resize_cluster;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedNodeExchangeActionType>(hashCode);
          }

          return ReservedNodeExchangeActionType::NOT_SET;
        }

        Aws::String GetNameForReservedNodeExchangeActionType(ReservedNodeExchangeActionType enumValue)
        {
          switch(enumValue)
          {
          case ReservedNodeExchangeActionType::NOT_SET:
            return {};
          case ReservedNodeExchangeActionType::restore_cluster:
            return "restore-cluster";
          case ReservedNodeExchangeActionType::resize_cluster:
            return "resize-cluster";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservedNodeExchangeActionTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
