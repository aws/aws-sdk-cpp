/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/DestinationCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFlowMonitor
  {
    namespace Model
    {
      namespace DestinationCategoryMapper
      {

        static const int INTRA_AZ_HASH = HashingUtils::HashString("INTRA_AZ");
        static const int INTER_AZ_HASH = HashingUtils::HashString("INTER_AZ");
        static const int INTER_VPC_HASH = HashingUtils::HashString("INTER_VPC");
        static const int UNCLASSIFIED_HASH = HashingUtils::HashString("UNCLASSIFIED");
        static const int AMAZON_S3_HASH = HashingUtils::HashString("AMAZON_S3");
        static const int AMAZON_DYNAMODB_HASH = HashingUtils::HashString("AMAZON_DYNAMODB");
        static const int INTER_REGION_HASH = HashingUtils::HashString("INTER_REGION");


        DestinationCategory GetDestinationCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTRA_AZ_HASH)
          {
            return DestinationCategory::INTRA_AZ;
          }
          else if (hashCode == INTER_AZ_HASH)
          {
            return DestinationCategory::INTER_AZ;
          }
          else if (hashCode == INTER_VPC_HASH)
          {
            return DestinationCategory::INTER_VPC;
          }
          else if (hashCode == UNCLASSIFIED_HASH)
          {
            return DestinationCategory::UNCLASSIFIED;
          }
          else if (hashCode == AMAZON_S3_HASH)
          {
            return DestinationCategory::AMAZON_S3;
          }
          else if (hashCode == AMAZON_DYNAMODB_HASH)
          {
            return DestinationCategory::AMAZON_DYNAMODB;
          }
          else if (hashCode == INTER_REGION_HASH)
          {
            return DestinationCategory::INTER_REGION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationCategory>(hashCode);
          }

          return DestinationCategory::NOT_SET;
        }

        Aws::String GetNameForDestinationCategory(DestinationCategory enumValue)
        {
          switch(enumValue)
          {
          case DestinationCategory::NOT_SET:
            return {};
          case DestinationCategory::INTRA_AZ:
            return "INTRA_AZ";
          case DestinationCategory::INTER_AZ:
            return "INTER_AZ";
          case DestinationCategory::INTER_VPC:
            return "INTER_VPC";
          case DestinationCategory::UNCLASSIFIED:
            return "UNCLASSIFIED";
          case DestinationCategory::AMAZON_S3:
            return "AMAZON_S3";
          case DestinationCategory::AMAZON_DYNAMODB:
            return "AMAZON_DYNAMODB";
          case DestinationCategory::INTER_REGION:
            return "INTER_REGION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationCategoryMapper
    } // namespace Model
  } // namespace NetworkFlowMonitor
} // namespace Aws
