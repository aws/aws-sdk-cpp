﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GenerativeReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

GenerativeReference::GenerativeReference(JsonView jsonValue)
{
  *this = jsonValue;
}

GenerativeReference& GenerativeReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generationId"))
  {
    m_generationId = jsonValue.GetString("generationId");
    m_generationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerativeReference::Jsonize() const
{
  JsonValue payload;

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_generationIdHasBeenSet)
  {
   payload.WithString("generationId", m_generationId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
