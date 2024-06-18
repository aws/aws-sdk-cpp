/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortTrackingServerBy.h>
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
      namespace SortTrackingServerByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        SortTrackingServerBy GetSortTrackingServerByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortTrackingServerBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortTrackingServerBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return SortTrackingServerBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortTrackingServerBy>(hashCode);
          }

          return SortTrackingServerBy::NOT_SET;
        }

        Aws::String GetNameForSortTrackingServerBy(SortTrackingServerBy enumValue)
        {
          switch(enumValue)
          {
          case SortTrackingServerBy::NOT_SET:
            return {};
          case SortTrackingServerBy::Name:
            return "Name";
          case SortTrackingServerBy::CreationTime:
            return "CreationTime";
          case SortTrackingServerBy::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortTrackingServerByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
