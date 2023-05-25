/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/App.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResilienceHub
{
namespace Model
{
  class DescribeAppResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeAppResult();
    AWS_RESILIENCEHUB_API DescribeAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The specified application, returned as an object with details including
     * compliance status, creation time, description, resiliency score, and more.</p>
     */
    inline const App& GetApp() const{ return m_app; }

    /**
     * <p>The specified application, returned as an object with details including
     * compliance status, creation time, description, resiliency score, and more.</p>
     */
    inline void SetApp(const App& value) { m_app = value; }

    /**
     * <p>The specified application, returned as an object with details including
     * compliance status, creation time, description, resiliency score, and more.</p>
     */
    inline void SetApp(App&& value) { m_app = std::move(value); }

    /**
     * <p>The specified application, returned as an object with details including
     * compliance status, creation time, description, resiliency score, and more.</p>
     */
    inline DescribeAppResult& WithApp(const App& value) { SetApp(value); return *this;}

    /**
     * <p>The specified application, returned as an object with details including
     * compliance status, creation time, description, resiliency score, and more.</p>
     */
    inline DescribeAppResult& WithApp(App&& value) { SetApp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    App m_app;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
