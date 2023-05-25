/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ServiceQuotaExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

ServiceQuotaExceededException::ServiceQuotaExceededException() : 
    m_messageHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_serviceCode(ServiceCode::NOT_SET),
    m_serviceCodeHasBeenSet(false)
{
}

ServiceQuotaExceededException::ServiceQuotaExceededException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_serviceCode(ServiceCode::NOT_SET),
    m_serviceCodeHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceQuotaExceededException& ServiceQuotaExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quotaCode"))
  {
    m_quotaCode = jsonValue.GetString("quotaCode");

    m_quotaCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("resourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceCode"))
  {
    m_serviceCode = ServiceCodeMapper::GetServiceCodeForName(jsonValue.GetString("serviceCode"));

    m_serviceCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceQuotaExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("quotaCode", m_quotaCode);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("resourceIdentifier", m_resourceIdentifier);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", ServiceCodeMapper::GetNameForServiceCode(m_serviceCode));
  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
