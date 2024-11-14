/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Stage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace StageMapper
      {

        static const int Prospect_HASH = HashingUtils::HashString("Prospect");
        static const int Qualified_HASH = HashingUtils::HashString("Qualified");
        static const int Technical_Validation_HASH = HashingUtils::HashString("Technical Validation");
        static const int Business_Validation_HASH = HashingUtils::HashString("Business Validation");
        static const int Committed_HASH = HashingUtils::HashString("Committed");
        static const int Launched_HASH = HashingUtils::HashString("Launched");
        static const int Closed_Lost_HASH = HashingUtils::HashString("Closed Lost");


        Stage GetStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Prospect_HASH)
          {
            return Stage::Prospect;
          }
          else if (hashCode == Qualified_HASH)
          {
            return Stage::Qualified;
          }
          else if (hashCode == Technical_Validation_HASH)
          {
            return Stage::Technical_Validation;
          }
          else if (hashCode == Business_Validation_HASH)
          {
            return Stage::Business_Validation;
          }
          else if (hashCode == Committed_HASH)
          {
            return Stage::Committed;
          }
          else if (hashCode == Launched_HASH)
          {
            return Stage::Launched;
          }
          else if (hashCode == Closed_Lost_HASH)
          {
            return Stage::Closed_Lost;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Stage>(hashCode);
          }

          return Stage::NOT_SET;
        }

        Aws::String GetNameForStage(Stage enumValue)
        {
          switch(enumValue)
          {
          case Stage::NOT_SET:
            return {};
          case Stage::Prospect:
            return "Prospect";
          case Stage::Qualified:
            return "Qualified";
          case Stage::Technical_Validation:
            return "Technical Validation";
          case Stage::Business_Validation:
            return "Business Validation";
          case Stage::Committed:
            return "Committed";
          case Stage::Launched:
            return "Launched";
          case Stage::Closed_Lost:
            return "Closed Lost";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StageMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
