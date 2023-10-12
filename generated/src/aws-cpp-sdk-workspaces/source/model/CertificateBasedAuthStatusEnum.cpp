/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CertificateBasedAuthStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace CertificateBasedAuthStatusEnumMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");


        CertificateBasedAuthStatusEnum GetCertificateBasedAuthStatusEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CertificateBasedAuthStatusEnum::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return CertificateBasedAuthStatusEnum::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateBasedAuthStatusEnum>(hashCode);
          }

          return CertificateBasedAuthStatusEnum::NOT_SET;
        }

        Aws::String GetNameForCertificateBasedAuthStatusEnum(CertificateBasedAuthStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case CertificateBasedAuthStatusEnum::NOT_SET:
            return {};
          case CertificateBasedAuthStatusEnum::DISABLED:
            return "DISABLED";
          case CertificateBasedAuthStatusEnum::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateBasedAuthStatusEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
