/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineStatus.h>
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
      namespace PipelineStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        PipelineStatus GetPipelineStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return PipelineStatus::Active;
          }
          else if (hashCode == Deleting_HASH)
          {
            return PipelineStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineStatus>(hashCode);
          }

          return PipelineStatus::NOT_SET;
        }

        Aws::String GetNameForPipelineStatus(PipelineStatus enumValue)
        {
          switch(enumValue)
          {
          case PipelineStatus::NOT_SET:
            return {};
          case PipelineStatus::Active:
            return "Active";
          case PipelineStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipelineStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
