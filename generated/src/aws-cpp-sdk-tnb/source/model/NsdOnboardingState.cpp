/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/NsdOnboardingState.h>
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
      namespace NsdOnboardingStateMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int ONBOARDED_HASH = HashingUtils::HashString("ONBOARDED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        NsdOnboardingState GetNsdOnboardingStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return NsdOnboardingState::CREATED;
          }
          else if (hashCode == ONBOARDED_HASH)
          {
            return NsdOnboardingState::ONBOARDED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return NsdOnboardingState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NsdOnboardingState>(hashCode);
          }

          return NsdOnboardingState::NOT_SET;
        }

        Aws::String GetNameForNsdOnboardingState(NsdOnboardingState enumValue)
        {
          switch(enumValue)
          {
          case NsdOnboardingState::NOT_SET:
            return {};
          case NsdOnboardingState::CREATED:
            return "CREATED";
          case NsdOnboardingState::ONBOARDED:
            return "ONBOARDED";
          case NsdOnboardingState::ERROR_:
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

      } // namespace NsdOnboardingStateMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
