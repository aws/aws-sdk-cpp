/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FindingHistoryUpdateSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace FindingHistoryUpdateSourceTypeMapper
      {

        static const int BATCH_UPDATE_FINDINGS_HASH = HashingUtils::HashString("BATCH_UPDATE_FINDINGS");
        static const int BATCH_IMPORT_FINDINGS_HASH = HashingUtils::HashString("BATCH_IMPORT_FINDINGS");


        FindingHistoryUpdateSourceType GetFindingHistoryUpdateSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BATCH_UPDATE_FINDINGS_HASH)
          {
            return FindingHistoryUpdateSourceType::BATCH_UPDATE_FINDINGS;
          }
          else if (hashCode == BATCH_IMPORT_FINDINGS_HASH)
          {
            return FindingHistoryUpdateSourceType::BATCH_IMPORT_FINDINGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingHistoryUpdateSourceType>(hashCode);
          }

          return FindingHistoryUpdateSourceType::NOT_SET;
        }

        Aws::String GetNameForFindingHistoryUpdateSourceType(FindingHistoryUpdateSourceType enumValue)
        {
          switch(enumValue)
          {
          case FindingHistoryUpdateSourceType::NOT_SET:
            return {};
          case FindingHistoryUpdateSourceType::BATCH_UPDATE_FINDINGS:
            return "BATCH_UPDATE_FINDINGS";
          case FindingHistoryUpdateSourceType::BATCH_IMPORT_FINDINGS:
            return "BATCH_IMPORT_FINDINGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingHistoryUpdateSourceTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
