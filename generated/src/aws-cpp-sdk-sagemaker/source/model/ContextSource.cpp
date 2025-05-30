﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ContextSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ContextSource::ContextSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ContextSource& ContextSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceUri"))
  {
    m_sourceUri = jsonValue.GetString("SourceUri");
    m_sourceUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceId"))
  {
    m_sourceId = jsonValue.GetString("SourceId");
    m_sourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceUriHasBeenSet)
  {
   payload.WithString("SourceUri", m_sourceUri);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("SourceId", m_sourceId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
