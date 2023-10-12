/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ComponentDeploymentUpdateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace ComponentDeploymentUpdateTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t CURRENT_VERSION_HASH = ConstExprHashingUtils::HashString("CURRENT_VERSION");


        ComponentDeploymentUpdateType GetComponentDeploymentUpdateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ComponentDeploymentUpdateType::NONE;
          }
          else if (hashCode == CURRENT_VERSION_HASH)
          {
            return ComponentDeploymentUpdateType::CURRENT_VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentDeploymentUpdateType>(hashCode);
          }

          return ComponentDeploymentUpdateType::NOT_SET;
        }

        Aws::String GetNameForComponentDeploymentUpdateType(ComponentDeploymentUpdateType enumValue)
        {
          switch(enumValue)
          {
          case ComponentDeploymentUpdateType::NOT_SET:
            return {};
          case ComponentDeploymentUpdateType::NONE:
            return "NONE";
          case ComponentDeploymentUpdateType::CURRENT_VERSION:
            return "CURRENT_VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentDeploymentUpdateTypeMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
