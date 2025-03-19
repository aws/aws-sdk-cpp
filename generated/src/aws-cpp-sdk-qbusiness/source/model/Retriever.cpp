/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Retriever.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

Retriever::Retriever(JsonView jsonValue)
{
  *this = jsonValue;
}

Retriever& Retriever::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retrieverId"))
  {
    m_retrieverId = jsonValue.GetString("retrieverId");
    m_retrieverIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = RetrieverTypeMapper::GetRetrieverTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = RetrieverStatusMapper::GetRetrieverStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Retriever::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_retrieverIdHasBeenSet)
  {
   payload.WithString("retrieverId", m_retrieverId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RetrieverTypeMapper::GetNameForRetrieverType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RetrieverStatusMapper::GetNameForRetrieverStatus(m_status));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
