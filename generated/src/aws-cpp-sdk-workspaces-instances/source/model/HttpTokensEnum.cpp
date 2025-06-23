/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/HttpTokensEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace HttpTokensEnumMapper
      {

        static const int optional_HASH = HashingUtils::HashString("optional");
        static const int required_HASH = HashingUtils::HashString("required");


        HttpTokensEnum GetHttpTokensEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == optional_HASH)
          {
            return HttpTokensEnum::optional;
          }
          else if (hashCode == required_HASH)
          {
            return HttpTokensEnum::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpTokensEnum>(hashCode);
          }

          return HttpTokensEnum::NOT_SET;
        }

        Aws::String GetNameForHttpTokensEnum(HttpTokensEnum enumValue)
        {
          switch(enumValue)
          {
          case HttpTokensEnum::NOT_SET:
            return {};
          case HttpTokensEnum::optional:
            return "optional";
          case HttpTokensEnum::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpTokensEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
