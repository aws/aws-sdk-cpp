/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SuccessfulMonitorDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

SuccessfulMonitorDeployment::SuccessfulMonitorDeployment() : 
    m_detailsUriHasBeenSet(false),
    m_status(SignalMapMonitorDeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SuccessfulMonitorDeployment::SuccessfulMonitorDeployment(JsonView jsonValue) : 
    m_detailsUriHasBeenSet(false),
    m_status(SignalMapMonitorDeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SuccessfulMonitorDeployment& SuccessfulMonitorDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detailsUri"))
  {
    m_detailsUri = jsonValue.GetString("detailsUri");

    m_detailsUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SignalMapMonitorDeploymentStatusMapper::GetSignalMapMonitorDeploymentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SuccessfulMonitorDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_detailsUriHasBeenSet)
  {
   payload.WithString("detailsUri", m_detailsUri);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
