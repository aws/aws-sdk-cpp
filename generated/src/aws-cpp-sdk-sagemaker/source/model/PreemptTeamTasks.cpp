/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PreemptTeamTasks.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace PreemptTeamTasksMapper
      {

        static const int Never_HASH = HashingUtils::HashString("Never");
        static const int LowerPriority_HASH = HashingUtils::HashString("LowerPriority");


        PreemptTeamTasks GetPreemptTeamTasksForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Never_HASH)
          {
            return PreemptTeamTasks::Never;
          }
          else if (hashCode == LowerPriority_HASH)
          {
            return PreemptTeamTasks::LowerPriority;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreemptTeamTasks>(hashCode);
          }

          return PreemptTeamTasks::NOT_SET;
        }

        Aws::String GetNameForPreemptTeamTasks(PreemptTeamTasks enumValue)
        {
          switch(enumValue)
          {
          case PreemptTeamTasks::NOT_SET:
            return {};
          case PreemptTeamTasks::Never:
            return "Never";
          case PreemptTeamTasks::LowerPriority:
            return "LowerPriority";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreemptTeamTasksMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
