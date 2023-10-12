/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VerifiedPermissions
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t IDENTITY_SOURCE_HASH = ConstExprHashingUtils::HashString("IDENTITY_SOURCE");
        static constexpr uint32_t POLICY_STORE_HASH = ConstExprHashingUtils::HashString("POLICY_STORE");
        static constexpr uint32_t POLICY_HASH = ConstExprHashingUtils::HashString("POLICY");
        static constexpr uint32_t POLICY_TEMPLATE_HASH = ConstExprHashingUtils::HashString("POLICY_TEMPLATE");
        static constexpr uint32_t SCHEMA_HASH = ConstExprHashingUtils::HashString("SCHEMA");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDENTITY_SOURCE_HASH)
          {
            return ResourceType::IDENTITY_SOURCE;
          }
          else if (hashCode == POLICY_STORE_HASH)
          {
            return ResourceType::POLICY_STORE;
          }
          else if (hashCode == POLICY_HASH)
          {
            return ResourceType::POLICY;
          }
          else if (hashCode == POLICY_TEMPLATE_HASH)
          {
            return ResourceType::POLICY_TEMPLATE;
          }
          else if (hashCode == SCHEMA_HASH)
          {
            return ResourceType::SCHEMA;
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
          case ResourceType::IDENTITY_SOURCE:
            return "IDENTITY_SOURCE";
          case ResourceType::POLICY_STORE:
            return "POLICY_STORE";
          case ResourceType::POLICY:
            return "POLICY";
          case ResourceType::POLICY_TEMPLATE:
            return "POLICY_TEMPLATE";
          case ResourceType::SCHEMA:
            return "SCHEMA";
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
  } // namespace VerifiedPermissions
} // namespace Aws
