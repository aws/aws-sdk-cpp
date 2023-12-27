/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/NeptuneImportOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

NeptuneImportOptions::NeptuneImportOptions() : 
    m_s3ExportPathHasBeenSet(false),
    m_s3ExportKmsKeyIdHasBeenSet(false),
    m_preserveDefaultVertexLabels(false),
    m_preserveDefaultVertexLabelsHasBeenSet(false),
    m_preserveEdgeIds(false),
    m_preserveEdgeIdsHasBeenSet(false)
{
}

NeptuneImportOptions::NeptuneImportOptions(JsonView jsonValue) : 
    m_s3ExportPathHasBeenSet(false),
    m_s3ExportKmsKeyIdHasBeenSet(false),
    m_preserveDefaultVertexLabels(false),
    m_preserveDefaultVertexLabelsHasBeenSet(false),
    m_preserveEdgeIds(false),
    m_preserveEdgeIdsHasBeenSet(false)
{
  *this = jsonValue;
}

NeptuneImportOptions& NeptuneImportOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3ExportPath"))
  {
    m_s3ExportPath = jsonValue.GetString("s3ExportPath");

    m_s3ExportPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3ExportKmsKeyId"))
  {
    m_s3ExportKmsKeyId = jsonValue.GetString("s3ExportKmsKeyId");

    m_s3ExportKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preserveDefaultVertexLabels"))
  {
    m_preserveDefaultVertexLabels = jsonValue.GetBool("preserveDefaultVertexLabels");

    m_preserveDefaultVertexLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preserveEdgeIds"))
  {
    m_preserveEdgeIds = jsonValue.GetBool("preserveEdgeIds");

    m_preserveEdgeIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue NeptuneImportOptions::Jsonize() const
{
  JsonValue payload;

  if(m_s3ExportPathHasBeenSet)
  {
   payload.WithString("s3ExportPath", m_s3ExportPath);

  }

  if(m_s3ExportKmsKeyIdHasBeenSet)
  {
   payload.WithString("s3ExportKmsKeyId", m_s3ExportKmsKeyId);

  }

  if(m_preserveDefaultVertexLabelsHasBeenSet)
  {
   payload.WithBool("preserveDefaultVertexLabels", m_preserveDefaultVertexLabels);

  }

  if(m_preserveEdgeIdsHasBeenSet)
  {
   payload.WithBool("preserveEdgeIds", m_preserveEdgeIds);

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
