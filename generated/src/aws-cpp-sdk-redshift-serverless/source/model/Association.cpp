/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/Association.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

Association::Association() : 
    m_customDomainCertificateArnHasBeenSet(false),
    m_customDomainCertificateExpiryTimeHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

Association::Association(JsonView jsonValue) : 
    m_customDomainCertificateArnHasBeenSet(false),
    m_customDomainCertificateExpiryTimeHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

Association& Association::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customDomainCertificateArn"))
  {
    m_customDomainCertificateArn = jsonValue.GetString("customDomainCertificateArn");

    m_customDomainCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDomainCertificateExpiryTime"))
  {
    m_customDomainCertificateExpiryTime = jsonValue.GetString("customDomainCertificateExpiryTime");

    m_customDomainCertificateExpiryTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDomainName"))
  {
    m_customDomainName = jsonValue.GetString("customDomainName");

    m_customDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");

    m_workgroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Association::Jsonize() const
{
  JsonValue payload;

  if(m_customDomainCertificateArnHasBeenSet)
  {
   payload.WithString("customDomainCertificateArn", m_customDomainCertificateArn);

  }

  if(m_customDomainCertificateExpiryTimeHasBeenSet)
  {
   payload.WithString("customDomainCertificateExpiryTime", m_customDomainCertificateExpiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_customDomainNameHasBeenSet)
  {
   payload.WithString("customDomainName", m_customDomainName);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
