/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/InputConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

InputConfigurationRequest::InputConfigurationRequest() : 
    m_inputPort(0),
    m_inputPortHasBeenSet(false),
    m_interfaceHasBeenSet(false)
{
}

InputConfigurationRequest::InputConfigurationRequest(JsonView jsonValue) : 
    m_inputPort(0),
    m_inputPortHasBeenSet(false),
    m_interfaceHasBeenSet(false)
{
  *this = jsonValue;
}

InputConfigurationRequest& InputConfigurationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputPort"))
  {
    m_inputPort = jsonValue.GetInteger("inputPort");

    m_inputPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interface"))
  {
    m_interface = jsonValue.GetObject("interface");

    m_interfaceHasBeenSet = true;
  }

  return *this;
}

JsonValue InputConfigurationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_inputPortHasBeenSet)
  {
   payload.WithInteger("inputPort", m_inputPort);

  }

  if(m_interfaceHasBeenSet)
  {
   payload.WithObject("interface", m_interface.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
