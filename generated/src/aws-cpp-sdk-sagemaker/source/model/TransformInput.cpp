/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformInput.h>
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

TransformInput::TransformInput() : 
    m_dataSourceHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_splitType(SplitType::NOT_SET),
    m_splitTypeHasBeenSet(false)
{
}

TransformInput::TransformInput(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_splitType(SplitType::NOT_SET),
    m_splitTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TransformInput& TransformInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = CompressionTypeMapper::GetCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SplitType"))
  {
    m_splitType = SplitTypeMapper::GetSplitTypeForName(jsonValue.GetString("SplitType"));

    m_splitTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformInput::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", CompressionTypeMapper::GetNameForCompressionType(m_compressionType));
  }

  if(m_splitTypeHasBeenSet)
  {
   payload.WithString("SplitType", SplitTypeMapper::GetNameForSplitType(m_splitType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
