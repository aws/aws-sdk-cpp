/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceJob.h>
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
namespace Panorama
{
namespace Model
{
  class ListDevicesJobsResult
  {
  public:
    AWS_PANORAMA_API ListDevicesJobsResult() = default;
    AWS_PANORAMA_API ListDevicesJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListDevicesJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<DeviceJob>& GetDeviceJobs() const { return m_deviceJobs; }
    template<typename DeviceJobsT = Aws::Vector<DeviceJob>>
    void SetDeviceJobs(DeviceJobsT&& value) { m_deviceJobsHasBeenSet = true; m_deviceJobs = std::forward<DeviceJobsT>(value); }
    template<typename DeviceJobsT = Aws::Vector<DeviceJob>>
    ListDevicesJobsResult& WithDeviceJobs(DeviceJobsT&& value) { SetDeviceJobs(std::forward<DeviceJobsT>(value)); return *this;}
    template<typename DeviceJobsT = DeviceJob>
    ListDevicesJobsResult& AddDeviceJobs(DeviceJobsT&& value) { m_deviceJobsHasBeenSet = true; m_deviceJobs.emplace_back(std::forward<DeviceJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDevicesJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDevicesJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceJob> m_deviceJobs;
    bool m_deviceJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
