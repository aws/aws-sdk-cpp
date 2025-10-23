/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/TrustStoreConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RTBFabric
{
namespace Model
{

TrustStoreConfiguration::TrustStoreConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TrustStoreConfiguration& TrustStoreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateAuthorityCertificates"))
  {
    Aws::Utils::Array<JsonView> certificateAuthorityCertificatesJsonList = jsonValue.GetArray("certificateAuthorityCertificates");
    for(unsigned certificateAuthorityCertificatesIndex = 0; certificateAuthorityCertificatesIndex < certificateAuthorityCertificatesJsonList.GetLength(); ++certificateAuthorityCertificatesIndex)
    {
      m_certificateAuthorityCertificates.push_back(certificateAuthorityCertificatesJsonList[certificateAuthorityCertificatesIndex].AsString());
    }
    m_certificateAuthorityCertificatesHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustStoreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityCertificatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateAuthorityCertificatesJsonList(m_certificateAuthorityCertificates.size());
   for(unsigned certificateAuthorityCertificatesIndex = 0; certificateAuthorityCertificatesIndex < certificateAuthorityCertificatesJsonList.GetLength(); ++certificateAuthorityCertificatesIndex)
   {
     certificateAuthorityCertificatesJsonList[certificateAuthorityCertificatesIndex].AsString(m_certificateAuthorityCertificates[certificateAuthorityCertificatesIndex]);
   }
   payload.WithArray("certificateAuthorityCertificates", std::move(certificateAuthorityCertificatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
