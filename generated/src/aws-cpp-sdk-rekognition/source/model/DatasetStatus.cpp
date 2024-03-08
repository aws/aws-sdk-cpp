/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace DatasetStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");


        DatasetStatus GetDatasetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return DatasetStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return DatasetStatus::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return DatasetStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return DatasetStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return DatasetStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return DatasetStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return DatasetStatus::DELETE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetStatus>(hashCode);
          }

          return DatasetStatus::NOT_SET;
        }

        Aws::String GetNameForDatasetStatus(DatasetStatus enumValue)
        {
          switch(enumValue)
          {
          case DatasetStatus::NOT_SET:
            return {};
          case DatasetStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case DatasetStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case DatasetStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case DatasetStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case DatasetStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case DatasetStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case DatasetStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetStatusMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
