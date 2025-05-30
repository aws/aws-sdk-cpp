﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/HumanLoopConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

HumanLoopConfig::HumanLoopConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

HumanLoopConfig& HumanLoopConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLoopName"))
  {
    m_humanLoopName = jsonValue.GetString("HumanLoopName");
    m_humanLoopNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowDefinitionArn"))
  {
    m_flowDefinitionArn = jsonValue.GetString("FlowDefinitionArn");
    m_flowDefinitionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataAttributes"))
  {
    m_dataAttributes = jsonValue.GetObject("DataAttributes");
    m_dataAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue HumanLoopConfig::Jsonize() const
{
  JsonValue payload;

  if(m_humanLoopNameHasBeenSet)
  {
   payload.WithString("HumanLoopName", m_humanLoopName);

  }

  if(m_flowDefinitionArnHasBeenSet)
  {
   payload.WithString("FlowDefinitionArn", m_flowDefinitionArn);

  }

  if(m_dataAttributesHasBeenSet)
  {
   payload.WithObject("DataAttributes", m_dataAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
