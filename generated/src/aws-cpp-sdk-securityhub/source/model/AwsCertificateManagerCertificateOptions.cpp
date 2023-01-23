/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCertificateManagerCertificateOptions.h>
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

AwsCertificateManagerCertificateOptions::AwsCertificateManagerCertificateOptions() : 
    m_certificateTransparencyLoggingPreferenceHasBeenSet(false)
{
}

AwsCertificateManagerCertificateOptions::AwsCertificateManagerCertificateOptions(JsonView jsonValue) : 
    m_certificateTransparencyLoggingPreferenceHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCertificateManagerCertificateOptions& AwsCertificateManagerCertificateOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateTransparencyLoggingPreference"))
  {
    m_certificateTransparencyLoggingPreference = jsonValue.GetString("CertificateTransparencyLoggingPreference");

    m_certificateTransparencyLoggingPreferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCertificateManagerCertificateOptions::Jsonize() const
{
  JsonValue payload;

  if(m_certificateTransparencyLoggingPreferenceHasBeenSet)
  {
   payload.WithString("CertificateTransparencyLoggingPreference", m_certificateTransparencyLoggingPreference);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
