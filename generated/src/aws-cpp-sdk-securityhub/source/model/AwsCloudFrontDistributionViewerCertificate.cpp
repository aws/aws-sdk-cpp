/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionViewerCertificate.h>
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

AwsCloudFrontDistributionViewerCertificate::AwsCloudFrontDistributionViewerCertificate() : 
    m_acmCertificateArnHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_certificateSourceHasBeenSet(false),
    m_cloudFrontDefaultCertificate(false),
    m_cloudFrontDefaultCertificateHasBeenSet(false),
    m_iamCertificateIdHasBeenSet(false),
    m_minimumProtocolVersionHasBeenSet(false),
    m_sslSupportMethodHasBeenSet(false)
{
}

AwsCloudFrontDistributionViewerCertificate::AwsCloudFrontDistributionViewerCertificate(JsonView jsonValue) : 
    m_acmCertificateArnHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_certificateSourceHasBeenSet(false),
    m_cloudFrontDefaultCertificate(false),
    m_cloudFrontDefaultCertificateHasBeenSet(false),
    m_iamCertificateIdHasBeenSet(false),
    m_minimumProtocolVersionHasBeenSet(false),
    m_sslSupportMethodHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionViewerCertificate& AwsCloudFrontDistributionViewerCertificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcmCertificateArn"))
  {
    m_acmCertificateArn = jsonValue.GetString("AcmCertificateArn");

    m_acmCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

    m_certificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateSource"))
  {
    m_certificateSource = jsonValue.GetString("CertificateSource");

    m_certificateSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudFrontDefaultCertificate"))
  {
    m_cloudFrontDefaultCertificate = jsonValue.GetBool("CloudFrontDefaultCertificate");

    m_cloudFrontDefaultCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamCertificateId"))
  {
    m_iamCertificateId = jsonValue.GetString("IamCertificateId");

    m_iamCertificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumProtocolVersion"))
  {
    m_minimumProtocolVersion = jsonValue.GetString("MinimumProtocolVersion");

    m_minimumProtocolVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslSupportMethod"))
  {
    m_sslSupportMethod = jsonValue.GetString("SslSupportMethod");

    m_sslSupportMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionViewerCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_acmCertificateArnHasBeenSet)
  {
   payload.WithString("AcmCertificateArn", m_acmCertificateArn);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_certificateSourceHasBeenSet)
  {
   payload.WithString("CertificateSource", m_certificateSource);

  }

  if(m_cloudFrontDefaultCertificateHasBeenSet)
  {
   payload.WithBool("CloudFrontDefaultCertificate", m_cloudFrontDefaultCertificate);

  }

  if(m_iamCertificateIdHasBeenSet)
  {
   payload.WithString("IamCertificateId", m_iamCertificateId);

  }

  if(m_minimumProtocolVersionHasBeenSet)
  {
   payload.WithString("MinimumProtocolVersion", m_minimumProtocolVersion);

  }

  if(m_sslSupportMethodHasBeenSet)
  {
   payload.WithString("SslSupportMethod", m_sslSupportMethod);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
