/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResiliencyScoreType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ResiliencyScoreTypeMapper
      {

        static const int Compliance_HASH = HashingUtils::HashString("Compliance");
        static const int Test_HASH = HashingUtils::HashString("Test");
        static const int Alarm_HASH = HashingUtils::HashString("Alarm");
        static const int Sop_HASH = HashingUtils::HashString("Sop");


        ResiliencyScoreType GetResiliencyScoreTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Compliance_HASH)
          {
            return ResiliencyScoreType::Compliance;
          }
          else if (hashCode == Test_HASH)
          {
            return ResiliencyScoreType::Test;
          }
          else if (hashCode == Alarm_HASH)
          {
            return ResiliencyScoreType::Alarm;
          }
          else if (hashCode == Sop_HASH)
          {
            return ResiliencyScoreType::Sop;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResiliencyScoreType>(hashCode);
          }

          return ResiliencyScoreType::NOT_SET;
        }

        Aws::String GetNameForResiliencyScoreType(ResiliencyScoreType enumValue)
        {
          switch(enumValue)
          {
          case ResiliencyScoreType::NOT_SET:
            return {};
          case ResiliencyScoreType::Compliance:
            return "Compliance";
          case ResiliencyScoreType::Test:
            return "Test";
          case ResiliencyScoreType::Alarm:
            return "Alarm";
          case ResiliencyScoreType::Sop:
            return "Sop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResiliencyScoreTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
