/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OfflineStoreConfig.h>
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

OfflineStoreConfig::OfflineStoreConfig() : 
    m_s3StorageConfigHasBeenSet(false),
    m_disableGlueTableCreation(false),
    m_disableGlueTableCreationHasBeenSet(false),
    m_dataCatalogConfigHasBeenSet(false),
    m_tableFormat(TableFormat::NOT_SET),
    m_tableFormatHasBeenSet(false)
{
}

OfflineStoreConfig::OfflineStoreConfig(JsonView jsonValue) : 
    m_s3StorageConfigHasBeenSet(false),
    m_disableGlueTableCreation(false),
    m_disableGlueTableCreationHasBeenSet(false),
    m_dataCatalogConfigHasBeenSet(false),
    m_tableFormat(TableFormat::NOT_SET),
    m_tableFormatHasBeenSet(false)
{
  *this = jsonValue;
}

OfflineStoreConfig& OfflineStoreConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3StorageConfig"))
  {
    m_s3StorageConfig = jsonValue.GetObject("S3StorageConfig");

    m_s3StorageConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableGlueTableCreation"))
  {
    m_disableGlueTableCreation = jsonValue.GetBool("DisableGlueTableCreation");

    m_disableGlueTableCreationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataCatalogConfig"))
  {
    m_dataCatalogConfig = jsonValue.GetObject("DataCatalogConfig");

    m_dataCatalogConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableFormat"))
  {
    m_tableFormat = TableFormatMapper::GetTableFormatForName(jsonValue.GetString("TableFormat"));

    m_tableFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue OfflineStoreConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3StorageConfigHasBeenSet)
  {
   payload.WithObject("S3StorageConfig", m_s3StorageConfig.Jsonize());

  }

  if(m_disableGlueTableCreationHasBeenSet)
  {
   payload.WithBool("DisableGlueTableCreation", m_disableGlueTableCreation);

  }

  if(m_dataCatalogConfigHasBeenSet)
  {
   payload.WithObject("DataCatalogConfig", m_dataCatalogConfig.Jsonize());

  }

  if(m_tableFormatHasBeenSet)
  {
   payload.WithString("TableFormat", TableFormatMapper::GetNameForTableFormat(m_tableFormat));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
