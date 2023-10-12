/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ReservedNodeExchangeStatusType.h>
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
      namespace ReservedNodeExchangeStatusTypeMapper
      {

        static constexpr uint32_t REQUESTED_HASH = ConstExprHashingUtils::HashString("REQUESTED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t RETRYING_HASH = ConstExprHashingUtils::HashString("RETRYING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ReservedNodeExchangeStatusType GetReservedNodeExchangeStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUESTED_HASH)
          {
            return ReservedNodeExchangeStatusType::REQUESTED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ReservedNodeExchangeStatusType::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReservedNodeExchangeStatusType::IN_PROGRESS;
          }
          else if (hashCode == RETRYING_HASH)
          {
            return ReservedNodeExchangeStatusType::RETRYING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ReservedNodeExchangeStatusType::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReservedNodeExchangeStatusType::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedNodeExchangeStatusType>(hashCode);
          }

          return ReservedNodeExchangeStatusType::NOT_SET;
        }

        Aws::String GetNameForReservedNodeExchangeStatusType(ReservedNodeExchangeStatusType enumValue)
        {
          switch(enumValue)
          {
          case ReservedNodeExchangeStatusType::NOT_SET:
            return {};
          case ReservedNodeExchangeStatusType::REQUESTED:
            return "REQUESTED";
          case ReservedNodeExchangeStatusType::PENDING:
            return "PENDING";
          case ReservedNodeExchangeStatusType::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReservedNodeExchangeStatusType::RETRYING:
            return "RETRYING";
          case ReservedNodeExchangeStatusType::SUCCEEDED:
            return "SUCCEEDED";
          case ReservedNodeExchangeStatusType::FAILED:
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

      } // namespace ReservedNodeExchangeStatusTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
