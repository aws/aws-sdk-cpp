/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/DatabaseConfigurationRollbackStatus.h>

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
 * <p>Metadata information about a change to the external Slurm accounting database
 * of a HyperPod cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DatabaseConfigurationMetadata">AWS
 * API Reference</a></p>
 */
class DatabaseConfigurationMetadata {
 public:
  AWS_SAGEMAKER_API DatabaseConfigurationMetadata() = default;
  AWS_SAGEMAKER_API DatabaseConfigurationMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API DatabaseConfigurationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether HyperPod restored the previous accounting database configuration
   * after the change failed. Valid values:</p> <ul> <li> <p>
   * <code>NotApplicable</code>: The change failed before HyperPod modified the
   * cluster, for example because the database could not be reached or rejected the
   * credentials, so there was nothing to restore.</p> </li> <li> <p>
   * <code>Reverted</code>: The change failed after it was applied, and HyperPod
   * restored the previous configuration. The cluster continues to use the previous
   * accounting database.</p> </li> <li> <p> <code>RevertFailed</code>: The change
   * failed and HyperPod could not restore the previous configuration, so Slurm
   * accounting on the cluster might not be working.</p> </li> </ul> <p>This field is
   * omitted when the change succeeds.</p>
   */
  inline DatabaseConfigurationRollbackStatus GetRollbackStatus() const { return m_rollbackStatus; }
  inline bool RollbackStatusHasBeenSet() const { return m_rollbackStatusHasBeenSet; }
  inline void SetRollbackStatus(DatabaseConfigurationRollbackStatus value) {
    m_rollbackStatusHasBeenSet = true;
    m_rollbackStatus = value;
  }
  inline DatabaseConfigurationMetadata& WithRollbackStatus(DatabaseConfigurationRollbackStatus value) {
    SetRollbackStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about a change that succeeded, such as an action to
   * take on the cluster.</p>
   */
  inline const Aws::String& GetAdvisory() const { return m_advisory; }
  inline bool AdvisoryHasBeenSet() const { return m_advisoryHasBeenSet; }
  template <typename AdvisoryT = Aws::String>
  void SetAdvisory(AdvisoryT&& value) {
    m_advisoryHasBeenSet = true;
    m_advisory = std::forward<AdvisoryT>(value);
  }
  template <typename AdvisoryT = Aws::String>
  DatabaseConfigurationMetadata& WithAdvisory(AdvisoryT&& value) {
    SetAdvisory(std::forward<AdvisoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An error message describing why the accounting database change failed, and
   * how to resolve it.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  DatabaseConfigurationMetadata& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}
 private:
  DatabaseConfigurationRollbackStatus m_rollbackStatus{DatabaseConfigurationRollbackStatus::NOT_SET};

  Aws::String m_advisory;

  Aws::String m_failureMessage;
  bool m_rollbackStatusHasBeenSet = false;
  bool m_advisoryHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
