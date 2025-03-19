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
    AWS_SAGEMAKER_API EdgeDeploymentPlanSummary() = default;
    AWS_SAGEMAKER_API EdgeDeploymentPlanSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeDeploymentPlanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanArn() const { return m_edgeDeploymentPlanArn; }
    inline bool EdgeDeploymentPlanArnHasBeenSet() const { return m_edgeDeploymentPlanArnHasBeenSet; }
    template<typename EdgeDeploymentPlanArnT = Aws::String>
    void SetEdgeDeploymentPlanArn(EdgeDeploymentPlanArnT&& value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn = std::forward<EdgeDeploymentPlanArnT>(value); }
    template<typename EdgeDeploymentPlanArnT = Aws::String>
    EdgeDeploymentPlanSummary& WithEdgeDeploymentPlanArn(EdgeDeploymentPlanArnT&& value) { SetEdgeDeploymentPlanArn(std::forward<EdgeDeploymentPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const { return m_edgeDeploymentPlanName; }
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    void SetEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::forward<EdgeDeploymentPlanNameT>(value); }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    EdgeDeploymentPlanSummary& WithEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { SetEdgeDeploymentPlanName(std::forward<EdgeDeploymentPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device fleet used for the deployment. </p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    EdgeDeploymentPlanSummary& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices with the successful deployment.</p>
     */
    inline int GetEdgeDeploymentSuccess() const { return m_edgeDeploymentSuccess; }
    inline bool EdgeDeploymentSuccessHasBeenSet() const { return m_edgeDeploymentSuccessHasBeenSet; }
    inline void SetEdgeDeploymentSuccess(int value) { m_edgeDeploymentSuccessHasBeenSet = true; m_edgeDeploymentSuccess = value; }
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentSuccess(int value) { SetEdgeDeploymentSuccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices yet to pick up the deployment, or in progress.</p>
     */
    inline int GetEdgeDeploymentPending() const { return m_edgeDeploymentPending; }
    inline bool EdgeDeploymentPendingHasBeenSet() const { return m_edgeDeploymentPendingHasBeenSet; }
    inline void SetEdgeDeploymentPending(int value) { m_edgeDeploymentPendingHasBeenSet = true; m_edgeDeploymentPending = value; }
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentPending(int value) { SetEdgeDeploymentPending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices that failed the deployment.</p>
     */
    inline int GetEdgeDeploymentFailed() const { return m_edgeDeploymentFailed; }
    inline bool EdgeDeploymentFailedHasBeenSet() const { return m_edgeDeploymentFailedHasBeenSet; }
    inline void SetEdgeDeploymentFailed(int value) { m_edgeDeploymentFailedHasBeenSet = true; m_edgeDeploymentFailed = value; }
    inline EdgeDeploymentPlanSummary& WithEdgeDeploymentFailed(int value) { SetEdgeDeploymentFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the edge deployment plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    EdgeDeploymentPlanSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the edge deployment plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    EdgeDeploymentPlanSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgeDeploymentPlanArn;
    bool m_edgeDeploymentPlanArnHasBeenSet = false;

    Aws::String m_edgeDeploymentPlanName;
    bool m_edgeDeploymentPlanNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    int m_edgeDeploymentSuccess{0};
    bool m_edgeDeploymentSuccessHasBeenSet = false;

    int m_edgeDeploymentPending{0};
    bool m_edgeDeploymentPendingHasBeenSet = false;

    int m_edgeDeploymentFailed{0};
    bool m_edgeDeploymentFailedHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
