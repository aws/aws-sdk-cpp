/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UserIdentityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace UserIdentityTypeMapper
      {

        static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");
        static const int AWS_DIRECTORY_SERVICE_HASH = HashingUtils::HashString("AWS_DIRECTORY_SERVICE");
        static const int AWS_IAM_IDENTITY_CENTER_HASH = HashingUtils::HashString("AWS_IAM_IDENTITY_CENTER");


        UserIdentityType GetUserIdentityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_MANAGED_HASH)
          {
            return UserIdentityType::CUSTOMER_MANAGED;
          }
          else if (hashCode == AWS_DIRECTORY_SERVICE_HASH)
          {
            return UserIdentityType::AWS_DIRECTORY_SERVICE;
          }
          else if (hashCode == AWS_IAM_IDENTITY_CENTER_HASH)
          {
            return UserIdentityType::AWS_IAM_IDENTITY_CENTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserIdentityType>(hashCode);
          }

          return UserIdentityType::NOT_SET;
        }

        Aws::String GetNameForUserIdentityType(UserIdentityType enumValue)
        {
          switch(enumValue)
          {
          case UserIdentityType::NOT_SET:
            return {};
          case UserIdentityType::CUSTOMER_MANAGED:
            return "CUSTOMER_MANAGED";
          case UserIdentityType::AWS_DIRECTORY_SERVICE:
            return "AWS_DIRECTORY_SERVICE";
          case UserIdentityType::AWS_IAM_IDENTITY_CENTER:
            return "AWS_IAM_IDENTITY_CENTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserIdentityTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
