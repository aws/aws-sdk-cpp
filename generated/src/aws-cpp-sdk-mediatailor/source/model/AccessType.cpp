﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace AccessTypeMapper
      {

        static const int S3_SIGV4_HASH = HashingUtils::HashString("S3_SIGV4");
        static const int SECRETS_MANAGER_ACCESS_TOKEN_HASH = HashingUtils::HashString("SECRETS_MANAGER_ACCESS_TOKEN");


        AccessType GetAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_SIGV4_HASH)
          {
            return AccessType::S3_SIGV4;
          }
          else if (hashCode == SECRETS_MANAGER_ACCESS_TOKEN_HASH)
          {
            return AccessType::SECRETS_MANAGER_ACCESS_TOKEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessType>(hashCode);
          }

          return AccessType::NOT_SET;
        }

        Aws::String GetNameForAccessType(AccessType enumValue)
        {
          switch(enumValue)
          {
          case AccessType::S3_SIGV4:
            return "S3_SIGV4";
          case AccessType::SECRETS_MANAGER_ACCESS_TOKEN:
            return "SECRETS_MANAGER_ACCESS_TOKEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
