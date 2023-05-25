/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DataSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

DataSourceConfiguration::DataSourceConfiguration() : 
    m_dataSourceS3ConfigurationHasBeenSet(false),
    m_csvConfigurationHasBeenSet(false),
    m_dataFormat(BatchLoadDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false)
{
}

DataSourceConfiguration::DataSourceConfiguration(JsonView jsonValue) : 
    m_dataSourceS3ConfigurationHasBeenSet(false),
    m_csvConfigurationHasBeenSet(false),
    m_dataFormat(BatchLoadDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceConfiguration& DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceS3Configuration"))
  {
    m_dataSourceS3Configuration = jsonValue.GetObject("DataSourceS3Configuration");

    m_dataSourceS3ConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CsvConfiguration"))
  {
    m_csvConfiguration = jsonValue.GetObject("CsvConfiguration");

    m_csvConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = BatchLoadDataFormatMapper::GetBatchLoadDataFormatForName(jsonValue.GetString("DataFormat"));

    m_dataFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceS3ConfigurationHasBeenSet)
  {
   payload.WithObject("DataSourceS3Configuration", m_dataSourceS3Configuration.Jsonize());

  }

  if(m_csvConfigurationHasBeenSet)
  {
   payload.WithObject("CsvConfiguration", m_csvConfiguration.Jsonize());

  }

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", BatchLoadDataFormatMapper::GetNameForBatchLoadDataFormat(m_dataFormat));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
