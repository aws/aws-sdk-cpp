/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/ReportConfiguration.h>
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

ReportConfiguration::ReportConfiguration() : 
    m_reportS3ConfigurationHasBeenSet(false)
{
}

ReportConfiguration::ReportConfiguration(JsonView jsonValue) : 
    m_reportS3ConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ReportConfiguration& ReportConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReportS3Configuration"))
  {
    m_reportS3Configuration = jsonValue.GetObject("ReportS3Configuration");

    m_reportS3ConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_reportS3ConfigurationHasBeenSet)
  {
   payload.WithObject("ReportS3Configuration", m_reportS3Configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
