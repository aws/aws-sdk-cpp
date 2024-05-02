/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ScheduledActionAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

ScheduledActionAssociation::ScheduledActionAssociation() : 
    m_namespaceNameHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false)
{
}

ScheduledActionAssociation::ScheduledActionAssociation(JsonView jsonValue) : 
    m_namespaceNameHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledActionAssociation& ScheduledActionAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledActionName"))
  {
    m_scheduledActionName = jsonValue.GetString("scheduledActionName");

    m_scheduledActionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledActionAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_scheduledActionNameHasBeenSet)
  {
   payload.WithString("scheduledActionName", m_scheduledActionName);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
