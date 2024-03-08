/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ResponseScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace ResponseScopeMapper
      {

        static const int ENTERPRISE_CONTENT_ONLY_HASH = HashingUtils::HashString("ENTERPRISE_CONTENT_ONLY");
        static const int EXTENDED_KNOWLEDGE_ENABLED_HASH = HashingUtils::HashString("EXTENDED_KNOWLEDGE_ENABLED");


        ResponseScope GetResponseScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTERPRISE_CONTENT_ONLY_HASH)
          {
            return ResponseScope::ENTERPRISE_CONTENT_ONLY;
          }
          else if (hashCode == EXTENDED_KNOWLEDGE_ENABLED_HASH)
          {
            return ResponseScope::EXTENDED_KNOWLEDGE_ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResponseScope>(hashCode);
          }

          return ResponseScope::NOT_SET;
        }

        Aws::String GetNameForResponseScope(ResponseScope enumValue)
        {
          switch(enumValue)
          {
          case ResponseScope::NOT_SET:
            return {};
          case ResponseScope::ENTERPRISE_CONTENT_ONLY:
            return "ENTERPRISE_CONTENT_ONLY";
          case ResponseScope::EXTENDED_KNOWLEDGE_ENABLED:
            return "EXTENDED_KNOWLEDGE_ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResponseScopeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
