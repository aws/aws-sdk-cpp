/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/CheckStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace CheckStatusMapper
      {

        static constexpr uint32_t OKAY_HASH = ConstExprHashingUtils::HashString("OKAY");
        static constexpr uint32_t WARNING_HASH = ConstExprHashingUtils::HashString("WARNING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("NOT_AVAILABLE");
        static constexpr uint32_t FETCH_FAILED_HASH = ConstExprHashingUtils::HashString("FETCH_FAILED");


        CheckStatus GetCheckStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OKAY_HASH)
          {
            return CheckStatus::OKAY;
          }
          else if (hashCode == WARNING_HASH)
          {
            return CheckStatus::WARNING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return CheckStatus::ERROR_;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return CheckStatus::NOT_AVAILABLE;
          }
          else if (hashCode == FETCH_FAILED_HASH)
          {
            return CheckStatus::FETCH_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CheckStatus>(hashCode);
          }

          return CheckStatus::NOT_SET;
        }

        Aws::String GetNameForCheckStatus(CheckStatus enumValue)
        {
          switch(enumValue)
          {
          case CheckStatus::NOT_SET:
            return {};
          case CheckStatus::OKAY:
            return "OKAY";
          case CheckStatus::WARNING:
            return "WARNING";
          case CheckStatus::ERROR_:
            return "ERROR";
          case CheckStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          case CheckStatus::FETCH_FAILED:
            return "FETCH_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CheckStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
