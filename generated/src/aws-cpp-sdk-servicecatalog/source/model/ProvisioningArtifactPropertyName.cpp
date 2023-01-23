/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisioningArtifactPropertyName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ProvisioningArtifactPropertyNameMapper
      {

        static const int Id_HASH = HashingUtils::HashString("Id");


        ProvisioningArtifactPropertyName GetProvisioningArtifactPropertyNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Id_HASH)
          {
            return ProvisioningArtifactPropertyName::Id;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisioningArtifactPropertyName>(hashCode);
          }

          return ProvisioningArtifactPropertyName::NOT_SET;
        }

        Aws::String GetNameForProvisioningArtifactPropertyName(ProvisioningArtifactPropertyName enumValue)
        {
          switch(enumValue)
          {
          case ProvisioningArtifactPropertyName::Id:
            return "Id";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisioningArtifactPropertyNameMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
