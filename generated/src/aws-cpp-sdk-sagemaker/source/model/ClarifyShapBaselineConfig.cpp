/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyShapBaselineConfig.h>
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

ClarifyShapBaselineConfig::ClarifyShapBaselineConfig() : 
    m_mimeTypeHasBeenSet(false),
    m_shapBaselineHasBeenSet(false),
    m_shapBaselineUriHasBeenSet(false)
{
}

ClarifyShapBaselineConfig::ClarifyShapBaselineConfig(JsonView jsonValue) : 
    m_mimeTypeHasBeenSet(false),
    m_shapBaselineHasBeenSet(false),
    m_shapBaselineUriHasBeenSet(false)
{
  *this = jsonValue;
}

ClarifyShapBaselineConfig& ClarifyShapBaselineConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MimeType"))
  {
    m_mimeType = jsonValue.GetString("MimeType");

    m_mimeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShapBaseline"))
  {
    m_shapBaseline = jsonValue.GetString("ShapBaseline");

    m_shapBaselineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShapBaselineUri"))
  {
    m_shapBaselineUri = jsonValue.GetString("ShapBaselineUri");

    m_shapBaselineUriHasBeenSet = true;
  }

  return *this;
}

JsonValue ClarifyShapBaselineConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mimeTypeHasBeenSet)
  {
   payload.WithString("MimeType", m_mimeType);

  }

  if(m_shapBaselineHasBeenSet)
  {
   payload.WithString("ShapBaseline", m_shapBaseline);

  }

  if(m_shapBaselineUriHasBeenSet)
  {
   payload.WithString("ShapBaselineUri", m_shapBaselineUri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
