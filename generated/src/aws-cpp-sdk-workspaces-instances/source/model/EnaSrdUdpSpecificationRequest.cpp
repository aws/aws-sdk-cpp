/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/EnaSrdUdpSpecificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

EnaSrdUdpSpecificationRequest::EnaSrdUdpSpecificationRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

EnaSrdUdpSpecificationRequest& EnaSrdUdpSpecificationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnaSrdUdpEnabled"))
  {
    m_enaSrdUdpEnabled = jsonValue.GetBool("EnaSrdUdpEnabled");
    m_enaSrdUdpEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue EnaSrdUdpSpecificationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_enaSrdUdpEnabledHasBeenSet)
  {
   payload.WithBool("EnaSrdUdpEnabled", m_enaSrdUdpEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
