/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/DatabaseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace DatabaseStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t WARNING_HASH = ConstExprHashingUtils::HashString("WARNING");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        DatabaseStatus GetDatabaseStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DatabaseStatus::RUNNING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return DatabaseStatus::STARTING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DatabaseStatus::STOPPED;
          }
          else if (hashCode == WARNING_HASH)
          {
            return DatabaseStatus::WARNING;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return DatabaseStatus::UNKNOWN;
          }
          else if (hashCode == ERROR__HASH)
          {
            return DatabaseStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseStatus>(hashCode);
          }

          return DatabaseStatus::NOT_SET;
        }

        Aws::String GetNameForDatabaseStatus(DatabaseStatus enumValue)
        {
          switch(enumValue)
          {
          case DatabaseStatus::NOT_SET:
            return {};
          case DatabaseStatus::RUNNING:
            return "RUNNING";
          case DatabaseStatus::STARTING:
            return "STARTING";
          case DatabaseStatus::STOPPED:
            return "STOPPED";
          case DatabaseStatus::WARNING:
            return "WARNING";
          case DatabaseStatus::UNKNOWN:
            return "UNKNOWN";
          case DatabaseStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
