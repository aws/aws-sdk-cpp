/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/OptInFeatureName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityIR
  {
    namespace Model
    {
      namespace OptInFeatureNameMapper
      {

        static const int Triage_HASH = HashingUtils::HashString("Triage");


        OptInFeatureName GetOptInFeatureNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Triage_HASH)
          {
            return OptInFeatureName::Triage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptInFeatureName>(hashCode);
          }

          return OptInFeatureName::NOT_SET;
        }

        Aws::String GetNameForOptInFeatureName(OptInFeatureName enumValue)
        {
          switch(enumValue)
          {
          case OptInFeatureName::NOT_SET:
            return {};
          case OptInFeatureName::Triage:
            return "Triage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptInFeatureNameMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
