/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

DataIntegrationFlowSource::DataIntegrationFlowSource(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowSource& DataIntegrationFlowSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = DataIntegrationFlowSourceTypeMapper::GetDataIntegrationFlowSourceTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = jsonValue.GetString("sourceName");
    m_sourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Source"))
  {
    m_s3Source = jsonValue.GetObject("s3Source");
    m_s3SourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetSource"))
  {
    m_datasetSource = jsonValue.GetObject("datasetSource");
    m_datasetSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", DataIntegrationFlowSourceTypeMapper::GetNameForDataIntegrationFlowSourceType(m_sourceType));
  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", m_sourceName);

  }

  if(m_s3SourceHasBeenSet)
  {
   payload.WithObject("s3Source", m_s3Source.Jsonize());

  }

  if(m_datasetSourceHasBeenSet)
  {
   payload.WithObject("datasetSource", m_datasetSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
