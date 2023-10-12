/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemRelatedItemsFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OpsItemRelatedItemsFilterKeyMapper
      {

        static constexpr uint32_t ResourceType_HASH = ConstExprHashingUtils::HashString("ResourceType");
        static constexpr uint32_t AssociationId_HASH = ConstExprHashingUtils::HashString("AssociationId");
        static constexpr uint32_t ResourceUri_HASH = ConstExprHashingUtils::HashString("ResourceUri");


        OpsItemRelatedItemsFilterKey GetOpsItemRelatedItemsFilterKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceType_HASH)
          {
            return OpsItemRelatedItemsFilterKey::ResourceType;
          }
          else if (hashCode == AssociationId_HASH)
          {
            return OpsItemRelatedItemsFilterKey::AssociationId;
          }
          else if (hashCode == ResourceUri_HASH)
          {
            return OpsItemRelatedItemsFilterKey::ResourceUri;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemRelatedItemsFilterKey>(hashCode);
          }

          return OpsItemRelatedItemsFilterKey::NOT_SET;
        }

        Aws::String GetNameForOpsItemRelatedItemsFilterKey(OpsItemRelatedItemsFilterKey enumValue)
        {
          switch(enumValue)
          {
          case OpsItemRelatedItemsFilterKey::NOT_SET:
            return {};
          case OpsItemRelatedItemsFilterKey::ResourceType:
            return "ResourceType";
          case OpsItemRelatedItemsFilterKey::AssociationId:
            return "AssociationId";
          case OpsItemRelatedItemsFilterKey::ResourceUri:
            return "ResourceUri";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemRelatedItemsFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
