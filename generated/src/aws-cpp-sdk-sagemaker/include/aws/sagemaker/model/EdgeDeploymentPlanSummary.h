/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Contains information summarizing an edge deployment plan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeDeploymentPlanSummary">AWS
   * API Reference</a></p>
   */
  class EdgeDeploymentPlanSummary
  {
  public:
    AWS_SAGEMAKER_API EdgeDeploymentPlanSummary();
    AWS_SAGEMAKER_API EdgeDeploymentPlanSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeDeploymentPlanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanArn() const{ return m_edgeDeploymentPlanArn; }
    inline bool EdgeDeploymentPlanArnHasBeenSet() const { return m_edgeDeploymentPlanArnHasBeenSet; }
    inline void SetEdgeDeploymentPlanArn(const Aws::String& value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn = value; }
    inline void SetEdgeDeploymentPlanArn(Aws::String&& value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn = std::move(value); }
    inline void SetEdgeDeploymentPlanArn(const char* value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn.assign(value); }
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentPlanArn(const Aws::String& value) { SetEdgeDeploymentPlanArn(value); return *this;}
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentPlanArn(Aws::String&& value) { SetEdgeDeploymentPlanArn(std::move(value)); return *this;}
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentPlanArn(const char* value) { SetEdgeDeploymentPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const{ return m_edgeDeploymentPlanName; }
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }
    inline void SetEdgeDeploymentPlanName(const Aws::String& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = value; }
    inline void SetEdgeDeploymentPlanName(Aws::String&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::move(value); }
    inline void SetEdgeDeploymentPlanName(const char* value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName.assign(value); }
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentPlanName(const Aws::String& value) { SetEdgeDeploymentPlanName(value); return *this;}
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentPlanName(Aws::String&& value) { SetEdgeDeploymentPlanName(std::move(value)); return *this;}
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentPlanName(const char* value) { SetEdgeDeploymentPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device fleet used for the deployment. </p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }
    inline EdgeDeploymentPlanSummary& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline EdgeDeploymentPlanSummary& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline EdgeDeploymentPlanSummary& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices with the successful deployment.</p>
     */
    inline int GetEdgeDeploymentSuccess() const{ return m_edgeDeploymentSuccess; }
    inline bool EdgeDeploymentSuccessHasBeenSet() const { return m_edgeDeploymentSuccessHasBeenSet; }
    inline void SetEdgeDeploymentSuccess(int value) { m_edgeDeploymentSuccessHasBeenSet = true; m_edgeDeploymentSuccess = value; }
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentSuccess(int value) { SetEdgeDeploymentSuccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices yet to pick up the deployment, or in progress.</p>
     */
    inline int GetEdgeDeploymentPending() const{ return m_edgeDeploymentPending; }
    inline bool EdgeDeploymentPendingHasBeenSet() const { return m_edgeDeploymentPendingHasBeenSet; }
    inline void SetEdgeDeploymentPending(int value) { m_edgeDeploymentPendingHasBeenSet = true; m_edgeDeploymentPending = value; }
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentPending(int value) { SetEdgeDeploymentPending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices that failed the deployment.</p>
     */
    inline int GetEdgeDeploymentFailed() const{ return m_edgeDeploymentFailed; }
    inline bool EdgeDeploymentFailedHasBeenSet() const { return m_edgeDeploymentFailedHasBeenSet; }
    inline void SetEdgeDeploymentFailed(int value) { m_edgeDeploymentFailedHasBeenSet = true; m_edgeDeploymentFailed = value; }
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentFailed(int value) { SetEdgeDeploymentFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the edge deployment plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline EdgeDeploymentPlanSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline EdgeDeploymentPlanSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the edge deployment plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline EdgeDeploymentPlanSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline EdgeDeploymentPlanSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgeDeploymentPlanArn;
    bool m_edgeDeploymentPlanArnHasBeenSet = false;

    Aws::String m_edgeDeploymentPlanName;
    bool m_edgeDeploymentPlanNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    int m_edgeDeploymentSuccess;
    bool m_edgeDeploymentSuccessHasBeenSet = false;

    int m_edgeDeploymentPending;
    bool m_edgeDeploymentPendingHasBeenSet = false;

    int m_edgeDeploymentFailed;
    bool m_edgeDeploymentFailedHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
