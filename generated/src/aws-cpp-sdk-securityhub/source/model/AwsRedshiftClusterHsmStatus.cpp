/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterHsmStatus.h>
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

AwsRedshiftClusterHsmStatus::AwsRedshiftClusterHsmStatus() : 
    m_hsmClientCertificateIdentifierHasBeenSet(false),
    m_hsmConfigurationIdentifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRedshiftClusterHsmStatus::AwsRedshiftClusterHsmStatus(JsonView jsonValue) : 
    m_hsmClientCertificateIdentifierHasBeenSet(false),
    m_hsmConfigurationIdentifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterHsmStatus& AwsRedshiftClusterHsmStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HsmClientCertificateIdentifier"))
  {
    m_hsmClientCertificateIdentifier = jsonValue.GetString("HsmClientCertificateIdentifier");

    m_hsmClientCertificateIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HsmConfigurationIdentifier"))
  {
    m_hsmConfigurationIdentifier = jsonValue.GetString("HsmConfigurationIdentifier");

    m_hsmConfigurationIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterHsmStatus::Jsonize() const
{
  JsonValue payload;

  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
   payload.WithString("HsmClientCertificateIdentifier", m_hsmClientCertificateIdentifier);

  }

  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
   payload.WithString("HsmConfigurationIdentifier", m_hsmConfigurationIdentifier);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
