/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/FineGrainedAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace FineGrainedActionMapper
      {

        static const int DescribeDimensionKeys_HASH = HashingUtils::HashString("DescribeDimensionKeys");
        static const int GetDimensionKeyDetails_HASH = HashingUtils::HashString("GetDimensionKeyDetails");
        static const int GetResourceMetrics_HASH = HashingUtils::HashString("GetResourceMetrics");


        FineGrainedAction GetFineGrainedActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DescribeDimensionKeys_HASH)
          {
            return FineGrainedAction::DescribeDimensionKeys;
          }
          else if (hashCode == GetDimensionKeyDetails_HASH)
          {
            return FineGrainedAction::GetDimensionKeyDetails;
          }
          else if (hashCode == GetResourceMetrics_HASH)
          {
            return FineGrainedAction::GetResourceMetrics;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FineGrainedAction>(hashCode);
          }

          return FineGrainedAction::NOT_SET;
        }

        Aws::String GetNameForFineGrainedAction(FineGrainedAction enumValue)
        {
          switch(enumValue)
          {
          case FineGrainedAction::NOT_SET:
            return {};
          case FineGrainedAction::DescribeDimensionKeys:
            return "DescribeDimensionKeys";
          case FineGrainedAction::GetDimensionKeyDetails:
            return "GetDimensionKeyDetails";
          case FineGrainedAction::GetResourceMetrics:
            return "GetResourceMetrics";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FineGrainedActionMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws
