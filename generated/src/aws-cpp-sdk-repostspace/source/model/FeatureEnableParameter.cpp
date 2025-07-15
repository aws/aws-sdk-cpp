/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/FeatureEnableParameter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace repostspace
  {
    namespace Model
    {
      namespace FeatureEnableParameterMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        FeatureEnableParameter GetFeatureEnableParameterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return FeatureEnableParameter::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return FeatureEnableParameter::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureEnableParameter>(hashCode);
          }

          return FeatureEnableParameter::NOT_SET;
        }

        Aws::String GetNameForFeatureEnableParameter(FeatureEnableParameter enumValue)
        {
          switch(enumValue)
          {
          case FeatureEnableParameter::NOT_SET:
            return {};
          case FeatureEnableParameter::ENABLED:
            return "ENABLED";
          case FeatureEnableParameter::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureEnableParameterMapper
    } // namespace Model
  } // namespace repostspace
} // namespace Aws
