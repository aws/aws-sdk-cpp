/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace TypeMapper
      {

        static constexpr uint32_t CanonicalUser_HASH = ConstExprHashingUtils::HashString("CanonicalUser");
        static constexpr uint32_t AmazonCustomerByEmail_HASH = ConstExprHashingUtils::HashString("AmazonCustomerByEmail");
        static constexpr uint32_t Group_HASH = ConstExprHashingUtils::HashString("Group");


        Type GetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CanonicalUser_HASH)
          {
            return Type::CanonicalUser;
          }
          else if (hashCode == AmazonCustomerByEmail_HASH)
          {
            return Type::AmazonCustomerByEmail;
          }
          else if (hashCode == Group_HASH)
          {
            return Type::Group;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::CanonicalUser:
            return "CanonicalUser";
          case Type::AmazonCustomerByEmail:
            return "AmazonCustomerByEmail";
          case Type::Group:
            return "Group";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
