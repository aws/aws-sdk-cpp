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
    AWS_WORKDOCS_API CreateNotificationSubscriptionRequest();

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
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline CreateNotificationSubscriptionRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline CreateNotificationSubscriptionRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline CreateNotificationSubscriptionRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline CreateNotificationSubscriptionRequest& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline CreateNotificationSubscriptionRequest& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline CreateNotificationSubscriptionRequest& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use. The supported value is https, which delivers
     * JSON-encoded messages using HTTPS POST.</p>
     */
    inline const SubscriptionProtocolType& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const SubscriptionProtocolType& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(SubscriptionProtocolType&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline CreateNotificationSubscriptionRequest& WithProtocol(const SubscriptionProtocolType& value) { SetProtocol(value); return *this;}
    inline CreateNotificationSubscriptionRequest& WithProtocol(SubscriptionProtocolType&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification type.</p>
     */
    inline const SubscriptionType& GetSubscriptionType() const{ return m_subscriptionType; }
    inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }
    inline void SetSubscriptionType(const SubscriptionType& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }
    inline void SetSubscriptionType(SubscriptionType&& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = std::move(value); }
    inline CreateNotificationSubscriptionRequest& WithSubscriptionType(const SubscriptionType& value) { SetSubscriptionType(value); return *this;}
    inline CreateNotificationSubscriptionRequest& WithSubscriptionType(SubscriptionType&& value) { SetSubscriptionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    SubscriptionProtocolType m_protocol;
    bool m_protocolHasBeenSet = false;

    SubscriptionType m_subscriptionType;
    bool m_subscriptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
