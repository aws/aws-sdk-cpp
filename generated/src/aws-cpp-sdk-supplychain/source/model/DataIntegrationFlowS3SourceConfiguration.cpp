/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowS3SourceConfiguration.h>
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

DataIntegrationFlowS3SourceConfiguration::DataIntegrationFlowS3SourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowS3SourceConfiguration& DataIntegrationFlowS3SourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");
    m_bucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");
    m_prefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("options"))
  {
    m_options = jsonValue.GetObject("options");
    m_optionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowS3SourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("options", m_options.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
