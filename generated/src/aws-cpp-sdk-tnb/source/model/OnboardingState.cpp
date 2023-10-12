/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/OnboardingState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace OnboardingStateMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t ONBOARDED_HASH = ConstExprHashingUtils::HashString("ONBOARDED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        OnboardingState GetOnboardingStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return OnboardingState::CREATED;
          }
          else if (hashCode == ONBOARDED_HASH)
          {
            return OnboardingState::ONBOARDED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return OnboardingState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnboardingState>(hashCode);
          }

          return OnboardingState::NOT_SET;
        }

        Aws::String GetNameForOnboardingState(OnboardingState enumValue)
        {
          switch(enumValue)
          {
          case OnboardingState::NOT_SET:
            return {};
          case OnboardingState::CREATED:
            return "CREATED";
          case OnboardingState::ONBOARDED:
            return "ONBOARDED";
          case OnboardingState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnboardingStateMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
