/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/Container.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaStore
{
namespace Model
{

Container::Container(JsonView jsonValue)
{
  *this = jsonValue;
}

Container& Container::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");
    m_endpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");
    m_aRNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ContainerStatusMapper::GetContainerStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessLoggingEnabled"))
  {
    m_accessLoggingEnabled = jsonValue.GetBool("AccessLoggingEnabled");
    m_accessLoggingEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue Container::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ContainerStatusMapper::GetNameForContainerStatus(m_status));
  }

  if(m_accessLoggingEnabledHasBeenSet)
  {
   payload.WithBool("AccessLoggingEnabled", m_accessLoggingEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace MediaStore
} // namespace Aws
