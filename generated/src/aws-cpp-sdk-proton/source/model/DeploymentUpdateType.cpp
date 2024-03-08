/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/DeploymentUpdateType.h>
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
      namespace DeploymentUpdateTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int CURRENT_VERSION_HASH = HashingUtils::HashString("CURRENT_VERSION");
        static const int MINOR_VERSION_HASH = HashingUtils::HashString("MINOR_VERSION");
        static const int MAJOR_VERSION_HASH = HashingUtils::HashString("MAJOR_VERSION");


        DeploymentUpdateType GetDeploymentUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DeploymentUpdateType::NONE;
          }
          else if (hashCode == CURRENT_VERSION_HASH)
          {
            return DeploymentUpdateType::CURRENT_VERSION;
          }
          else if (hashCode == MINOR_VERSION_HASH)
          {
            return DeploymentUpdateType::MINOR_VERSION;
          }
          else if (hashCode == MAJOR_VERSION_HASH)
          {
            return DeploymentUpdateType::MAJOR_VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentUpdateType>(hashCode);
          }

          return DeploymentUpdateType::NOT_SET;
        }

        Aws::String GetNameForDeploymentUpdateType(DeploymentUpdateType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentUpdateType::NOT_SET:
            return {};
          case DeploymentUpdateType::NONE:
            return "NONE";
          case DeploymentUpdateType::CURRENT_VERSION:
            return "CURRENT_VERSION";
          case DeploymentUpdateType::MINOR_VERSION:
            return "MINOR_VERSION";
          case DeploymentUpdateType::MAJOR_VERSION:
            return "MAJOR_VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentUpdateTypeMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
