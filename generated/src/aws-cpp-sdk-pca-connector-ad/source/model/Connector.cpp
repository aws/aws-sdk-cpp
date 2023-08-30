/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/Connector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

Connector::Connector() : 
    m_arnHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false),
    m_certificateEnrollmentPolicyServerEndpointHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_status(ConnectorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReason(ConnectorStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_vpcInformationHasBeenSet(false)
{
}

Connector::Connector(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false),
    m_certificateEnrollmentPolicyServerEndpointHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_status(ConnectorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReason(ConnectorStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_vpcInformationHasBeenSet(false)
{
  *this = jsonValue;
}

Connector& Connector::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("CertificateEnrollmentPolicyServerEndpoint"))
  {
    m_certificateEnrollmentPolicyServerEndpoint = jsonValue.GetString("CertificateEnrollmentPolicyServerEndpoint");

    m_certificateEnrollmentPolicyServerEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcInformation"))
  {
    m_vpcInformation = jsonValue.GetObject("VpcInformation");

    m_vpcInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue Connector::Jsonize() const
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

  if(m_certificateEnrollmentPolicyServerEndpointHasBeenSet)
  {
   payload.WithString("CertificateEnrollmentPolicyServerEndpoint", m_certificateEnrollmentPolicyServerEndpoint);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ConnectorStatusMapper::GetNameForConnectorStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", ConnectorStatusReasonMapper::GetNameForConnectorStatusReason(m_statusReason));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_vpcInformationHasBeenSet)
  {
   payload.WithObject("VpcInformation", m_vpcInformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
