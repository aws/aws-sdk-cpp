/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceSummary.h>
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
  class ListDevicesResult
  {
  public:
    AWS_SAGEMAKER_API ListDevicesResult() = default;
    AWS_SAGEMAKER_API ListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary of devices.</p>
     */
    inline const Aws::Vector<DeviceSummary>& GetDeviceSummaries() const { return m_deviceSummaries; }
    template<typename DeviceSummariesT = Aws::Vector<DeviceSummary>>
    void SetDeviceSummaries(DeviceSummariesT&& value) { m_deviceSummariesHasBeenSet = true; m_deviceSummaries = std::forward<DeviceSummariesT>(value); }
    template<typename DeviceSummariesT = Aws::Vector<DeviceSummary>>
    ListDevicesResult& WithDeviceSummaries(DeviceSummariesT&& value) { SetDeviceSummaries(std::forward<DeviceSummariesT>(value)); return *this;}
    template<typename DeviceSummariesT = DeviceSummary>
    ListDevicesResult& AddDeviceSummaries(DeviceSummariesT&& value) { m_deviceSummariesHasBeenSet = true; m_deviceSummaries.emplace_back(std::forward<DeviceSummariesT>(value)); return *this; }
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
    ListDevicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDevicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceSummary> m_deviceSummaries;
    bool m_deviceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
