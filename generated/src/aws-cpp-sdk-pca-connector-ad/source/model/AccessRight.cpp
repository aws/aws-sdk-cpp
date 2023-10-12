/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/AccessRight.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace AccessRightMapper
      {

        static constexpr uint32_t ALLOW_HASH = ConstExprHashingUtils::HashString("ALLOW");
        static constexpr uint32_t DENY_HASH = ConstExprHashingUtils::HashString("DENY");


        AccessRight GetAccessRightForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return AccessRight::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return AccessRight::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessRight>(hashCode);
          }

          return AccessRight::NOT_SET;
        }

        Aws::String GetNameForAccessRight(AccessRight enumValue)
        {
          switch(enumValue)
          {
          case AccessRight::NOT_SET:
            return {};
          case AccessRight::ALLOW:
            return "ALLOW";
          case AccessRight::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessRightMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
