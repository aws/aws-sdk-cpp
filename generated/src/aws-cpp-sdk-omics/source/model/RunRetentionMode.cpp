/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunRetentionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace RunRetentionModeMapper
      {

        static const int RETAIN_HASH = HashingUtils::HashString("RETAIN");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");


        RunRetentionMode GetRunRetentionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETAIN_HASH)
          {
            return RunRetentionMode::RETAIN;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return RunRetentionMode::REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunRetentionMode>(hashCode);
          }

          return RunRetentionMode::NOT_SET;
        }

        Aws::String GetNameForRunRetentionMode(RunRetentionMode enumValue)
        {
          switch(enumValue)
          {
          case RunRetentionMode::NOT_SET:
            return {};
          case RunRetentionMode::RETAIN:
            return "RETAIN";
          case RunRetentionMode::REMOVE:
            return "REMOVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunRetentionModeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
