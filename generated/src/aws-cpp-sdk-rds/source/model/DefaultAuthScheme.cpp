/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DefaultAuthScheme.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace DefaultAuthSchemeMapper
      {

        static const int IAM_AUTH_HASH = HashingUtils::HashString("IAM_AUTH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        DefaultAuthScheme GetDefaultAuthSchemeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_AUTH_HASH)
          {
            return DefaultAuthScheme::IAM_AUTH;
          }
          else if (hashCode == NONE_HASH)
          {
            return DefaultAuthScheme::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultAuthScheme>(hashCode);
          }

          return DefaultAuthScheme::NOT_SET;
        }

        Aws::String GetNameForDefaultAuthScheme(DefaultAuthScheme enumValue)
        {
          switch(enumValue)
          {
          case DefaultAuthScheme::NOT_SET:
            return {};
          case DefaultAuthScheme::IAM_AUTH:
            return "IAM_AUTH";
          case DefaultAuthScheme::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultAuthSchemeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
