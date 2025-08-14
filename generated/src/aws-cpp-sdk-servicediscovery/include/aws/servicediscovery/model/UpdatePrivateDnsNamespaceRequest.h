/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/PrivateDnsNamespaceChange.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class UpdatePrivateDnsNamespaceRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API UpdatePrivateDnsNamespaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePrivateDnsNamespace"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID or Amazon Resource Name (ARN) of the namespace that you want to
     * update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdatePrivateDnsNamespaceRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline const Aws::String& GetUpdaterRequestId() const { return m_updaterRequestId; }
    inline bool UpdaterRequestIdHasBeenSet() const { return m_updaterRequestIdHasBeenSet; }
    template<typename UpdaterRequestIdT = Aws::String>
    void SetUpdaterRequestId(UpdaterRequestIdT&& value) { m_updaterRequestIdHasBeenSet = true; m_updaterRequestId = std::forward<UpdaterRequestIdT>(value); }
    template<typename UpdaterRequestIdT = Aws::String>
    UpdatePrivateDnsNamespaceRequest& WithUpdaterRequestId(UpdaterRequestIdT&& value) { SetUpdaterRequestId(std::forward<UpdaterRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updated properties for the private DNS namespace.</p>
     */
    inline const PrivateDnsNamespaceChange& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = PrivateDnsNamespaceChange>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = PrivateDnsNamespaceChange>
    UpdatePrivateDnsNamespaceRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_updaterRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_updaterRequestIdHasBeenSet = true;

    PrivateDnsNamespaceChange m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
