/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{
  enum class CertificateField
  {
    NOT_SET,
    x509Subject,
    x509Issuer,
    x509SAN
  };

namespace CertificateFieldMapper
{
AWS_ROLESANYWHERE_API CertificateField GetCertificateFieldForName(const Aws::String& name);

AWS_ROLESANYWHERE_API Aws::String GetNameForCertificateField(CertificateField value);
} // namespace CertificateFieldMapper
} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
