/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/AuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace AuthTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int AWS_IAM_HASH = HashingUtils::HashString("AWS_IAM");


        AuthType GetAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AuthType::NONE;
          }
          else if (hashCode == AWS_IAM_HASH)
          {
            return AuthType::AWS_IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthType>(hashCode);
          }

          return AuthType::NOT_SET;
        }

        Aws::String GetNameForAuthType(AuthType enumValue)
        {
          switch(enumValue)
          {
          case AuthType::NOT_SET:
            return {};
          case AuthType::NONE:
            return "NONE";
          case AuthType::AWS_IAM:
            return "AWS_IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTypeMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
