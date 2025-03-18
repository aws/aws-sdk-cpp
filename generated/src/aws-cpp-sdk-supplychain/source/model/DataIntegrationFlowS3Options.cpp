/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowS3Options.h>
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

DataIntegrationFlowS3Options::DataIntegrationFlowS3Options(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowS3Options& DataIntegrationFlowS3Options::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = DataIntegrationFlowFileTypeMapper::GetDataIntegrationFlowFileTypeForName(jsonValue.GetString("fileType"));
    m_fileTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowS3Options::Jsonize() const
{
  JsonValue payload;

  if(m_fileTypeHasBeenSet)
  {
   payload.WithString("fileType", DataIntegrationFlowFileTypeMapper::GetNameForDataIntegrationFlowFileType(m_fileType));
  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
