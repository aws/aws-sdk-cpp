/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/APIKeySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

APIKeySummary::APIKeySummary() : 
    m_tokenDomainsHasBeenSet(false),
    m_aPIKeyHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

APIKeySummary::APIKeySummary(JsonView jsonValue) : 
    m_tokenDomainsHasBeenSet(false),
    m_aPIKeyHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

APIKeySummary& APIKeySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TokenDomains"))
  {
    Aws::Utils::Array<JsonView> tokenDomainsJsonList = jsonValue.GetArray("TokenDomains");
    for(unsigned tokenDomainsIndex = 0; tokenDomainsIndex < tokenDomainsJsonList.GetLength(); ++tokenDomainsIndex)
    {
      m_tokenDomains.push_back(tokenDomainsJsonList[tokenDomainsIndex].AsString());
    }
    m_tokenDomainsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("APIKey"))
  {
    m_aPIKey = jsonValue.GetString("APIKey");

    m_aPIKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue APIKeySummary::Jsonize() const
{
  JsonValue payload;

  if(m_tokenDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokenDomainsJsonList(m_tokenDomains.size());
   for(unsigned tokenDomainsIndex = 0; tokenDomainsIndex < tokenDomainsJsonList.GetLength(); ++tokenDomainsIndex)
   {
     tokenDomainsJsonList[tokenDomainsIndex].AsString(m_tokenDomains[tokenDomainsIndex]);
   }
   payload.WithArray("TokenDomains", std::move(tokenDomainsJsonList));

  }

  if(m_aPIKeyHasBeenSet)
  {
   payload.WithString("APIKey", m_aPIKey);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
