/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DataModelConfiguration.h>
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

DataModelConfiguration::DataModelConfiguration() : 
    m_dataModelHasBeenSet(false),
    m_dataModelS3ConfigurationHasBeenSet(false)
{
}

DataModelConfiguration::DataModelConfiguration(JsonView jsonValue) : 
    m_dataModelHasBeenSet(false),
    m_dataModelS3ConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DataModelConfiguration& DataModelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataModel"))
  {
    m_dataModel = jsonValue.GetObject("DataModel");

    m_dataModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataModelS3Configuration"))
  {
    m_dataModelS3Configuration = jsonValue.GetObject("DataModelS3Configuration");

    m_dataModelS3ConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataModelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataModelHasBeenSet)
  {
   payload.WithObject("DataModel", m_dataModel.Jsonize());

  }

  if(m_dataModelS3ConfigurationHasBeenSet)
  {
   payload.WithObject("DataModelS3Configuration", m_dataModelS3Configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
