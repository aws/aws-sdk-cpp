/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCertificateManagerCertificateExtendedKeyUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCertificateManagerCertificateExtendedKeyUsage::AwsCertificateManagerCertificateExtendedKeyUsage() : 
    m_nameHasBeenSet(false),
    m_oIdHasBeenSet(false)
{
}

AwsCertificateManagerCertificateExtendedKeyUsage::AwsCertificateManagerCertificateExtendedKeyUsage(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_oIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCertificateManagerCertificateExtendedKeyUsage& AwsCertificateManagerCertificateExtendedKeyUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OId"))
  {
    m_oId = jsonValue.GetString("OId");

    m_oIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCertificateManagerCertificateExtendedKeyUsage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_oIdHasBeenSet)
  {
   payload.WithString("OId", m_oId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
