/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/UpdateProgress.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace UpdateProgressMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t VERIFYING_HASH = ConstExprHashingUtils::HashString("VERIFYING");
        static constexpr uint32_t REBOOTING_HASH = ConstExprHashingUtils::HashString("REBOOTING");
        static constexpr uint32_t DOWNLOADING_HASH = ConstExprHashingUtils::HashString("DOWNLOADING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        UpdateProgress GetUpdateProgressForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return UpdateProgress::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return UpdateProgress::IN_PROGRESS;
          }
          else if (hashCode == VERIFYING_HASH)
          {
            return UpdateProgress::VERIFYING;
          }
          else if (hashCode == REBOOTING_HASH)
          {
            return UpdateProgress::REBOOTING;
          }
          else if (hashCode == DOWNLOADING_HASH)
          {
            return UpdateProgress::DOWNLOADING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return UpdateProgress::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return UpdateProgress::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateProgress>(hashCode);
          }

          return UpdateProgress::NOT_SET;
        }

        Aws::String GetNameForUpdateProgress(UpdateProgress enumValue)
        {
          switch(enumValue)
          {
          case UpdateProgress::NOT_SET:
            return {};
          case UpdateProgress::PENDING:
            return "PENDING";
          case UpdateProgress::IN_PROGRESS:
            return "IN_PROGRESS";
          case UpdateProgress::VERIFYING:
            return "VERIFYING";
          case UpdateProgress::REBOOTING:
            return "REBOOTING";
          case UpdateProgress::DOWNLOADING:
            return "DOWNLOADING";
          case UpdateProgress::COMPLETED:
            return "COMPLETED";
          case UpdateProgress::FAILED:
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

      } // namespace UpdateProgressMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
