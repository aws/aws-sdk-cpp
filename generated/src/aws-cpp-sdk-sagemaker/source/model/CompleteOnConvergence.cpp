/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CompleteOnConvergence.h>
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
      namespace CompleteOnConvergenceMapper
      {

        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");
        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");


        CompleteOnConvergence GetCompleteOnConvergenceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Disabled_HASH)
          {
            return CompleteOnConvergence::Disabled;
          }
          else if (hashCode == Enabled_HASH)
          {
            return CompleteOnConvergence::Enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompleteOnConvergence>(hashCode);
          }

          return CompleteOnConvergence::NOT_SET;
        }

        Aws::String GetNameForCompleteOnConvergence(CompleteOnConvergence enumValue)
        {
          switch(enumValue)
          {
          case CompleteOnConvergence::NOT_SET:
            return {};
          case CompleteOnConvergence::Disabled:
            return "Disabled";
          case CompleteOnConvergence::Enabled:
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

      } // namespace CompleteOnConvergenceMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
