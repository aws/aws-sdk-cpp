/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutotuneMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AutotuneModeMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");


        AutotuneMode GetAutotuneModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return AutotuneMode::Enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutotuneMode>(hashCode);
          }

          return AutotuneMode::NOT_SET;
        }

        Aws::String GetNameForAutotuneMode(AutotuneMode enumValue)
        {
          switch(enumValue)
          {
          case AutotuneMode::NOT_SET:
            return {};
          case AutotuneMode::Enabled:
            return "Enabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutotuneModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
