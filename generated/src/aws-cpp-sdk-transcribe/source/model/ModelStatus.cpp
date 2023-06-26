/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ModelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace ModelStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        ModelStatus GetModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ModelStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ModelStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ModelStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelStatus>(hashCode);
          }

          return ModelStatus::NOT_SET;
        }

        Aws::String GetNameForModelStatus(ModelStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ModelStatus::FAILED:
            return "FAILED";
          case ModelStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelStatusMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
