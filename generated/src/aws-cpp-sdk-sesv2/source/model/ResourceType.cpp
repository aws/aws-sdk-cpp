/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int EMAIL_IDENTITY_HASH = HashingUtils::HashString("EMAIL_IDENTITY");
        static const int CONFIGURATION_SET_HASH = HashingUtils::HashString("CONFIGURATION_SET");
        static const int EMAIL_TEMPLATE_HASH = HashingUtils::HashString("EMAIL_TEMPLATE");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_IDENTITY_HASH)
          {
            return ResourceType::EMAIL_IDENTITY;
          }
          else if (hashCode == CONFIGURATION_SET_HASH)
          {
            return ResourceType::CONFIGURATION_SET;
          }
          else if (hashCode == EMAIL_TEMPLATE_HASH)
          {
            return ResourceType::EMAIL_TEMPLATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::EMAIL_IDENTITY:
            return "EMAIL_IDENTITY";
          case ResourceType::CONFIGURATION_SET:
            return "CONFIGURATION_SET";
          case ResourceType::EMAIL_TEMPLATE:
            return "EMAIL_TEMPLATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
