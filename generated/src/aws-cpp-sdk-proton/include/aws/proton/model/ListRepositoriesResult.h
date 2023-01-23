/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/RepositorySummary.h>
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
namespace Proton
{
namespace Model
{
  class ListRepositoriesResult
  {
  public:
    AWS_PROTON_API ListRepositoriesResult();
    AWS_PROTON_API ListRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates the location of the next repository in the array of
     * repositories, after the current requested list of repositories. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next repository in the array of
     * repositories, after the current requested list of repositories. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next repository in the array of
     * repositories, after the current requested list of repositories. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next repository in the array of
     * repositories, after the current requested list of repositories. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next repository in the array of
     * repositories, after the current requested list of repositories. </p>
     */
    inline ListRepositoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next repository in the array of
     * repositories, after the current requested list of repositories. </p>
     */
    inline ListRepositoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next repository in the array of
     * repositories, after the current requested list of repositories. </p>
     */
    inline ListRepositoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of repository links.</p>
     */
    inline const Aws::Vector<RepositorySummary>& GetRepositories() const{ return m_repositories; }

    /**
     * <p>An array of repository links.</p>
     */
    inline void SetRepositories(const Aws::Vector<RepositorySummary>& value) { m_repositories = value; }

    /**
     * <p>An array of repository links.</p>
     */
    inline void SetRepositories(Aws::Vector<RepositorySummary>&& value) { m_repositories = std::move(value); }

    /**
     * <p>An array of repository links.</p>
     */
    inline ListRepositoriesResult& WithRepositories(const Aws::Vector<RepositorySummary>& value) { SetRepositories(value); return *this;}

    /**
     * <p>An array of repository links.</p>
     */
    inline ListRepositoriesResult& WithRepositories(Aws::Vector<RepositorySummary>&& value) { SetRepositories(std::move(value)); return *this;}

    /**
     * <p>An array of repository links.</p>
     */
    inline ListRepositoriesResult& AddRepositories(const RepositorySummary& value) { m_repositories.push_back(value); return *this; }

    /**
     * <p>An array of repository links.</p>
     */
    inline ListRepositoriesResult& AddRepositories(RepositorySummary&& value) { m_repositories.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RepositorySummary> m_repositories;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
