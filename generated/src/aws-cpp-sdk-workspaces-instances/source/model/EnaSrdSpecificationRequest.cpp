/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/EnaSrdSpecificationRequest.h>
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

EnaSrdSpecificationRequest::EnaSrdSpecificationRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

EnaSrdSpecificationRequest& EnaSrdSpecificationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnaSrdEnabled"))
  {
    m_enaSrdEnabled = jsonValue.GetBool("EnaSrdEnabled");
    m_enaSrdEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnaSrdUdpSpecification"))
  {
    m_enaSrdUdpSpecification = jsonValue.GetObject("EnaSrdUdpSpecification");
    m_enaSrdUdpSpecificationHasBeenSet = true;
  }
  return *this;
}

JsonValue EnaSrdSpecificationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_enaSrdEnabledHasBeenSet)
  {
   payload.WithBool("EnaSrdEnabled", m_enaSrdEnabled);

  }

  if(m_enaSrdUdpSpecificationHasBeenSet)
  {
   payload.WithObject("EnaSrdUdpSpecification", m_enaSrdUdpSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
