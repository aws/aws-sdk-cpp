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
    AWS_WORKDOCS_API Subscription() = default;
    AWS_WORKDOCS_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the subscription.</p>
     */
    inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
    template<typename SubscriptionIdT = Aws::String>
    void SetSubscriptionId(SubscriptionIdT&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::forward<SubscriptionIdT>(value); }
    template<typename SubscriptionIdT = Aws::String>
    Subscription& WithSubscriptionId(SubscriptionIdT&& value) { SetSubscriptionId(std::forward<SubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the subscription.</p>
     */
    inline const Aws::String& GetEndPoint() const { return m_endPoint; }
    inline bool EndPointHasBeenSet() const { return m_endPointHasBeenSet; }
    template<typename EndPointT = Aws::String>
    void SetEndPoint(EndPointT&& value) { m_endPointHasBeenSet = true; m_endPoint = std::forward<EndPointT>(value); }
    template<typename EndPointT = Aws::String>
    Subscription& WithEndPoint(EndPointT&& value) { SetEndPoint(std::forward<EndPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol of the subscription.</p>
     */
    inline SubscriptionProtocolType GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(SubscriptionProtocolType value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline Subscription& WithProtocol(SubscriptionProtocolType value) { SetProtocol(value); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    Aws::String m_endPoint;
    bool m_endPointHasBeenSet = false;

    SubscriptionProtocolType m_protocol{SubscriptionProtocolType::NOT_SET};
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
