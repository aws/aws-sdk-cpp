/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/HibernationOptionsRequest.h>
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

HibernationOptionsRequest::HibernationOptionsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

HibernationOptionsRequest& HibernationOptionsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Configured"))
  {
    m_configured = jsonValue.GetBool("Configured");
    m_configuredHasBeenSet = true;
  }
  return *this;
}

JsonValue HibernationOptionsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_configuredHasBeenSet)
  {
   payload.WithBool("Configured", m_configured);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
