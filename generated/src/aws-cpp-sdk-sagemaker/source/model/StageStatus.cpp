/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StageStatus.h>
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
      namespace StageStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int READYTODEPLOY_HASH = HashingUtils::HashString("READYTODEPLOY");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int INPROGRESS_HASH = HashingUtils::HashString("INPROGRESS");
        static const int DEPLOYED_HASH = HashingUtils::HashString("DEPLOYED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        StageStatus GetStageStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return StageStatus::CREATING;
          }
          else if (hashCode == READYTODEPLOY_HASH)
          {
            return StageStatus::READYTODEPLOY;
          }
          else if (hashCode == STARTING_HASH)
          {
            return StageStatus::STARTING;
          }
          else if (hashCode == INPROGRESS_HASH)
          {
            return StageStatus::INPROGRESS;
          }
          else if (hashCode == DEPLOYED_HASH)
          {
            return StageStatus::DEPLOYED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StageStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return StageStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return StageStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StageStatus>(hashCode);
          }

          return StageStatus::NOT_SET;
        }

        Aws::String GetNameForStageStatus(StageStatus enumValue)
        {
          switch(enumValue)
          {
          case StageStatus::NOT_SET:
            return {};
          case StageStatus::CREATING:
            return "CREATING";
          case StageStatus::READYTODEPLOY:
            return "READYTODEPLOY";
          case StageStatus::STARTING:
            return "STARTING";
          case StageStatus::INPROGRESS:
            return "INPROGRESS";
          case StageStatus::DEPLOYED:
            return "DEPLOYED";
          case StageStatus::FAILED:
            return "FAILED";
          case StageStatus::STOPPING:
            return "STOPPING";
          case StageStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StageStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
