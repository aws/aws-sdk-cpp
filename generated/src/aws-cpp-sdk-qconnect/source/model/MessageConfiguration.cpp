/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageConfiguration.h>
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

MessageConfiguration::MessageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageConfiguration& MessageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("generateFillerMessage"))
  {
    m_generateFillerMessage = jsonValue.GetBool("generateFillerMessage");
    m_generateFillerMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_generateFillerMessageHasBeenSet)
  {
   payload.WithBool("generateFillerMessage", m_generateFillerMessage);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
