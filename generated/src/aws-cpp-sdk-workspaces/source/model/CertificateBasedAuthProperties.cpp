/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CertificateBasedAuthProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

CertificateBasedAuthProperties::CertificateBasedAuthProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

CertificateBasedAuthProperties& CertificateBasedAuthProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = CertificateBasedAuthStatusEnumMapper::GetCertificateBasedAuthStatusEnumForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CertificateAuthorityArn"))
  {
    m_certificateAuthorityArn = jsonValue.GetString("CertificateAuthorityArn");
    m_certificateAuthorityArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateBasedAuthProperties::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateBasedAuthStatusEnumMapper::GetNameForCertificateBasedAuthStatusEnum(m_status));
  }

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
