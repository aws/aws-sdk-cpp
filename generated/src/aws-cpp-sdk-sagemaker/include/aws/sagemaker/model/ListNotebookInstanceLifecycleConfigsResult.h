﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/NotebookInstanceLifecycleConfigSummary.h>
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
  class ListNotebookInstanceLifecycleConfigsResult
  {
  public:
    AWS_SAGEMAKER_API ListNotebookInstanceLifecycleConfigsResult();
    AWS_SAGEMAKER_API ListNotebookInstanceLifecycleConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListNotebookInstanceLifecycleConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To get the next
     * set of lifecycle configurations, use it in the next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNotebookInstanceLifecycleConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotebookInstanceLifecycleConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotebookInstanceLifecycleConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>NotebookInstanceLifecycleConfiguration</code> objects, each
     * listing a lifecycle configuration.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleConfigSummary>& GetNotebookInstanceLifecycleConfigs() const{ return m_notebookInstanceLifecycleConfigs; }
    inline void SetNotebookInstanceLifecycleConfigs(const Aws::Vector<NotebookInstanceLifecycleConfigSummary>& value) { m_notebookInstanceLifecycleConfigs = value; }
    inline void SetNotebookInstanceLifecycleConfigs(Aws::Vector<NotebookInstanceLifecycleConfigSummary>&& value) { m_notebookInstanceLifecycleConfigs = std::move(value); }
    inline ListNotebookInstanceLifecycleConfigsResult& WithNotebookInstanceLifecycleConfigs(const Aws::Vector<NotebookInstanceLifecycleConfigSummary>& value) { SetNotebookInstanceLifecycleConfigs(value); return *this;}
    inline ListNotebookInstanceLifecycleConfigsResult& WithNotebookInstanceLifecycleConfigs(Aws::Vector<NotebookInstanceLifecycleConfigSummary>&& value) { SetNotebookInstanceLifecycleConfigs(std::move(value)); return *this;}
    inline ListNotebookInstanceLifecycleConfigsResult& AddNotebookInstanceLifecycleConfigs(const NotebookInstanceLifecycleConfigSummary& value) { m_notebookInstanceLifecycleConfigs.push_back(value); return *this; }
    inline ListNotebookInstanceLifecycleConfigsResult& AddNotebookInstanceLifecycleConfigs(NotebookInstanceLifecycleConfigSummary&& value) { m_notebookInstanceLifecycleConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNotebookInstanceLifecycleConfigsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNotebookInstanceLifecycleConfigsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNotebookInstanceLifecycleConfigsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<NotebookInstanceLifecycleConfigSummary> m_notebookInstanceLifecycleConfigs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
