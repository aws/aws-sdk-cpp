/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GranteeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace GranteeTypeMapper
      {

        static const int DIRECTORY_USER_HASH = HashingUtils::HashString("DIRECTORY_USER");
        static const int DIRECTORY_GROUP_HASH = HashingUtils::HashString("DIRECTORY_GROUP");
        static const int IAM_HASH = HashingUtils::HashString("IAM");


        GranteeType GetGranteeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECTORY_USER_HASH)
          {
            return GranteeType::DIRECTORY_USER;
          }
          else if (hashCode == DIRECTORY_GROUP_HASH)
          {
            return GranteeType::DIRECTORY_GROUP;
          }
          else if (hashCode == IAM_HASH)
          {
            return GranteeType::IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GranteeType>(hashCode);
          }

          return GranteeType::NOT_SET;
        }

        Aws::String GetNameForGranteeType(GranteeType enumValue)
        {
          switch(enumValue)
          {
          case GranteeType::NOT_SET:
            return {};
          case GranteeType::DIRECTORY_USER:
            return "DIRECTORY_USER";
          case GranteeType::DIRECTORY_GROUP:
            return "DIRECTORY_GROUP";
          case GranteeType::IAM:
            return "IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GranteeTypeMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
