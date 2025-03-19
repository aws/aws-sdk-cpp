/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/EventSubscription.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class CreateEventSubscriptionResult
  {
  public:
    AWS_RDS_API CreateEventSubscriptionResult() = default;
    AWS_RDS_API CreateEventSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateEventSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const EventSubscription& GetEventSubscription() const { return m_eventSubscription; }
    template<typename EventSubscriptionT = EventSubscription>
    void SetEventSubscription(EventSubscriptionT&& value) { m_eventSubscriptionHasBeenSet = true; m_eventSubscription = std::forward<EventSubscriptionT>(value); }
    template<typename EventSubscriptionT = EventSubscription>
    CreateEventSubscriptionResult& WithEventSubscription(EventSubscriptionT&& value) { SetEventSubscription(std::forward<EventSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateEventSubscriptionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    EventSubscription m_eventSubscription;
    bool m_eventSubscriptionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
