/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NielsenWatermarksDistributionTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace NielsenWatermarksDistributionTypesMapper
      {

        static const int FINAL_DISTRIBUTOR_HASH = HashingUtils::HashString("FINAL_DISTRIBUTOR");
        static const int PROGRAM_CONTENT_HASH = HashingUtils::HashString("PROGRAM_CONTENT");


        NielsenWatermarksDistributionTypes GetNielsenWatermarksDistributionTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINAL_DISTRIBUTOR_HASH)
          {
            return NielsenWatermarksDistributionTypes::FINAL_DISTRIBUTOR;
          }
          else if (hashCode == PROGRAM_CONTENT_HASH)
          {
            return NielsenWatermarksDistributionTypes::PROGRAM_CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NielsenWatermarksDistributionTypes>(hashCode);
          }

          return NielsenWatermarksDistributionTypes::NOT_SET;
        }

        Aws::String GetNameForNielsenWatermarksDistributionTypes(NielsenWatermarksDistributionTypes enumValue)
        {
          switch(enumValue)
          {
          case NielsenWatermarksDistributionTypes::NOT_SET:
            return {};
          case NielsenWatermarksDistributionTypes::FINAL_DISTRIBUTOR:
            return "FINAL_DISTRIBUTOR";
          case NielsenWatermarksDistributionTypes::PROGRAM_CONTENT:
            return "PROGRAM_CONTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NielsenWatermarksDistributionTypesMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
