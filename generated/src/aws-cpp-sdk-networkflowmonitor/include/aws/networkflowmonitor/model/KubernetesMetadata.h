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
    AWS_NETWORKFLOWMONITOR_API KubernetesMetadata() = default;
    AWS_NETWORKFLOWMONITOR_API KubernetesMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API KubernetesMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service name for a local resource.</p>
     */
    inline const Aws::String& GetLocalServiceName() const { return m_localServiceName; }
    inline bool LocalServiceNameHasBeenSet() const { return m_localServiceNameHasBeenSet; }
    template<typename LocalServiceNameT = Aws::String>
    void SetLocalServiceName(LocalServiceNameT&& value) { m_localServiceNameHasBeenSet = true; m_localServiceName = std::forward<LocalServiceNameT>(value); }
    template<typename LocalServiceNameT = Aws::String>
    KubernetesMetadata& WithLocalServiceName(LocalServiceNameT&& value) { SetLocalServiceName(std::forward<LocalServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pod for a local resource.</p>
     */
    inline const Aws::String& GetLocalPodName() const { return m_localPodName; }
    inline bool LocalPodNameHasBeenSet() const { return m_localPodNameHasBeenSet; }
    template<typename LocalPodNameT = Aws::String>
    void SetLocalPodName(LocalPodNameT&& value) { m_localPodNameHasBeenSet = true; m_localPodName = std::forward<LocalPodNameT>(value); }
    template<typename LocalPodNameT = Aws::String>
    KubernetesMetadata& WithLocalPodName(LocalPodNameT&& value) { SetLocalPodName(std::forward<LocalPodNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the pod for a local resource.</p>
     */
    inline const Aws::String& GetLocalPodNamespace() const { return m_localPodNamespace; }
    inline bool LocalPodNamespaceHasBeenSet() const { return m_localPodNamespaceHasBeenSet; }
    template<typename LocalPodNamespaceT = Aws::String>
    void SetLocalPodNamespace(LocalPodNamespaceT&& value) { m_localPodNamespaceHasBeenSet = true; m_localPodNamespace = std::forward<LocalPodNamespaceT>(value); }
    template<typename LocalPodNamespaceT = Aws::String>
    KubernetesMetadata& WithLocalPodNamespace(LocalPodNamespaceT&& value) { SetLocalPodNamespace(std::forward<LocalPodNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service name for a remote resource.</p>
     */
    inline const Aws::String& GetRemoteServiceName() const { return m_remoteServiceName; }
    inline bool RemoteServiceNameHasBeenSet() const { return m_remoteServiceNameHasBeenSet; }
    template<typename RemoteServiceNameT = Aws::String>
    void SetRemoteServiceName(RemoteServiceNameT&& value) { m_remoteServiceNameHasBeenSet = true; m_remoteServiceName = std::forward<RemoteServiceNameT>(value); }
    template<typename RemoteServiceNameT = Aws::String>
    KubernetesMetadata& WithRemoteServiceName(RemoteServiceNameT&& value) { SetRemoteServiceName(std::forward<RemoteServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pod for a remote resource.</p>
     */
    inline const Aws::String& GetRemotePodName() const { return m_remotePodName; }
    inline bool RemotePodNameHasBeenSet() const { return m_remotePodNameHasBeenSet; }
    template<typename RemotePodNameT = Aws::String>
    void SetRemotePodName(RemotePodNameT&& value) { m_remotePodNameHasBeenSet = true; m_remotePodName = std::forward<RemotePodNameT>(value); }
    template<typename RemotePodNameT = Aws::String>
    KubernetesMetadata& WithRemotePodName(RemotePodNameT&& value) { SetRemotePodName(std::forward<RemotePodNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the pod for a remote resource.</p>
     */
    inline const Aws::String& GetRemotePodNamespace() const { return m_remotePodNamespace; }
    inline bool RemotePodNamespaceHasBeenSet() const { return m_remotePodNamespaceHasBeenSet; }
    template<typename RemotePodNamespaceT = Aws::String>
    void SetRemotePodNamespace(RemotePodNamespaceT&& value) { m_remotePodNamespaceHasBeenSet = true; m_remotePodNamespace = std::forward<RemotePodNamespaceT>(value); }
    template<typename RemotePodNamespaceT = Aws::String>
    KubernetesMetadata& WithRemotePodNamespace(RemotePodNamespaceT&& value) { SetRemotePodNamespace(std::forward<RemotePodNamespaceT>(value)); return *this;}
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
