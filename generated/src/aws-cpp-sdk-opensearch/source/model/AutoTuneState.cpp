/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AutoTuneState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace AutoTuneStateMapper
      {

        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("ENABLE_IN_PROGRESS");
        static constexpr uint32_t DISABLE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DISABLE_IN_PROGRESS");
        static constexpr uint32_t DISABLED_AND_ROLLBACK_SCHEDULED_HASH = ConstExprHashingUtils::HashString("DISABLED_AND_ROLLBACK_SCHEDULED");
        static constexpr uint32_t DISABLED_AND_ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DISABLED_AND_ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t DISABLED_AND_ROLLBACK_COMPLETE_HASH = ConstExprHashingUtils::HashString("DISABLED_AND_ROLLBACK_COMPLETE");
        static constexpr uint32_t DISABLED_AND_ROLLBACK_ERROR_HASH = ConstExprHashingUtils::HashString("DISABLED_AND_ROLLBACK_ERROR");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        AutoTuneState GetAutoTuneStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AutoTuneState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AutoTuneState::DISABLED;
          }
          else if (hashCode == ENABLE_IN_PROGRESS_HASH)
          {
            return AutoTuneState::ENABLE_IN_PROGRESS;
          }
          else if (hashCode == DISABLE_IN_PROGRESS_HASH)
          {
            return AutoTuneState::DISABLE_IN_PROGRESS;
          }
          else if (hashCode == DISABLED_AND_ROLLBACK_SCHEDULED_HASH)
          {
            return AutoTuneState::DISABLED_AND_ROLLBACK_SCHEDULED;
          }
          else if (hashCode == DISABLED_AND_ROLLBACK_IN_PROGRESS_HASH)
          {
            return AutoTuneState::DISABLED_AND_ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == DISABLED_AND_ROLLBACK_COMPLETE_HASH)
          {
            return AutoTuneState::DISABLED_AND_ROLLBACK_COMPLETE;
          }
          else if (hashCode == DISABLED_AND_ROLLBACK_ERROR_HASH)
          {
            return AutoTuneState::DISABLED_AND_ROLLBACK_ERROR;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AutoTuneState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoTuneState>(hashCode);
          }

          return AutoTuneState::NOT_SET;
        }

        Aws::String GetNameForAutoTuneState(AutoTuneState enumValue)
        {
          switch(enumValue)
          {
          case AutoTuneState::NOT_SET:
            return {};
          case AutoTuneState::ENABLED:
            return "ENABLED";
          case AutoTuneState::DISABLED:
            return "DISABLED";
          case AutoTuneState::ENABLE_IN_PROGRESS:
            return "ENABLE_IN_PROGRESS";
          case AutoTuneState::DISABLE_IN_PROGRESS:
            return "DISABLE_IN_PROGRESS";
          case AutoTuneState::DISABLED_AND_ROLLBACK_SCHEDULED:
            return "DISABLED_AND_ROLLBACK_SCHEDULED";
          case AutoTuneState::DISABLED_AND_ROLLBACK_IN_PROGRESS:
            return "DISABLED_AND_ROLLBACK_IN_PROGRESS";
          case AutoTuneState::DISABLED_AND_ROLLBACK_COMPLETE:
            return "DISABLED_AND_ROLLBACK_COMPLETE";
          case AutoTuneState::DISABLED_AND_ROLLBACK_ERROR:
            return "DISABLED_AND_ROLLBACK_ERROR";
          case AutoTuneState::ERROR_:
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

      } // namespace AutoTuneStateMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
