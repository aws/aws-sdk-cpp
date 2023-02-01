/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/Subscription.h>
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
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for ListSubscriptions action</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptionsResponse">AWS
   * API Reference</a></p>
   */
  class ListSubscriptionsResult
  {
  public:
    AWS_SNS_API ListSubscriptionsResult();
    AWS_SNS_API ListSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ListSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of subscriptions.</p>
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const{ return m_subscriptions; }

    /**
     * <p>A list of subscriptions.</p>
     */
    inline void SetSubscriptions(const Aws::Vector<Subscription>& value) { m_subscriptions = value; }

    /**
     * <p>A list of subscriptions.</p>
     */
    inline void SetSubscriptions(Aws::Vector<Subscription>&& value) { m_subscriptions = std::move(value); }

    /**
     * <p>A list of subscriptions.</p>
     */
    inline ListSubscriptionsResult& WithSubscriptions(const Aws::Vector<Subscription>& value) { SetSubscriptions(value); return *this;}

    /**
     * <p>A list of subscriptions.</p>
     */
    inline ListSubscriptionsResult& WithSubscriptions(Aws::Vector<Subscription>&& value) { SetSubscriptions(std::move(value)); return *this;}

    /**
     * <p>A list of subscriptions.</p>
     */
    inline ListSubscriptionsResult& AddSubscriptions(const Subscription& value) { m_subscriptions.push_back(value); return *this; }

    /**
     * <p>A list of subscriptions.</p>
     */
    inline ListSubscriptionsResult& AddSubscriptions(Subscription&& value) { m_subscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline ListSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline ListSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline ListSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListSubscriptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListSubscriptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Subscription> m_subscriptions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
