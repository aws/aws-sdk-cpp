/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsSubscription.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetEnabledStandardsResult
  {
  public:
    AWS_SECURITYHUB_API GetEnabledStandardsResult();
    AWS_SECURITYHUB_API GetEnabledStandardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetEnabledStandardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline const Aws::Vector<StandardsSubscription>& GetStandardsSubscriptions() const{ return m_standardsSubscriptions; }

    /**
     * <p>The list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline void SetStandardsSubscriptions(const Aws::Vector<StandardsSubscription>& value) { m_standardsSubscriptions = value; }

    /**
     * <p>The list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline void SetStandardsSubscriptions(Aws::Vector<StandardsSubscription>&& value) { m_standardsSubscriptions = std::move(value); }

    /**
     * <p>The list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline GetEnabledStandardsResult& WithStandardsSubscriptions(const Aws::Vector<StandardsSubscription>& value) { SetStandardsSubscriptions(value); return *this;}

    /**
     * <p>The list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline GetEnabledStandardsResult& WithStandardsSubscriptions(Aws::Vector<StandardsSubscription>&& value) { SetStandardsSubscriptions(std::move(value)); return *this;}

    /**
     * <p>The list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline GetEnabledStandardsResult& AddStandardsSubscriptions(const StandardsSubscription& value) { m_standardsSubscriptions.push_back(value); return *this; }

    /**
     * <p>The list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline GetEnabledStandardsResult& AddStandardsSubscriptions(StandardsSubscription&& value) { m_standardsSubscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetEnabledStandardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetEnabledStandardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetEnabledStandardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StandardsSubscription> m_standardsSubscriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
