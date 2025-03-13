/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/OutputHeaderConfiguration.h>
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

OutputHeaderConfiguration::OutputHeaderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OutputHeaderConfiguration& OutputHeaderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PublishMQCS"))
  {
    m_publishMQCS = jsonValue.GetBool("PublishMQCS");
    m_publishMQCSHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputHeaderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_publishMQCSHasBeenSet)
  {
   payload.WithBool("PublishMQCS", m_publishMQCS);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
