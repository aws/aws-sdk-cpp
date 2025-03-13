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
    AWS_SAGEMAKER_API UpdateClusterSchedulerConfigResult() = default;
    AWS_SAGEMAKER_API UpdateClusterSchedulerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateClusterSchedulerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigArn() const { return m_clusterSchedulerConfigArn; }
    template<typename ClusterSchedulerConfigArnT = Aws::String>
    void SetClusterSchedulerConfigArn(ClusterSchedulerConfigArnT&& value) { m_clusterSchedulerConfigArnHasBeenSet = true; m_clusterSchedulerConfigArn = std::forward<ClusterSchedulerConfigArnT>(value); }
    template<typename ClusterSchedulerConfigArnT = Aws::String>
    UpdateClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(ClusterSchedulerConfigArnT&& value) { SetClusterSchedulerConfigArn(std::forward<ClusterSchedulerConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the cluster policy.</p>
     */
    inline int GetClusterSchedulerConfigVersion() const { return m_clusterSchedulerConfigVersion; }
    inline void SetClusterSchedulerConfigVersion(int value) { m_clusterSchedulerConfigVersionHasBeenSet = true; m_clusterSchedulerConfigVersion = value; }
    inline UpdateClusterSchedulerConfigResult& WithClusterSchedulerConfigVersion(int value) { SetClusterSchedulerConfigVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateClusterSchedulerConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigArn;
    bool m_clusterSchedulerConfigArnHasBeenSet = false;

    int m_clusterSchedulerConfigVersion{0};
    bool m_clusterSchedulerConfigVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
