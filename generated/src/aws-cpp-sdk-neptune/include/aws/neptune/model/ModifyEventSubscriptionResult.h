/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/EventSubscription.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  class ModifyEventSubscriptionResult
  {
  public:
    AWS_NEPTUNE_API ModifyEventSubscriptionResult() = default;
    AWS_NEPTUNE_API ModifyEventSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API ModifyEventSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const EventSubscription& GetEventSubscription() const { return m_eventSubscription; }
    template<typename EventSubscriptionT = EventSubscription>
    void SetEventSubscription(EventSubscriptionT&& value) { m_eventSubscriptionHasBeenSet = true; m_eventSubscription = std::forward<EventSubscriptionT>(value); }
    template<typename EventSubscriptionT = EventSubscription>
    ModifyEventSubscriptionResult& WithEventSubscription(EventSubscriptionT&& value) { SetEventSubscription(std::forward<EventSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyEventSubscriptionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    EventSubscription m_eventSubscription;
    bool m_eventSubscriptionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
