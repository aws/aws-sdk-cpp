/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/IamIdentityCenterUserAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace IamIdentityCenterUserAttributeMapper
      {

        static const int UserId_HASH = HashingUtils::HashString("UserId");
        static const int UserName_HASH = HashingUtils::HashString("UserName");
        static const int Email_HASH = HashingUtils::HashString("Email");


        IamIdentityCenterUserAttribute GetIamIdentityCenterUserAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UserId_HASH)
          {
            return IamIdentityCenterUserAttribute::UserId;
          }
          else if (hashCode == UserName_HASH)
          {
            return IamIdentityCenterUserAttribute::UserName;
          }
          else if (hashCode == Email_HASH)
          {
            return IamIdentityCenterUserAttribute::Email;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IamIdentityCenterUserAttribute>(hashCode);
          }

          return IamIdentityCenterUserAttribute::NOT_SET;
        }

        Aws::String GetNameForIamIdentityCenterUserAttribute(IamIdentityCenterUserAttribute enumValue)
        {
          switch(enumValue)
          {
          case IamIdentityCenterUserAttribute::NOT_SET:
            return {};
          case IamIdentityCenterUserAttribute::UserId:
            return "UserId";
          case IamIdentityCenterUserAttribute::UserName:
            return "UserName";
          case IamIdentityCenterUserAttribute::Email:
            return "Email";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IamIdentityCenterUserAttributeMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
