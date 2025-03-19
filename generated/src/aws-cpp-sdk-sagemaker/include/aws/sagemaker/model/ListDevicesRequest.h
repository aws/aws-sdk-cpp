/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListDevicesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListDevicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDevices"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDevicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to select.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select fleets where the job was updated after X</p>
     */
    inline const Aws::Utils::DateTime& GetLatestHeartbeatAfter() const { return m_latestHeartbeatAfter; }
    inline bool LatestHeartbeatAfterHasBeenSet() const { return m_latestHeartbeatAfterHasBeenSet; }
    template<typename LatestHeartbeatAfterT = Aws::Utils::DateTime>
    void SetLatestHeartbeatAfter(LatestHeartbeatAfterT&& value) { m_latestHeartbeatAfterHasBeenSet = true; m_latestHeartbeatAfter = std::forward<LatestHeartbeatAfterT>(value); }
    template<typename LatestHeartbeatAfterT = Aws::Utils::DateTime>
    ListDevicesRequest& WithLatestHeartbeatAfter(LatestHeartbeatAfterT&& value) { SetLatestHeartbeatAfter(std::forward<LatestHeartbeatAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    ListDevicesRequest& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    ListDevicesRequest& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_latestHeartbeatAfter{};
    bool m_latestHeartbeatAfterHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
