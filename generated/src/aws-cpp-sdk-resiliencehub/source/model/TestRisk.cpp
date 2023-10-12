/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/TestRisk.h>
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
      namespace TestRiskMapper
      {

        static constexpr uint32_t Small_HASH = ConstExprHashingUtils::HashString("Small");
        static constexpr uint32_t Medium_HASH = ConstExprHashingUtils::HashString("Medium");
        static constexpr uint32_t High_HASH = ConstExprHashingUtils::HashString("High");


        TestRisk GetTestRiskForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Small_HASH)
          {
            return TestRisk::Small;
          }
          else if (hashCode == Medium_HASH)
          {
            return TestRisk::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return TestRisk::High;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestRisk>(hashCode);
          }

          return TestRisk::NOT_SET;
        }

        Aws::String GetNameForTestRisk(TestRisk enumValue)
        {
          switch(enumValue)
          {
          case TestRisk::NOT_SET:
            return {};
          case TestRisk::Small:
            return "Small";
          case TestRisk::Medium:
            return "Medium";
          case TestRisk::High:
            return "High";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestRiskMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
