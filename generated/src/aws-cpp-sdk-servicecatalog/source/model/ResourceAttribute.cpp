/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ResourceAttribute.h>
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
      namespace ResourceAttributeMapper
      {

        static const int PROPERTIES_HASH = HashingUtils::HashString("PROPERTIES");
        static const int METADATA_HASH = HashingUtils::HashString("METADATA");
        static const int CREATIONPOLICY_HASH = HashingUtils::HashString("CREATIONPOLICY");
        static const int UPDATEPOLICY_HASH = HashingUtils::HashString("UPDATEPOLICY");
        static const int DELETIONPOLICY_HASH = HashingUtils::HashString("DELETIONPOLICY");
        static const int TAGS_HASH = HashingUtils::HashString("TAGS");


        ResourceAttribute GetResourceAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROPERTIES_HASH)
          {
            return ResourceAttribute::PROPERTIES;
          }
          else if (hashCode == METADATA_HASH)
          {
            return ResourceAttribute::METADATA;
          }
          else if (hashCode == CREATIONPOLICY_HASH)
          {
            return ResourceAttribute::CREATIONPOLICY;
          }
          else if (hashCode == UPDATEPOLICY_HASH)
          {
            return ResourceAttribute::UPDATEPOLICY;
          }
          else if (hashCode == DELETIONPOLICY_HASH)
          {
            return ResourceAttribute::DELETIONPOLICY;
          }
          else if (hashCode == TAGS_HASH)
          {
            return ResourceAttribute::TAGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceAttribute>(hashCode);
          }

          return ResourceAttribute::NOT_SET;
        }

        Aws::String GetNameForResourceAttribute(ResourceAttribute enumValue)
        {
          switch(enumValue)
          {
          case ResourceAttribute::PROPERTIES:
            return "PROPERTIES";
          case ResourceAttribute::METADATA:
            return "METADATA";
          case ResourceAttribute::CREATIONPOLICY:
            return "CREATIONPOLICY";
          case ResourceAttribute::UPDATEPOLICY:
            return "UPDATEPOLICY";
          case ResourceAttribute::DELETIONPOLICY:
            return "DELETIONPOLICY";
          case ResourceAttribute::TAGS:
            return "TAGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceAttributeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
