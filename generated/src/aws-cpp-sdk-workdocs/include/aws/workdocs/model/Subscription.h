/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/SubscriptionProtocolType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes a subscription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_WORKDOCS_API Subscription();
    AWS_WORKDOCS_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the subscription.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline Subscription& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}

    /**
     * <p>The ID of the subscription.</p>
     */
    inline Subscription& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subscription.</p>
     */
    inline Subscription& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}


    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline const Aws::String& GetEndPoint() const{ return m_endPoint; }

    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline bool EndPointHasBeenSet() const { return m_endPointHasBeenSet; }

    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline void SetEndPoint(const Aws::String& value) { m_endPointHasBeenSet = true; m_endPoint = value; }

    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline void SetEndPoint(Aws::String&& value) { m_endPointHasBeenSet = true; m_endPoint = std::move(value); }

    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline void SetEndPoint(const char* value) { m_endPointHasBeenSet = true; m_endPoint.assign(value); }

    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline Subscription& WithEndPoint(const Aws::String& value) { SetEndPoint(value); return *this;}

    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline Subscription& WithEndPoint(Aws::String&& value) { SetEndPoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline Subscription& WithEndPoint(const char* value) { SetEndPoint(value); return *this;}


    /**
     * <p>The protocol of the subscription.</p>
     */
    inline const SubscriptionProtocolType& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol of the subscription.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol of the subscription.</p>
     */
    inline void SetProtocol(const SubscriptionProtocolType& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol of the subscription.</p>
     */
    inline void SetProtocol(SubscriptionProtocolType&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol of the subscription.</p>
     */
    inline Subscription& WithProtocol(const SubscriptionProtocolType& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol of the subscription.</p>
     */
    inline Subscription& WithProtocol(SubscriptionProtocolType&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    Aws::String m_endPoint;
    bool m_endPointHasBeenSet = false;

    SubscriptionProtocolType m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
