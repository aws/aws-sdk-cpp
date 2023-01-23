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
  class RemoveSourceIdentifierFromSubscriptionResult
  {
  public:
    AWS_NEPTUNE_API RemoveSourceIdentifierFromSubscriptionResult();
    AWS_NEPTUNE_API RemoveSourceIdentifierFromSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API RemoveSourceIdentifierFromSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const EventSubscription& GetEventSubscription() const{ return m_eventSubscription; }

    
    inline void SetEventSubscription(const EventSubscription& value) { m_eventSubscription = value; }

    
    inline void SetEventSubscription(EventSubscription&& value) { m_eventSubscription = std::move(value); }

    
    inline RemoveSourceIdentifierFromSubscriptionResult& WithEventSubscription(const EventSubscription& value) { SetEventSubscription(value); return *this;}

    
    inline RemoveSourceIdentifierFromSubscriptionResult& WithEventSubscription(EventSubscription&& value) { SetEventSubscription(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RemoveSourceIdentifierFromSubscriptionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RemoveSourceIdentifierFromSubscriptionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    EventSubscription m_eventSubscription;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
