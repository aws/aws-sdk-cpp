/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ProvisionedResourceEngine.h>
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
      namespace ProvisionedResourceEngineMapper
      {

        static const int CLOUDFORMATION_HASH = HashingUtils::HashString("CLOUDFORMATION");
        static const int TERRAFORM_HASH = HashingUtils::HashString("TERRAFORM");


        ProvisionedResourceEngine GetProvisionedResourceEngineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFORMATION_HASH)
          {
            return ProvisionedResourceEngine::CLOUDFORMATION;
          }
          else if (hashCode == TERRAFORM_HASH)
          {
            return ProvisionedResourceEngine::TERRAFORM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedResourceEngine>(hashCode);
          }

          return ProvisionedResourceEngine::NOT_SET;
        }

        Aws::String GetNameForProvisionedResourceEngine(ProvisionedResourceEngine enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedResourceEngine::NOT_SET:
            return {};
          case ProvisionedResourceEngine::CLOUDFORMATION:
            return "CLOUDFORMATION";
          case ProvisionedResourceEngine::TERRAFORM:
            return "TERRAFORM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisionedResourceEngineMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
