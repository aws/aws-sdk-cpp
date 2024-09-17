/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/CertificateField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RolesAnywhere
  {
    namespace Model
    {
      namespace CertificateFieldMapper
      {

        static const int x509Subject_HASH = HashingUtils::HashString("x509Subject");
        static const int x509Issuer_HASH = HashingUtils::HashString("x509Issuer");
        static const int x509SAN_HASH = HashingUtils::HashString("x509SAN");


        CertificateField GetCertificateFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == x509Subject_HASH)
          {
            return CertificateField::x509Subject;
          }
          else if (hashCode == x509Issuer_HASH)
          {
            return CertificateField::x509Issuer;
          }
          else if (hashCode == x509SAN_HASH)
          {
            return CertificateField::x509SAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateField>(hashCode);
          }

          return CertificateField::NOT_SET;
        }

        Aws::String GetNameForCertificateField(CertificateField enumValue)
        {
          switch(enumValue)
          {
          case CertificateField::NOT_SET:
            return {};
          case CertificateField::x509Subject:
            return "x509Subject";
          case CertificateField::x509Issuer:
            return "x509Issuer";
          case CertificateField::x509SAN:
            return "x509SAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateFieldMapper
    } // namespace Model
  } // namespace RolesAnywhere
} // namespace Aws
