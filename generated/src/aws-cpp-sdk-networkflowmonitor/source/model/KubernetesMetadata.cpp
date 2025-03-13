/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/KubernetesMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

KubernetesMetadata::KubernetesMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

KubernetesMetadata& KubernetesMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("localServiceName"))
  {
    m_localServiceName = jsonValue.GetString("localServiceName");
    m_localServiceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localPodName"))
  {
    m_localPodName = jsonValue.GetString("localPodName");
    m_localPodNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localPodNamespace"))
  {
    m_localPodNamespace = jsonValue.GetString("localPodNamespace");
    m_localPodNamespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteServiceName"))
  {
    m_remoteServiceName = jsonValue.GetString("remoteServiceName");
    m_remoteServiceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remotePodName"))
  {
    m_remotePodName = jsonValue.GetString("remotePodName");
    m_remotePodNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remotePodNamespace"))
  {
    m_remotePodNamespace = jsonValue.GetString("remotePodNamespace");
    m_remotePodNamespaceHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_localServiceNameHasBeenSet)
  {
   payload.WithString("localServiceName", m_localServiceName);

  }

  if(m_localPodNameHasBeenSet)
  {
   payload.WithString("localPodName", m_localPodName);

  }

  if(m_localPodNamespaceHasBeenSet)
  {
   payload.WithString("localPodNamespace", m_localPodNamespace);

  }

  if(m_remoteServiceNameHasBeenSet)
  {
   payload.WithString("remoteServiceName", m_remoteServiceName);

  }

  if(m_remotePodNameHasBeenSet)
  {
   payload.WithString("remotePodName", m_remotePodName);

  }

  if(m_remotePodNamespaceHasBeenSet)
  {
   payload.WithString("remotePodNamespace", m_remotePodNamespace);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
