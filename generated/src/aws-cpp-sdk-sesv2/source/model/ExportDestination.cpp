/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ExportDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ExportDestination::ExportDestination() : 
    m_dataFormat(DataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_s3UrlHasBeenSet(false)
{
}

ExportDestination::ExportDestination(JsonView jsonValue) : 
    m_dataFormat(DataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_s3UrlHasBeenSet(false)
{
  *this = jsonValue;
}

ExportDestination& ExportDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DataFormatMapper::GetDataFormatForName(jsonValue.GetString("DataFormat"));

    m_dataFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");

    m_s3UrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportDestination::Jsonize() const
{
  JsonValue payload;

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", DataFormatMapper::GetNameForDataFormat(m_dataFormat));
  }

  if(m_s3UrlHasBeenSet)
  {
   payload.WithString("S3Url", m_s3Url);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
