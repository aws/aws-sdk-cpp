/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/IdentitySourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace IdentitySourceTypeMapper
      {

        static const int IAM_IDENTITY_CENTER_HASH = HashingUtils::HashString("IAM_IDENTITY_CENTER");


        IdentitySourceType GetIdentitySourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_IDENTITY_CENTER_HASH)
          {
            return IdentitySourceType::IAM_IDENTITY_CENTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentitySourceType>(hashCode);
          }

          return IdentitySourceType::NOT_SET;
        }

        Aws::String GetNameForIdentitySourceType(IdentitySourceType enumValue)
        {
          switch(enumValue)
          {
          case IdentitySourceType::NOT_SET:
            return {};
          case IdentitySourceType::IAM_IDENTITY_CENTER:
            return "IAM_IDENTITY_CENTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentitySourceTypeMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
