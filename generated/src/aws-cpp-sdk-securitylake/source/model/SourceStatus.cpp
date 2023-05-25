/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace SourceStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        SourceStatus GetSourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return SourceStatus::ACTIVE;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return SourceStatus::DEACTIVATED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SourceStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceStatus>(hashCode);
          }

          return SourceStatus::NOT_SET;
        }

        Aws::String GetNameForSourceStatus(SourceStatus enumValue)
        {
          switch(enumValue)
          {
          case SourceStatus::ACTIVE:
            return "ACTIVE";
          case SourceStatus::DEACTIVATED:
            return "DEACTIVATED";
          case SourceStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceStatusMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
