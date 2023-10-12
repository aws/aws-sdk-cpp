/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/VnfInstantiationState.h>
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
      namespace VnfInstantiationStateMapper
      {

        static constexpr uint32_t INSTANTIATED_HASH = ConstExprHashingUtils::HashString("INSTANTIATED");
        static constexpr uint32_t NOT_INSTANTIATED_HASH = ConstExprHashingUtils::HashString("NOT_INSTANTIATED");


        VnfInstantiationState GetVnfInstantiationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANTIATED_HASH)
          {
            return VnfInstantiationState::INSTANTIATED;
          }
          else if (hashCode == NOT_INSTANTIATED_HASH)
          {
            return VnfInstantiationState::NOT_INSTANTIATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VnfInstantiationState>(hashCode);
          }

          return VnfInstantiationState::NOT_SET;
        }

        Aws::String GetNameForVnfInstantiationState(VnfInstantiationState enumValue)
        {
          switch(enumValue)
          {
          case VnfInstantiationState::NOT_SET:
            return {};
          case VnfInstantiationState::INSTANTIATED:
            return "INSTANTIATED";
          case VnfInstantiationState::NOT_INSTANTIATED:
            return "NOT_INSTANTIATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VnfInstantiationStateMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
