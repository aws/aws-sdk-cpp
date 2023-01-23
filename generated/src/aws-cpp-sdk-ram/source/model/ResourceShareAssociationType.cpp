/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceShareAssociationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ResourceShareAssociationTypeMapper
      {

        static const int PRINCIPAL_HASH = HashingUtils::HashString("PRINCIPAL");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");


        ResourceShareAssociationType GetResourceShareAssociationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRINCIPAL_HASH)
          {
            return ResourceShareAssociationType::PRINCIPAL;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return ResourceShareAssociationType::RESOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceShareAssociationType>(hashCode);
          }

          return ResourceShareAssociationType::NOT_SET;
        }

        Aws::String GetNameForResourceShareAssociationType(ResourceShareAssociationType enumValue)
        {
          switch(enumValue)
          {
          case ResourceShareAssociationType::PRINCIPAL:
            return "PRINCIPAL";
          case ResourceShareAssociationType::RESOURCE:
            return "RESOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceShareAssociationTypeMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
