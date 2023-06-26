/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/LogicalResourceId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

LogicalResourceId::LogicalResourceId() : 
    m_eksSourceNameHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_logicalStackNameHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_terraformSourceNameHasBeenSet(false)
{
}

LogicalResourceId::LogicalResourceId(JsonView jsonValue) : 
    m_eksSourceNameHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_logicalStackNameHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_terraformSourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

LogicalResourceId& LogicalResourceId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eksSourceName"))
  {
    m_eksSourceName = jsonValue.GetString("eksSourceName");

    m_eksSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logicalStackName"))
  {
    m_logicalStackName = jsonValue.GetString("logicalStackName");

    m_logicalStackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("resourceGroupName");

    m_resourceGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terraformSourceName"))
  {
    m_terraformSourceName = jsonValue.GetString("terraformSourceName");

    m_terraformSourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LogicalResourceId::Jsonize() const
{
  JsonValue payload;

  if(m_eksSourceNameHasBeenSet)
  {
   payload.WithString("eksSourceName", m_eksSourceName);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_logicalStackNameHasBeenSet)
  {
   payload.WithString("logicalStackName", m_logicalStackName);

  }

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("resourceGroupName", m_resourceGroupName);

  }

  if(m_terraformSourceNameHasBeenSet)
  {
   payload.WithString("terraformSourceName", m_terraformSourceName);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
