/**
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
  class GetDeviceFleetReportRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API GetDeviceFleetReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeviceFleetReport"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline GetDeviceFleetReportRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline GetDeviceFleetReportRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline GetDeviceFleetReportRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}

  private:

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
