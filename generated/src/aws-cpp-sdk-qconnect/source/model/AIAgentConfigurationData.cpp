/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIAgentConfigurationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

AIAgentConfigurationData::AIAgentConfigurationData(JsonView jsonValue)
{
  *this = jsonValue;
}

AIAgentConfigurationData& AIAgentConfigurationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aiAgentId"))
  {
    m_aiAgentId = jsonValue.GetString("aiAgentId");
    m_aiAgentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AIAgentConfigurationData::Jsonize() const
{
  JsonValue payload;

  if(m_aiAgentIdHasBeenSet)
  {
   payload.WithString("aiAgentId", m_aiAgentId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
