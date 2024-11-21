/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/InputSwitchConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

InputSwitchConfiguration::InputSwitchConfiguration() : 
    m_mQCSInputSwitching(false),
    m_mQCSInputSwitchingHasBeenSet(false)
{
}

InputSwitchConfiguration::InputSwitchConfiguration(JsonView jsonValue)
  : InputSwitchConfiguration()
{
  *this = jsonValue;
}

InputSwitchConfiguration& InputSwitchConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MQCSInputSwitching"))
  {
    m_mQCSInputSwitching = jsonValue.GetBool("MQCSInputSwitching");

    m_mQCSInputSwitchingHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSwitchConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_mQCSInputSwitchingHasBeenSet)
  {
   payload.WithBool("MQCSInputSwitching", m_mQCSInputSwitching);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
