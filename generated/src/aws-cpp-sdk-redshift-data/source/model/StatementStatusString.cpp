/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/StatementStatusString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftDataAPIService
  {
    namespace Model
    {
      namespace StatementStatusStringMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int PICKED_HASH = HashingUtils::HashString("PICKED");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        StatementStatusString GetStatementStatusStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return StatementStatusString::SUBMITTED;
          }
          else if (hashCode == PICKED_HASH)
          {
            return StatementStatusString::PICKED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return StatementStatusString::STARTED;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return StatementStatusString::FINISHED;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return StatementStatusString::ABORTED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StatementStatusString::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatementStatusString>(hashCode);
          }

          return StatementStatusString::NOT_SET;
        }

        Aws::String GetNameForStatementStatusString(StatementStatusString enumValue)
        {
          switch(enumValue)
          {
          case StatementStatusString::NOT_SET:
            return {};
          case StatementStatusString::SUBMITTED:
            return "SUBMITTED";
          case StatementStatusString::PICKED:
            return "PICKED";
          case StatementStatusString::STARTED:
            return "STARTED";
          case StatementStatusString::FINISHED:
            return "FINISHED";
          case StatementStatusString::ABORTED:
            return "ABORTED";
          case StatementStatusString::FAILED:
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

      } // namespace StatementStatusStringMapper
    } // namespace Model
  } // namespace RedshiftDataAPIService
} // namespace Aws
