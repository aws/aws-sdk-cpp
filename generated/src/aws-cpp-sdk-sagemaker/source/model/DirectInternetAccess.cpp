/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DirectInternetAccess.h>
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
      namespace DirectInternetAccessMapper
      {

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        DirectInternetAccess GetDirectInternetAccessForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return DirectInternetAccess::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return DirectInternetAccess::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectInternetAccess>(hashCode);
          }

          return DirectInternetAccess::NOT_SET;
        }

        Aws::String GetNameForDirectInternetAccess(DirectInternetAccess enumValue)
        {
          switch(enumValue)
          {
          case DirectInternetAccess::NOT_SET:
            return {};
          case DirectInternetAccess::Enabled:
            return "Enabled";
          case DirectInternetAccess::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectInternetAccessMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
