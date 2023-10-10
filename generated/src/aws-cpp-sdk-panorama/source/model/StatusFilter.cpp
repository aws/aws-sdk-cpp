/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/StatusFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace StatusFilterMapper
      {

        static const int DEPLOYMENT_SUCCEEDED_HASH = HashingUtils::HashString("DEPLOYMENT_SUCCEEDED");
        static const int DEPLOYMENT_ERROR_HASH = HashingUtils::HashString("DEPLOYMENT_ERROR");
        static const int REMOVAL_SUCCEEDED_HASH = HashingUtils::HashString("REMOVAL_SUCCEEDED");
        static const int REMOVAL_FAILED_HASH = HashingUtils::HashString("REMOVAL_FAILED");
        static const int PROCESSING_DEPLOYMENT_HASH = HashingUtils::HashString("PROCESSING_DEPLOYMENT");
        static const int PROCESSING_REMOVAL_HASH = HashingUtils::HashString("PROCESSING_REMOVAL");
        static const int DEPLOYMENT_FAILED_HASH = HashingUtils::HashString("DEPLOYMENT_FAILED");


        StatusFilter GetStatusFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPLOYMENT_SUCCEEDED_HASH)
          {
            return StatusFilter::DEPLOYMENT_SUCCEEDED;
          }
          else if (hashCode == DEPLOYMENT_ERROR_HASH)
          {
            return StatusFilter::DEPLOYMENT_ERROR;
          }
          else if (hashCode == REMOVAL_SUCCEEDED_HASH)
          {
            return StatusFilter::REMOVAL_SUCCEEDED;
          }
          else if (hashCode == REMOVAL_FAILED_HASH)
          {
            return StatusFilter::REMOVAL_FAILED;
          }
          else if (hashCode == PROCESSING_DEPLOYMENT_HASH)
          {
            return StatusFilter::PROCESSING_DEPLOYMENT;
          }
          else if (hashCode == PROCESSING_REMOVAL_HASH)
          {
            return StatusFilter::PROCESSING_REMOVAL;
          }
          else if (hashCode == DEPLOYMENT_FAILED_HASH)
          {
            return StatusFilter::DEPLOYMENT_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusFilter>(hashCode);
          }

          return StatusFilter::NOT_SET;
        }

        Aws::String GetNameForStatusFilter(StatusFilter enumValue)
        {
          switch(enumValue)
          {
          case StatusFilter::NOT_SET:
            return {};
          case StatusFilter::DEPLOYMENT_SUCCEEDED:
            return "DEPLOYMENT_SUCCEEDED";
          case StatusFilter::DEPLOYMENT_ERROR:
            return "DEPLOYMENT_ERROR";
          case StatusFilter::REMOVAL_SUCCEEDED:
            return "REMOVAL_SUCCEEDED";
          case StatusFilter::REMOVAL_FAILED:
            return "REMOVAL_FAILED";
          case StatusFilter::PROCESSING_DEPLOYMENT:
            return "PROCESSING_DEPLOYMENT";
          case StatusFilter::PROCESSING_REMOVAL:
            return "PROCESSING_REMOVAL";
          case StatusFilter::DEPLOYMENT_FAILED:
            return "DEPLOYMENT_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusFilterMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
