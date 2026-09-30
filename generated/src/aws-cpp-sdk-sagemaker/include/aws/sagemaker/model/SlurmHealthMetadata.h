/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SlurmHealthComponent.h>
#include <aws/sagemaker/model/SlurmHealthReason.h>
#include <aws/sagemaker/model/SlurmHealthStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Metadata information about the health of a Slurm component on the controller
 * node of a HyperPod cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SlurmHealthMetadata">AWS
 * API Reference</a></p>
 */
class SlurmHealthMetadata {
 public:
  AWS_SAGEMAKER_API SlurmHealthMetadata() = default;
  AWS_SAGEMAKER_API SlurmHealthMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API SlurmHealthMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Slurm component that the health information describes. The valid value is
   * <code>Slurmdbd</code>, the Slurm accounting daemon.</p>
   */
  inline SlurmHealthComponent GetComponent() const { return m_component; }
  inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
  inline void SetComponent(SlurmHealthComponent value) {
    m_componentHasBeenSet = true;
    m_component = value;
  }
  inline SlurmHealthMetadata& WithComponent(SlurmHealthComponent value) {
    SetComponent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health of the component. Valid values are <code>Healthy</code> and
   * <code>Unhealthy</code>.</p>
   */
  inline SlurmHealthStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SlurmHealthStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SlurmHealthMetadata& WithStatus(SlurmHealthStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the component is unhealthy. Valid values:</p> <ul> <li> <p>
   * <code>DaemonDown</code>: The daemon is not running, so job accounting records
   * are not being written.</p> </li> <li> <p> <code>DaemonDisabled</code>: The
   * daemon is running and its accounting database is responding, but the daemon is
   * not enabled to start automatically. Job accounting stops the next time the
   * controller node restarts.</p> </li> <li> <p> <code>DbUnreachable</code>: The
   * daemon is running, but its accounting database did not respond. Job accounting
   * records might not be written.</p> </li> </ul> <p>This field is omitted when the
   * component is healthy.</p>
   */
  inline SlurmHealthReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(SlurmHealthReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline SlurmHealthMetadata& WithReason(SlurmHealthReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  SlurmHealthComponent m_component{SlurmHealthComponent::NOT_SET};

  SlurmHealthStatus m_status{SlurmHealthStatus::NOT_SET};

  SlurmHealthReason m_reason{SlurmHealthReason::NOT_SET};
  bool m_componentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
