/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DriftType.h>
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
      namespace DriftTypeMapper
      {

        static const int ApplicationCompliance_HASH = HashingUtils::HashString("ApplicationCompliance");


        DriftType GetDriftTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ApplicationCompliance_HASH)
          {
            return DriftType::ApplicationCompliance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DriftType>(hashCode);
          }

          return DriftType::NOT_SET;
        }

        Aws::String GetNameForDriftType(DriftType enumValue)
        {
          switch(enumValue)
          {
          case DriftType::NOT_SET:
            return {};
          case DriftType::ApplicationCompliance:
            return "ApplicationCompliance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DriftTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
