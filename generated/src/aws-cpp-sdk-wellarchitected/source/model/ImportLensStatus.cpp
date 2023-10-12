/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ImportLensStatus.h>
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
      namespace ImportLensStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        ImportLensStatus GetImportLensStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ImportLensStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ImportLensStatus::COMPLETE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ImportLensStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportLensStatus>(hashCode);
          }

          return ImportLensStatus::NOT_SET;
        }

        Aws::String GetNameForImportLensStatus(ImportLensStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportLensStatus::NOT_SET:
            return {};
          case ImportLensStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ImportLensStatus::COMPLETE:
            return "COMPLETE";
          case ImportLensStatus::ERROR_:
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

      } // namespace ImportLensStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
