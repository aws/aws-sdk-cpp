/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileValidationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace LaunchProfileValidationTypeMapper
      {

        static const int VALIDATE_ACTIVE_DIRECTORY_STUDIO_COMPONENT_HASH = HashingUtils::HashString("VALIDATE_ACTIVE_DIRECTORY_STUDIO_COMPONENT");
        static const int VALIDATE_SUBNET_ASSOCIATION_HASH = HashingUtils::HashString("VALIDATE_SUBNET_ASSOCIATION");
        static const int VALIDATE_NETWORK_ACL_ASSOCIATION_HASH = HashingUtils::HashString("VALIDATE_NETWORK_ACL_ASSOCIATION");
        static const int VALIDATE_SECURITY_GROUP_ASSOCIATION_HASH = HashingUtils::HashString("VALIDATE_SECURITY_GROUP_ASSOCIATION");


        LaunchProfileValidationType GetLaunchProfileValidationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATE_ACTIVE_DIRECTORY_STUDIO_COMPONENT_HASH)
          {
            return LaunchProfileValidationType::VALIDATE_ACTIVE_DIRECTORY_STUDIO_COMPONENT;
          }
          else if (hashCode == VALIDATE_SUBNET_ASSOCIATION_HASH)
          {
            return LaunchProfileValidationType::VALIDATE_SUBNET_ASSOCIATION;
          }
          else if (hashCode == VALIDATE_NETWORK_ACL_ASSOCIATION_HASH)
          {
            return LaunchProfileValidationType::VALIDATE_NETWORK_ACL_ASSOCIATION;
          }
          else if (hashCode == VALIDATE_SECURITY_GROUP_ASSOCIATION_HASH)
          {
            return LaunchProfileValidationType::VALIDATE_SECURITY_GROUP_ASSOCIATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchProfileValidationType>(hashCode);
          }

          return LaunchProfileValidationType::NOT_SET;
        }

        Aws::String GetNameForLaunchProfileValidationType(LaunchProfileValidationType enumValue)
        {
          switch(enumValue)
          {
          case LaunchProfileValidationType::NOT_SET:
            return {};
          case LaunchProfileValidationType::VALIDATE_ACTIVE_DIRECTORY_STUDIO_COMPONENT:
            return "VALIDATE_ACTIVE_DIRECTORY_STUDIO_COMPONENT";
          case LaunchProfileValidationType::VALIDATE_SUBNET_ASSOCIATION:
            return "VALIDATE_SUBNET_ASSOCIATION";
          case LaunchProfileValidationType::VALIDATE_NETWORK_ACL_ASSOCIATION:
            return "VALIDATE_NETWORK_ACL_ASSOCIATION";
          case LaunchProfileValidationType::VALIDATE_SECURITY_GROUP_ASSOCIATION:
            return "VALIDATE_SECURITY_GROUP_ASSOCIATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchProfileValidationTypeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
