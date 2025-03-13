/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/SubscriptionProtocolType.h>
#include <aws/workdocs/model/SubscriptionType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class CreateNotificationSubscriptionRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API CreateNotificationSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNotificationSubscription"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    CreateNotificationSubscriptionRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    CreateNotificationSubscriptionRequest& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use. The supported value is https, which delivers
     * JSON-encoded messages using HTTPS POST.</p>
     */
    inline SubscriptionProtocolType GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(SubscriptionProtocolType value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateNotificationSubscriptionRequest& WithProtocol(SubscriptionProtocolType value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification type.</p>
     */
    inline SubscriptionType GetSubscriptionType() const { return m_subscriptionType; }
    inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }
    inline void SetSubscriptionType(SubscriptionType value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }
    inline CreateNotificationSubscriptionRequest& WithSubscriptionType(SubscriptionType value) { SetSubscriptionType(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    SubscriptionProtocolType m_protocol{SubscriptionProtocolType::NOT_SET};
    bool m_protocolHasBeenSet = false;

    SubscriptionType m_subscriptionType{SubscriptionType::NOT_SET};
    bool m_subscriptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
