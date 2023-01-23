/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/Pipe.h>
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
namespace Pipes
{
namespace Model
{
  class ListPipesResult
  {
  public:
    AWS_PIPES_API ListPipesResult();
    AWS_PIPES_API ListPipesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PIPES_API ListPipesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListPipesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListPipesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListPipesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The pipes returned by the call.</p>
     */
    inline const Aws::Vector<Pipe>& GetPipes() const{ return m_pipes; }

    /**
     * <p>The pipes returned by the call.</p>
     */
    inline void SetPipes(const Aws::Vector<Pipe>& value) { m_pipes = value; }

    /**
     * <p>The pipes returned by the call.</p>
     */
    inline void SetPipes(Aws::Vector<Pipe>&& value) { m_pipes = std::move(value); }

    /**
     * <p>The pipes returned by the call.</p>
     */
    inline ListPipesResult& WithPipes(const Aws::Vector<Pipe>& value) { SetPipes(value); return *this;}

    /**
     * <p>The pipes returned by the call.</p>
     */
    inline ListPipesResult& WithPipes(Aws::Vector<Pipe>&& value) { SetPipes(std::move(value)); return *this;}

    /**
     * <p>The pipes returned by the call.</p>
     */
    inline ListPipesResult& AddPipes(const Pipe& value) { m_pipes.push_back(value); return *this; }

    /**
     * <p>The pipes returned by the call.</p>
     */
    inline ListPipesResult& AddPipes(Pipe&& value) { m_pipes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Pipe> m_pipes;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
