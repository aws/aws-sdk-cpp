/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppDetails.h>
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
namespace SageMaker
{
namespace Model
{
  class ListAppsResult
  {
  public:
    AWS_SAGEMAKER_API ListAppsResult();
    AWS_SAGEMAKER_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of apps.</p>
     */
    inline const Aws::Vector<AppDetails>& GetApps() const{ return m_apps; }

    /**
     * <p>The list of apps.</p>
     */
    inline void SetApps(const Aws::Vector<AppDetails>& value) { m_apps = value; }

    /**
     * <p>The list of apps.</p>
     */
    inline void SetApps(Aws::Vector<AppDetails>&& value) { m_apps = std::move(value); }

    /**
     * <p>The list of apps.</p>
     */
    inline ListAppsResult& WithApps(const Aws::Vector<AppDetails>& value) { SetApps(value); return *this;}

    /**
     * <p>The list of apps.</p>
     */
    inline ListAppsResult& WithApps(Aws::Vector<AppDetails>&& value) { SetApps(std::move(value)); return *this;}

    /**
     * <p>The list of apps.</p>
     */
    inline ListAppsResult& AddApps(const AppDetails& value) { m_apps.push_back(value); return *this; }

    /**
     * <p>The list of apps.</p>
     */
    inline ListAppsResult& AddApps(AppDetails&& value) { m_apps.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AppDetails> m_apps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
