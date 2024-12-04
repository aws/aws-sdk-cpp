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
  class UpdateClusterSchedulerConfigResult
  {
  public:
    AWS_SAGEMAKER_API UpdateClusterSchedulerConfigResult();
    AWS_SAGEMAKER_API UpdateClusterSchedulerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateClusterSchedulerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigArn() const{ return m_clusterSchedulerConfigArn; }
    inline void SetClusterSchedulerConfigArn(const Aws::String& value) { m_clusterSchedulerConfigArn = value; }
    inline void SetClusterSchedulerConfigArn(Aws::String&& value) { m_clusterSchedulerConfigArn = std::move(value); }
    inline void SetClusterSchedulerConfigArn(const char* value) { m_clusterSchedulerConfigArn.assign(value); }
    inline UpdateClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(const Aws::String& value) { SetClusterSchedulerConfigArn(value); return *this;}
    inline UpdateClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(Aws::String&& value) { SetClusterSchedulerConfigArn(std::move(value)); return *this;}
    inline UpdateClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(const char* value) { SetClusterSchedulerConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the cluster policy.</p>
     */
    inline int GetClusterSchedulerConfigVersion() const{ return m_clusterSchedulerConfigVersion; }
    inline void SetClusterSchedulerConfigVersion(int value) { m_clusterSchedulerConfigVersion = value; }
    inline UpdateClusterSchedulerConfigResult& WithClusterSchedulerConfigVersion(int value) { SetClusterSchedulerConfigVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateClusterSchedulerConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateClusterSchedulerConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateClusterSchedulerConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigArn;

    int m_clusterSchedulerConfigVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
