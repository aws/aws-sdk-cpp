/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/JwksRetrievalOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace JwksRetrievalOptionMapper
      {

        static const int OPEN_ID_DISCOVERY_HASH = HashingUtils::HashString("OPEN_ID_DISCOVERY");


        JwksRetrievalOption GetJwksRetrievalOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_ID_DISCOVERY_HASH)
          {
            return JwksRetrievalOption::OPEN_ID_DISCOVERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JwksRetrievalOption>(hashCode);
          }

          return JwksRetrievalOption::NOT_SET;
        }

        Aws::String GetNameForJwksRetrievalOption(JwksRetrievalOption enumValue)
        {
          switch(enumValue)
          {
          case JwksRetrievalOption::NOT_SET:
            return {};
          case JwksRetrievalOption::OPEN_ID_DISCOVERY:
            return "OPEN_ID_DISCOVERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JwksRetrievalOptionMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
