/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/IntegrationV2Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace IntegrationV2TypeMapper
      {

        static const int SEND_FINDINGS_TO_SECURITY_HUB_HASH = HashingUtils::HashString("SEND_FINDINGS_TO_SECURITY_HUB");
        static const int RECEIVE_FINDINGS_FROM_SECURITY_HUB_HASH = HashingUtils::HashString("RECEIVE_FINDINGS_FROM_SECURITY_HUB");
        static const int UPDATE_FINDINGS_IN_SECURITY_HUB_HASH = HashingUtils::HashString("UPDATE_FINDINGS_IN_SECURITY_HUB");


        IntegrationV2Type GetIntegrationV2TypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_FINDINGS_TO_SECURITY_HUB_HASH)
          {
            return IntegrationV2Type::SEND_FINDINGS_TO_SECURITY_HUB;
          }
          else if (hashCode == RECEIVE_FINDINGS_FROM_SECURITY_HUB_HASH)
          {
            return IntegrationV2Type::RECEIVE_FINDINGS_FROM_SECURITY_HUB;
          }
          else if (hashCode == UPDATE_FINDINGS_IN_SECURITY_HUB_HASH)
          {
            return IntegrationV2Type::UPDATE_FINDINGS_IN_SECURITY_HUB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationV2Type>(hashCode);
          }

          return IntegrationV2Type::NOT_SET;
        }

        Aws::String GetNameForIntegrationV2Type(IntegrationV2Type enumValue)
        {
          switch(enumValue)
          {
          case IntegrationV2Type::NOT_SET:
            return {};
          case IntegrationV2Type::SEND_FINDINGS_TO_SECURITY_HUB:
            return "SEND_FINDINGS_TO_SECURITY_HUB";
          case IntegrationV2Type::RECEIVE_FINDINGS_FROM_SECURITY_HUB:
            return "RECEIVE_FINDINGS_FROM_SECURITY_HUB";
          case IntegrationV2Type::UPDATE_FINDINGS_IN_SECURITY_HUB:
            return "UPDATE_FINDINGS_IN_SECURITY_HUB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegrationV2TypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
