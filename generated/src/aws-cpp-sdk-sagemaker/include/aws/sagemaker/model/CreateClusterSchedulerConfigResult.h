/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class CreateClusterSchedulerConfigResult
  {
  public:
    AWS_SAGEMAKER_API CreateClusterSchedulerConfigResult();
    AWS_SAGEMAKER_API CreateClusterSchedulerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateClusterSchedulerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigArn() const{ return m_clusterSchedulerConfigArn; }
    inline void SetClusterSchedulerConfigArn(const Aws::String& value) { m_clusterSchedulerConfigArn = value; }
    inline void SetClusterSchedulerConfigArn(Aws::String&& value) { m_clusterSchedulerConfigArn = std::move(value); }
    inline void SetClusterSchedulerConfigArn(const char* value) { m_clusterSchedulerConfigArn.assign(value); }
    inline CreateClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(const Aws::String& value) { SetClusterSchedulerConfigArn(value); return *this;}
    inline CreateClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(Aws::String&& value) { SetClusterSchedulerConfigArn(std::move(value)); return *this;}
    inline CreateClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(const char* value) { SetClusterSchedulerConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigId() const{ return m_clusterSchedulerConfigId; }
    inline void SetClusterSchedulerConfigId(const Aws::String& value) { m_clusterSchedulerConfigId = value; }
    inline void SetClusterSchedulerConfigId(Aws::String&& value) { m_clusterSchedulerConfigId = std::move(value); }
    inline void SetClusterSchedulerConfigId(const char* value) { m_clusterSchedulerConfigId.assign(value); }
    inline CreateClusterSchedulerConfigResult& WithClusterSchedulerConfigId(const Aws::String& value) { SetClusterSchedulerConfigId(value); return *this;}
    inline CreateClusterSchedulerConfigResult& WithClusterSchedulerConfigId(Aws::String&& value) { SetClusterSchedulerConfigId(std::move(value)); return *this;}
    inline CreateClusterSchedulerConfigResult& WithClusterSchedulerConfigId(const char* value) { SetClusterSchedulerConfigId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateClusterSchedulerConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateClusterSchedulerConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateClusterSchedulerConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigArn;

    Aws::String m_clusterSchedulerConfigId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
