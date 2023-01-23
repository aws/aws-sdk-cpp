/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/ContentSummary.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class ListContentsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListContentsResult();
    AWS_CONNECTWISDOMSERVICE_API ListContentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListContentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the content.</p>
     */
    inline const Aws::Vector<ContentSummary>& GetContentSummaries() const{ return m_contentSummaries; }

    /**
     * <p>Information about the content.</p>
     */
    inline void SetContentSummaries(const Aws::Vector<ContentSummary>& value) { m_contentSummaries = value; }

    /**
     * <p>Information about the content.</p>
     */
    inline void SetContentSummaries(Aws::Vector<ContentSummary>&& value) { m_contentSummaries = std::move(value); }

    /**
     * <p>Information about the content.</p>
     */
    inline ListContentsResult& WithContentSummaries(const Aws::Vector<ContentSummary>& value) { SetContentSummaries(value); return *this;}

    /**
     * <p>Information about the content.</p>
     */
    inline ListContentsResult& WithContentSummaries(Aws::Vector<ContentSummary>&& value) { SetContentSummaries(std::move(value)); return *this;}

    /**
     * <p>Information about the content.</p>
     */
    inline ListContentsResult& AddContentSummaries(const ContentSummary& value) { m_contentSummaries.push_back(value); return *this; }

    /**
     * <p>Information about the content.</p>
     */
    inline ListContentsResult& AddContentSummaries(ContentSummary&& value) { m_contentSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListContentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListContentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListContentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ContentSummary> m_contentSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
