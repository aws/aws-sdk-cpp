/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/Nameserver.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

Nameserver::Nameserver() : 
    m_nameHasBeenSet(false),
    m_glueIpsHasBeenSet(false)
{
}

Nameserver::Nameserver(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_glueIpsHasBeenSet(false)
{
  *this = jsonValue;
}

Nameserver& Nameserver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlueIps"))
  {
    Aws::Utils::Array<JsonView> glueIpsJsonList = jsonValue.GetArray("GlueIps");
    for(unsigned glueIpsIndex = 0; glueIpsIndex < glueIpsJsonList.GetLength(); ++glueIpsIndex)
    {
      m_glueIps.push_back(glueIpsJsonList[glueIpsIndex].AsString());
    }
    m_glueIpsHasBeenSet = true;
  }

  return *this;
}

JsonValue Nameserver::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_glueIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> glueIpsJsonList(m_glueIps.size());
   for(unsigned glueIpsIndex = 0; glueIpsIndex < glueIpsJsonList.GetLength(); ++glueIpsIndex)
   {
     glueIpsJsonList[glueIpsIndex].AsString(m_glueIps[glueIpsIndex]);
   }
   payload.WithArray("GlueIps", std::move(glueIpsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
