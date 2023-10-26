/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortAssociationsBy.h>
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
      namespace SortAssociationsByMapper
      {

        static const int SourceArn_HASH = HashingUtils::HashString("SourceArn");
        static const int DestinationArn_HASH = HashingUtils::HashString("DestinationArn");
        static const int SourceType_HASH = HashingUtils::HashString("SourceType");
        static const int DestinationType_HASH = HashingUtils::HashString("DestinationType");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortAssociationsBy GetSortAssociationsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SourceArn_HASH)
          {
            return SortAssociationsBy::SourceArn;
          }
          else if (hashCode == DestinationArn_HASH)
          {
            return SortAssociationsBy::DestinationArn;
          }
          else if (hashCode == SourceType_HASH)
          {
            return SortAssociationsBy::SourceType;
          }
          else if (hashCode == DestinationType_HASH)
          {
            return SortAssociationsBy::DestinationType;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortAssociationsBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortAssociationsBy>(hashCode);
          }

          return SortAssociationsBy::NOT_SET;
        }

        Aws::String GetNameForSortAssociationsBy(SortAssociationsBy enumValue)
        {
          switch(enumValue)
          {
          case SortAssociationsBy::NOT_SET:
            return {};
          case SortAssociationsBy::SourceArn:
            return "SourceArn";
          case SortAssociationsBy::DestinationArn:
            return "DestinationArn";
          case SortAssociationsBy::SourceType:
            return "SourceType";
          case SortAssociationsBy::DestinationType:
            return "DestinationType";
          case SortAssociationsBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortAssociationsByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
