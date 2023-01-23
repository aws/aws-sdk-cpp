/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnalysisFilterAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AnalysisFilterAttributeMapper
      {

        static const int QUICKSIGHT_USER_HASH = HashingUtils::HashString("QUICKSIGHT_USER");
        static const int QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_VIEWER_OR_OWNER");
        static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");
        static const int QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_OWNER");
        static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
        static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
        static const int ANALYSIS_NAME_HASH = HashingUtils::HashString("ANALYSIS_NAME");


        AnalysisFilterAttribute GetAnalysisFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUICKSIGHT_USER_HASH)
          {
            return AnalysisFilterAttribute::QUICKSIGHT_USER;
          }
          else if (hashCode == QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return AnalysisFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return AnalysisFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == QUICKSIGHT_OWNER_HASH)
          {
            return AnalysisFilterAttribute::QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH)
          {
            return AnalysisFilterAttribute::DIRECT_QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH)
          {
            return AnalysisFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER;
          }
          else if (hashCode == ANALYSIS_NAME_HASH)
          {
            return AnalysisFilterAttribute::ANALYSIS_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisFilterAttribute>(hashCode);
          }

          return AnalysisFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForAnalysisFilterAttribute(AnalysisFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case AnalysisFilterAttribute::QUICKSIGHT_USER:
            return "QUICKSIGHT_USER";
          case AnalysisFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER:
            return "QUICKSIGHT_VIEWER_OR_OWNER";
          case AnalysisFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
            return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
          case AnalysisFilterAttribute::QUICKSIGHT_OWNER:
            return "QUICKSIGHT_OWNER";
          case AnalysisFilterAttribute::DIRECT_QUICKSIGHT_OWNER:
            return "DIRECT_QUICKSIGHT_OWNER";
          case AnalysisFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER:
            return "DIRECT_QUICKSIGHT_SOLE_OWNER";
          case AnalysisFilterAttribute::ANALYSIS_NAME:
            return "ANALYSIS_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisFilterAttributeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
