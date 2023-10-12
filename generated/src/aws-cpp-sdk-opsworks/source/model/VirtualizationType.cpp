/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/VirtualizationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace VirtualizationTypeMapper
      {

        static constexpr uint32_t paravirtual_HASH = ConstExprHashingUtils::HashString("paravirtual");
        static constexpr uint32_t hvm_HASH = ConstExprHashingUtils::HashString("hvm");


        VirtualizationType GetVirtualizationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == paravirtual_HASH)
          {
            return VirtualizationType::paravirtual;
          }
          else if (hashCode == hvm_HASH)
          {
            return VirtualizationType::hvm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualizationType>(hashCode);
          }

          return VirtualizationType::NOT_SET;
        }

        Aws::String GetNameForVirtualizationType(VirtualizationType enumValue)
        {
          switch(enumValue)
          {
          case VirtualizationType::NOT_SET:
            return {};
          case VirtualizationType::paravirtual:
            return "paravirtual";
          case VirtualizationType::hvm:
            return "hvm";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VirtualizationTypeMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
