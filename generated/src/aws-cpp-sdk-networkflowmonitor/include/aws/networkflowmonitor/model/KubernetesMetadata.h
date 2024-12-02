/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>Meta data about Kubernetes resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/KubernetesMetadata">AWS
   * API Reference</a></p>
   */
  class KubernetesMetadata
  {
  public:
    AWS_NETWORKFLOWMONITOR_API KubernetesMetadata();
    AWS_NETWORKFLOWMONITOR_API KubernetesMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API KubernetesMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service name for a local resource.</p>
     */
    inline const Aws::String& GetLocalServiceName() const{ return m_localServiceName; }
    inline bool LocalServiceNameHasBeenSet() const { return m_localServiceNameHasBeenSet; }
    inline void SetLocalServiceName(const Aws::String& value) { m_localServiceNameHasBeenSet = true; m_localServiceName = value; }
    inline void SetLocalServiceName(Aws::String&& value) { m_localServiceNameHasBeenSet = true; m_localServiceName = std::move(value); }
    inline void SetLocalServiceName(const char* value) { m_localServiceNameHasBeenSet = true; m_localServiceName.assign(value); }
    inline KubernetesMetadata& WithLocalServiceName(const Aws::String& value) { SetLocalServiceName(value); return *this;}
    inline KubernetesMetadata& WithLocalServiceName(Aws::String&& value) { SetLocalServiceName(std::move(value)); return *this;}
    inline KubernetesMetadata& WithLocalServiceName(const char* value) { SetLocalServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pod for a local resource.</p>
     */
    inline const Aws::String& GetLocalPodName() const{ return m_localPodName; }
    inline bool LocalPodNameHasBeenSet() const { return m_localPodNameHasBeenSet; }
    inline void SetLocalPodName(const Aws::String& value) { m_localPodNameHasBeenSet = true; m_localPodName = value; }
    inline void SetLocalPodName(Aws::String&& value) { m_localPodNameHasBeenSet = true; m_localPodName = std::move(value); }
    inline void SetLocalPodName(const char* value) { m_localPodNameHasBeenSet = true; m_localPodName.assign(value); }
    inline KubernetesMetadata& WithLocalPodName(const Aws::String& value) { SetLocalPodName(value); return *this;}
    inline KubernetesMetadata& WithLocalPodName(Aws::String&& value) { SetLocalPodName(std::move(value)); return *this;}
    inline KubernetesMetadata& WithLocalPodName(const char* value) { SetLocalPodName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the pod for a local resource.</p>
     */
    inline const Aws::String& GetLocalPodNamespace() const{ return m_localPodNamespace; }
    inline bool LocalPodNamespaceHasBeenSet() const { return m_localPodNamespaceHasBeenSet; }
    inline void SetLocalPodNamespace(const Aws::String& value) { m_localPodNamespaceHasBeenSet = true; m_localPodNamespace = value; }
    inline void SetLocalPodNamespace(Aws::String&& value) { m_localPodNamespaceHasBeenSet = true; m_localPodNamespace = std::move(value); }
    inline void SetLocalPodNamespace(const char* value) { m_localPodNamespaceHasBeenSet = true; m_localPodNamespace.assign(value); }
    inline KubernetesMetadata& WithLocalPodNamespace(const Aws::String& value) { SetLocalPodNamespace(value); return *this;}
    inline KubernetesMetadata& WithLocalPodNamespace(Aws::String&& value) { SetLocalPodNamespace(std::move(value)); return *this;}
    inline KubernetesMetadata& WithLocalPodNamespace(const char* value) { SetLocalPodNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service name for a remote resource.</p>
     */
    inline const Aws::String& GetRemoteServiceName() const{ return m_remoteServiceName; }
    inline bool RemoteServiceNameHasBeenSet() const { return m_remoteServiceNameHasBeenSet; }
    inline void SetRemoteServiceName(const Aws::String& value) { m_remoteServiceNameHasBeenSet = true; m_remoteServiceName = value; }
    inline void SetRemoteServiceName(Aws::String&& value) { m_remoteServiceNameHasBeenSet = true; m_remoteServiceName = std::move(value); }
    inline void SetRemoteServiceName(const char* value) { m_remoteServiceNameHasBeenSet = true; m_remoteServiceName.assign(value); }
    inline KubernetesMetadata& WithRemoteServiceName(const Aws::String& value) { SetRemoteServiceName(value); return *this;}
    inline KubernetesMetadata& WithRemoteServiceName(Aws::String&& value) { SetRemoteServiceName(std::move(value)); return *this;}
    inline KubernetesMetadata& WithRemoteServiceName(const char* value) { SetRemoteServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pod for a remote resource.</p>
     */
    inline const Aws::String& GetRemotePodName() const{ return m_remotePodName; }
    inline bool RemotePodNameHasBeenSet() const { return m_remotePodNameHasBeenSet; }
    inline void SetRemotePodName(const Aws::String& value) { m_remotePodNameHasBeenSet = true; m_remotePodName = value; }
    inline void SetRemotePodName(Aws::String&& value) { m_remotePodNameHasBeenSet = true; m_remotePodName = std::move(value); }
    inline void SetRemotePodName(const char* value) { m_remotePodNameHasBeenSet = true; m_remotePodName.assign(value); }
    inline KubernetesMetadata& WithRemotePodName(const Aws::String& value) { SetRemotePodName(value); return *this;}
    inline KubernetesMetadata& WithRemotePodName(Aws::String&& value) { SetRemotePodName(std::move(value)); return *this;}
    inline KubernetesMetadata& WithRemotePodName(const char* value) { SetRemotePodName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the pod for a remote resource.</p>
     */
    inline const Aws::String& GetRemotePodNamespace() const{ return m_remotePodNamespace; }
    inline bool RemotePodNamespaceHasBeenSet() const { return m_remotePodNamespaceHasBeenSet; }
    inline void SetRemotePodNamespace(const Aws::String& value) { m_remotePodNamespaceHasBeenSet = true; m_remotePodNamespace = value; }
    inline void SetRemotePodNamespace(Aws::String&& value) { m_remotePodNamespaceHasBeenSet = true; m_remotePodNamespace = std::move(value); }
    inline void SetRemotePodNamespace(const char* value) { m_remotePodNamespaceHasBeenSet = true; m_remotePodNamespace.assign(value); }
    inline KubernetesMetadata& WithRemotePodNamespace(const Aws::String& value) { SetRemotePodNamespace(value); return *this;}
    inline KubernetesMetadata& WithRemotePodNamespace(Aws::String&& value) { SetRemotePodNamespace(std::move(value)); return *this;}
    inline KubernetesMetadata& WithRemotePodNamespace(const char* value) { SetRemotePodNamespace(value); return *this;}
    ///@}
  private:

    Aws::String m_localServiceName;
    bool m_localServiceNameHasBeenSet = false;

    Aws::String m_localPodName;
    bool m_localPodNameHasBeenSet = false;

    Aws::String m_localPodNamespace;
    bool m_localPodNamespaceHasBeenSet = false;

    Aws::String m_remoteServiceName;
    bool m_remoteServiceNameHasBeenSet = false;

    Aws::String m_remotePodName;
    bool m_remotePodNameHasBeenSet = false;

    Aws::String m_remotePodNamespace;
    bool m_remotePodNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
