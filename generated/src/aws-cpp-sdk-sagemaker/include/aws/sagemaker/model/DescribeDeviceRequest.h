﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeDeviceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDevice"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Next token of device description.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeDeviceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDeviceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDeviceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline DescribeDeviceRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline DescribeDeviceRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline DescribeDeviceRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }
    inline DescribeDeviceRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline DescribeDeviceRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline DescribeDeviceRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
