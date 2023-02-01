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
    AWS_SAGEMAKER_API ListDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDevices"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListDevicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListDevicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListDevicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum number of results to select.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to select.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to select.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to select.</p>
     */
    inline ListDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Select fleets where the job was updated after X</p>
     */
    inline const Aws::Utils::DateTime& GetLatestHeartbeatAfter() const{ return m_latestHeartbeatAfter; }

    /**
     * <p>Select fleets where the job was updated after X</p>
     */
    inline bool LatestHeartbeatAfterHasBeenSet() const { return m_latestHeartbeatAfterHasBeenSet; }

    /**
     * <p>Select fleets where the job was updated after X</p>
     */
    inline void SetLatestHeartbeatAfter(const Aws::Utils::DateTime& value) { m_latestHeartbeatAfterHasBeenSet = true; m_latestHeartbeatAfter = value; }

    /**
     * <p>Select fleets where the job was updated after X</p>
     */
    inline void SetLatestHeartbeatAfter(Aws::Utils::DateTime&& value) { m_latestHeartbeatAfterHasBeenSet = true; m_latestHeartbeatAfter = std::move(value); }

    /**
     * <p>Select fleets where the job was updated after X</p>
     */
    inline ListDevicesRequest& WithLatestHeartbeatAfter(const Aws::Utils::DateTime& value) { SetLatestHeartbeatAfter(value); return *this;}

    /**
     * <p>Select fleets where the job was updated after X</p>
     */
    inline ListDevicesRequest& WithLatestHeartbeatAfter(Aws::Utils::DateTime&& value) { SetLatestHeartbeatAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline ListDevicesRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline ListDevicesRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>A filter that searches devices that contains this name in any of their
     * models.</p>
     */
    inline ListDevicesRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }

    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }

    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }

    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }

    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline ListDevicesRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline ListDevicesRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>Filter for fleets containing this name in their device fleet name.</p>
     */
    inline ListDevicesRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_latestHeartbeatAfter;
    bool m_latestHeartbeatAfterHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
