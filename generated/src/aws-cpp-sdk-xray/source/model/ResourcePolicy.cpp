/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ResourcePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

ResourcePolicy::ResourcePolicy() : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_policyRevisionIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

ResourcePolicy::ResourcePolicy(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_policyRevisionIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicy& ResourcePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyDocument"))
  {
    m_policyDocument = jsonValue.GetString("PolicyDocument");

    m_policyDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyRevisionId"))
  {
    m_policyRevisionId = jsonValue.GetString("PolicyRevisionId");

    m_policyRevisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("PolicyDocument", m_policyDocument);

  }

  if(m_policyRevisionIdHasBeenSet)
  {
   payload.WithString("PolicyRevisionId", m_policyRevisionId);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
