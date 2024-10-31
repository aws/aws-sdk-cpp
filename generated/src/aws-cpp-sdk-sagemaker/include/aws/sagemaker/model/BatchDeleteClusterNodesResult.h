/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/BatchDeleteClusterNodesError.h>
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
  class BatchDeleteClusterNodesResult
  {
  public:
    AWS_SAGEMAKER_API BatchDeleteClusterNodesResult();
    AWS_SAGEMAKER_API BatchDeleteClusterNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API BatchDeleteClusterNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of errors encountered when deleting the specified nodes.</p>
     */
    inline const Aws::Vector<BatchDeleteClusterNodesError>& GetFailed() const{ return m_failed; }
    inline void SetFailed(const Aws::Vector<BatchDeleteClusterNodesError>& value) { m_failed = value; }
    inline void SetFailed(Aws::Vector<BatchDeleteClusterNodesError>&& value) { m_failed = std::move(value); }
    inline BatchDeleteClusterNodesResult& WithFailed(const Aws::Vector<BatchDeleteClusterNodesError>& value) { SetFailed(value); return *this;}
    inline BatchDeleteClusterNodesResult& WithFailed(Aws::Vector<BatchDeleteClusterNodesError>&& value) { SetFailed(std::move(value)); return *this;}
    inline BatchDeleteClusterNodesResult& AddFailed(const BatchDeleteClusterNodesError& value) { m_failed.push_back(value); return *this; }
    inline BatchDeleteClusterNodesResult& AddFailed(BatchDeleteClusterNodesError&& value) { m_failed.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of node IDs that were successfully deleted from the specified
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessful() const{ return m_successful; }
    inline void SetSuccessful(const Aws::Vector<Aws::String>& value) { m_successful = value; }
    inline void SetSuccessful(Aws::Vector<Aws::String>&& value) { m_successful = std::move(value); }
    inline BatchDeleteClusterNodesResult& WithSuccessful(const Aws::Vector<Aws::String>& value) { SetSuccessful(value); return *this;}
    inline BatchDeleteClusterNodesResult& WithSuccessful(Aws::Vector<Aws::String>&& value) { SetSuccessful(std::move(value)); return *this;}
    inline BatchDeleteClusterNodesResult& AddSuccessful(const Aws::String& value) { m_successful.push_back(value); return *this; }
    inline BatchDeleteClusterNodesResult& AddSuccessful(Aws::String&& value) { m_successful.push_back(std::move(value)); return *this; }
    inline BatchDeleteClusterNodesResult& AddSuccessful(const char* value) { m_successful.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteClusterNodesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteClusterNodesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteClusterNodesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteClusterNodesError> m_failed;

    Aws::Vector<Aws::String> m_successful;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
