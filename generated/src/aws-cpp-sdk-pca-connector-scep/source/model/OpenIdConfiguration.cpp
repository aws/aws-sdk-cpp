/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/model/OpenIdConfiguration.h>
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

OpenIdConfiguration::OpenIdConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenIdConfiguration& OpenIdConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");
    m_issuerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Audience"))
  {
    m_audience = jsonValue.GetString("Audience");
    m_audienceHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenIdConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_audienceHasBeenSet)
  {
   payload.WithString("Audience", m_audience);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
