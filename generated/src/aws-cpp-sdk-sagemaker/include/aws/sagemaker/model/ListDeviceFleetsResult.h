/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceFleetSummary.h>
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
  class ListDeviceFleetsResult
  {
  public:
    AWS_SAGEMAKER_API ListDeviceFleetsResult() = default;
    AWS_SAGEMAKER_API ListDeviceFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListDeviceFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary of the device fleet.</p>
     */
    inline const Aws::Vector<DeviceFleetSummary>& GetDeviceFleetSummaries() const { return m_deviceFleetSummaries; }
    template<typename DeviceFleetSummariesT = Aws::Vector<DeviceFleetSummary>>
    void SetDeviceFleetSummaries(DeviceFleetSummariesT&& value) { m_deviceFleetSummariesHasBeenSet = true; m_deviceFleetSummaries = std::forward<DeviceFleetSummariesT>(value); }
    template<typename DeviceFleetSummariesT = Aws::Vector<DeviceFleetSummary>>
    ListDeviceFleetsResult& WithDeviceFleetSummaries(DeviceFleetSummariesT&& value) { SetDeviceFleetSummaries(std::forward<DeviceFleetSummariesT>(value)); return *this;}
    template<typename DeviceFleetSummariesT = DeviceFleetSummary>
    ListDeviceFleetsResult& AddDeviceFleetSummaries(DeviceFleetSummariesT&& value) { m_deviceFleetSummariesHasBeenSet = true; m_deviceFleetSummaries.emplace_back(std::forward<DeviceFleetSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeviceFleetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeviceFleetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceFleetSummary> m_deviceFleetSummaries;
    bool m_deviceFleetSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
