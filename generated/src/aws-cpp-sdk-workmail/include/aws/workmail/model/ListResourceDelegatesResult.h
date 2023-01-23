/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/Delegate.h>
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
namespace WorkMail
{
namespace Model
{
  class ListResourceDelegatesResult
  {
  public:
    AWS_WORKMAIL_API ListResourceDelegatesResult();
    AWS_WORKMAIL_API ListResourceDelegatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListResourceDelegatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline const Aws::Vector<Delegate>& GetDelegates() const{ return m_delegates; }

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline void SetDelegates(const Aws::Vector<Delegate>& value) { m_delegates = value; }

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline void SetDelegates(Aws::Vector<Delegate>&& value) { m_delegates = std::move(value); }

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline ListResourceDelegatesResult& WithDelegates(const Aws::Vector<Delegate>& value) { SetDelegates(value); return *this;}

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline ListResourceDelegatesResult& WithDelegates(Aws::Vector<Delegate>&& value) { SetDelegates(std::move(value)); return *this;}

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline ListResourceDelegatesResult& AddDelegates(const Delegate& value) { m_delegates.push_back(value); return *this; }

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline ListResourceDelegatesResult& AddDelegates(Delegate&& value) { m_delegates.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty.</p>
     */
    inline ListResourceDelegatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty.</p>
     */
    inline ListResourceDelegatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty.</p>
     */
    inline ListResourceDelegatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Delegate> m_delegates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
