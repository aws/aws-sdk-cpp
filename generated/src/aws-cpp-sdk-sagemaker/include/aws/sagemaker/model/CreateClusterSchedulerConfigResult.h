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
    AWS_SAGEMAKER_API CreateClusterSchedulerConfigResult() = default;
    AWS_SAGEMAKER_API CreateClusterSchedulerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateClusterSchedulerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigArn() const { return m_clusterSchedulerConfigArn; }
    template<typename ClusterSchedulerConfigArnT = Aws::String>
    void SetClusterSchedulerConfigArn(ClusterSchedulerConfigArnT&& value) { m_clusterSchedulerConfigArnHasBeenSet = true; m_clusterSchedulerConfigArn = std::forward<ClusterSchedulerConfigArnT>(value); }
    template<typename ClusterSchedulerConfigArnT = Aws::String>
    CreateClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(ClusterSchedulerConfigArnT&& value) { SetClusterSchedulerConfigArn(std::forward<ClusterSchedulerConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigId() const { return m_clusterSchedulerConfigId; }
    template<typename ClusterSchedulerConfigIdT = Aws::String>
    void SetClusterSchedulerConfigId(ClusterSchedulerConfigIdT&& value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId = std::forward<ClusterSchedulerConfigIdT>(value); }
    template<typename ClusterSchedulerConfigIdT = Aws::String>
    CreateClusterSchedulerConfigResult& WithClusterSchedulerConfigId(ClusterSchedulerConfigIdT&& value) { SetClusterSchedulerConfigId(std::forward<ClusterSchedulerConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateClusterSchedulerConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigArn;
    bool m_clusterSchedulerConfigArnHasBeenSet = false;

    Aws::String m_clusterSchedulerConfigId;
    bool m_clusterSchedulerConfigIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
