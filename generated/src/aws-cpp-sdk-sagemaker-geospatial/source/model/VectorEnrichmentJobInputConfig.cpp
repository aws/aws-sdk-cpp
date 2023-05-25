/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobInputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

VectorEnrichmentJobInputConfig::VectorEnrichmentJobInputConfig() : 
    m_dataSourceConfigHasBeenSet(false),
    m_documentType(VectorEnrichmentJobDocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false)
{
}

VectorEnrichmentJobInputConfig::VectorEnrichmentJobInputConfig(JsonView jsonValue) : 
    m_dataSourceConfigHasBeenSet(false),
    m_documentType(VectorEnrichmentJobDocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

VectorEnrichmentJobInputConfig& VectorEnrichmentJobInputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceConfig"))
  {
    m_dataSourceConfig = jsonValue.GetObject("DataSourceConfig");

    m_dataSourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentType"))
  {
    m_documentType = VectorEnrichmentJobDocumentTypeMapper::GetVectorEnrichmentJobDocumentTypeForName(jsonValue.GetString("DocumentType"));

    m_documentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorEnrichmentJobInputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceConfigHasBeenSet)
  {
   payload.WithObject("DataSourceConfig", m_dataSourceConfig.Jsonize());

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("DocumentType", VectorEnrichmentJobDocumentTypeMapper::GetNameForVectorEnrichmentJobDocumentType(m_documentType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
