/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/model/ConnectorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorScep
{
namespace Model
{

ConnectorSummary::ConnectorSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectorSummary& ConnectorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CertificateAuthorityArn"))
  {
    m_certificateAuthorityArn = jsonValue.GetString("CertificateAuthorityArn");
    m_certificateAuthorityArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MobileDeviceManagement"))
  {
    m_mobileDeviceManagement = jsonValue.GetObject("MobileDeviceManagement");
    m_mobileDeviceManagementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenIdConfiguration"))
  {
    m_openIdConfiguration = jsonValue.GetObject("OpenIdConfiguration");
    m_openIdConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ConnectorStatusMapper::GetConnectorStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = ConnectorStatusReasonMapper::GetConnectorStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");
    m_endpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ConnectorTypeMapper::GetNameForConnectorType(m_type));
  }

  if(m_mobileDeviceManagementHasBeenSet)
  {
   payload.WithObject("MobileDeviceManagement", m_mobileDeviceManagement.Jsonize());

  }

  if(m_openIdConfigurationHasBeenSet)
  {
   payload.WithObject("OpenIdConfiguration", m_openIdConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ConnectorStatusMapper::GetNameForConnectorStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", ConnectorStatusReasonMapper::GetNameForConnectorStatusReason(m_statusReason));
  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
