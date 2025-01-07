/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortQuotaBy.h>
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
      namespace SortQuotaByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int ClusterArn_HASH = HashingUtils::HashString("ClusterArn");


        SortQuotaBy GetSortQuotaByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortQuotaBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortQuotaBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return SortQuotaBy::Status;
          }
          else if (hashCode == ClusterArn_HASH)
          {
            return SortQuotaBy::ClusterArn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortQuotaBy>(hashCode);
          }

          return SortQuotaBy::NOT_SET;
        }

        Aws::String GetNameForSortQuotaBy(SortQuotaBy enumValue)
        {
          switch(enumValue)
          {
          case SortQuotaBy::NOT_SET:
            return {};
          case SortQuotaBy::Name:
            return "Name";
          case SortQuotaBy::CreationTime:
            return "CreationTime";
          case SortQuotaBy::Status:
            return "Status";
          case SortQuotaBy::ClusterArn:
            return "ClusterArn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortQuotaByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
