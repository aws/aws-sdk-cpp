/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/TestType.h>
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
      namespace TestTypeMapper
      {

        static const int Software_HASH = HashingUtils::HashString("Software");
        static const int Hardware_HASH = HashingUtils::HashString("Hardware");
        static const int AZ_HASH = HashingUtils::HashString("AZ");
        static const int Region_HASH = HashingUtils::HashString("Region");


        TestType GetTestTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Software_HASH)
          {
            return TestType::Software;
          }
          else if (hashCode == Hardware_HASH)
          {
            return TestType::Hardware;
          }
          else if (hashCode == AZ_HASH)
          {
            return TestType::AZ;
          }
          else if (hashCode == Region_HASH)
          {
            return TestType::Region;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestType>(hashCode);
          }

          return TestType::NOT_SET;
        }

        Aws::String GetNameForTestType(TestType enumValue)
        {
          switch(enumValue)
          {
          case TestType::NOT_SET:
            return {};
          case TestType::Software:
            return "Software";
          case TestType::Hardware:
            return "Hardware";
          case TestType::AZ:
            return "AZ";
          case TestType::Region:
            return "Region";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
