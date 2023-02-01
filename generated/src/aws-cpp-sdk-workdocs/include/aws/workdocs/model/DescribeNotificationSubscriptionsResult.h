/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/Subscription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkDocs
{
namespace Model
{
  class DescribeNotificationSubscriptionsResult
  {
  public:
    AWS_WORKDOCS_API DescribeNotificationSubscriptionsResult();
    AWS_WORKDOCS_API DescribeNotificationSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeNotificationSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The subscriptions.</p>
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const{ return m_subscriptions; }

    /**
     * <p>The subscriptions.</p>
     */
    inline void SetSubscriptions(const Aws::Vector<Subscription>& value) { m_subscriptions = value; }

    /**
     * <p>The subscriptions.</p>
     */
    inline void SetSubscriptions(Aws::Vector<Subscription>&& value) { m_subscriptions = std::move(value); }

    /**
     * <p>The subscriptions.</p>
     */
    inline DescribeNotificationSubscriptionsResult& WithSubscriptions(const Aws::Vector<Subscription>& value) { SetSubscriptions(value); return *this;}

    /**
     * <p>The subscriptions.</p>
     */
    inline DescribeNotificationSubscriptionsResult& WithSubscriptions(Aws::Vector<Subscription>&& value) { SetSubscriptions(std::move(value)); return *this;}

    /**
     * <p>The subscriptions.</p>
     */
    inline DescribeNotificationSubscriptionsResult& AddSubscriptions(const Subscription& value) { m_subscriptions.push_back(value); return *this; }

    /**
     * <p>The subscriptions.</p>
     */
    inline DescribeNotificationSubscriptionsResult& AddSubscriptions(Subscription&& value) { m_subscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeNotificationSubscriptionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeNotificationSubscriptionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeNotificationSubscriptionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<Subscription> m_subscriptions;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
