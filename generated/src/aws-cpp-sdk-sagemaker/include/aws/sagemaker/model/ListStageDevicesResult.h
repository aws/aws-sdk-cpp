/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceDeploymentSummary.h>
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
  class ListStageDevicesResult
  {
  public:
    AWS_SAGEMAKER_API ListStageDevicesResult() = default;
    AWS_SAGEMAKER_API ListStageDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListStageDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of summaries of devices allocated to the stage.</p>
     */
    inline const Aws::Vector<DeviceDeploymentSummary>& GetDeviceDeploymentSummaries() const { return m_deviceDeploymentSummaries; }
    template<typename DeviceDeploymentSummariesT = Aws::Vector<DeviceDeploymentSummary>>
    void SetDeviceDeploymentSummaries(DeviceDeploymentSummariesT&& value) { m_deviceDeploymentSummariesHasBeenSet = true; m_deviceDeploymentSummaries = std::forward<DeviceDeploymentSummariesT>(value); }
    template<typename DeviceDeploymentSummariesT = Aws::Vector<DeviceDeploymentSummary>>
    ListStageDevicesResult& WithDeviceDeploymentSummaries(DeviceDeploymentSummariesT&& value) { SetDeviceDeploymentSummaries(std::forward<DeviceDeploymentSummariesT>(value)); return *this;}
    template<typename DeviceDeploymentSummariesT = DeviceDeploymentSummary>
    ListStageDevicesResult& AddDeviceDeploymentSummaries(DeviceDeploymentSummariesT&& value) { m_deviceDeploymentSummariesHasBeenSet = true; m_deviceDeploymentSummaries.emplace_back(std::forward<DeviceDeploymentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStageDevicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStageDevicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceDeploymentSummary> m_deviceDeploymentSummaries;
    bool m_deviceDeploymentSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
