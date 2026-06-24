/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/FirstBoot.h>
#include <aws/mgn/model/LastKnownCheck.h>
#include <aws/mgn/model/LastKnownCheckStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Launched instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LaunchedInstance">AWS
 * API Reference</a></p>
 */
class LaunchedInstance {
 public:
  AWS_MGN_API LaunchedInstance() = default;
  AWS_MGN_API LaunchedInstance(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API LaunchedInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Launched instance EC2 ID.</p>
   */
  inline const Aws::String& GetEc2InstanceID() const { return m_ec2InstanceID; }
  inline bool Ec2InstanceIDHasBeenSet() const { return m_ec2InstanceIDHasBeenSet; }
  template <typename Ec2InstanceIDT = Aws::String>
  void SetEc2InstanceID(Ec2InstanceIDT&& value) {
    m_ec2InstanceIDHasBeenSet = true;
    m_ec2InstanceID = std::forward<Ec2InstanceIDT>(value);
  }
  template <typename Ec2InstanceIDT = Aws::String>
  LaunchedInstance& WithEc2InstanceID(Ec2InstanceIDT&& value) {
    SetEc2InstanceID(std::forward<Ec2InstanceIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Launched instance Job ID.</p>
   */
  inline const Aws::String& GetJobID() const { return m_jobID; }
  inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
  template <typename JobIDT = Aws::String>
  void SetJobID(JobIDT&& value) {
    m_jobIDHasBeenSet = true;
    m_jobID = std::forward<JobIDT>(value);
  }
  template <typename JobIDT = Aws::String>
  LaunchedInstance& WithJobID(JobIDT&& value) {
    SetJobID(std::forward<JobIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Launched instance first boot.</p>
   */
  inline FirstBoot GetFirstBoot() const { return m_firstBoot; }
  inline bool FirstBootHasBeenSet() const { return m_firstBootHasBeenSet; }
  inline void SetFirstBoot(FirstBoot value) {
    m_firstBootHasBeenSet = true;
    m_firstBoot = value;
  }
  inline LaunchedInstance& WithFirstBoot(FirstBoot value) {
    SetFirstBoot(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Launched instance last known checks.</p>
   */
  inline const Aws::Vector<LastKnownCheck>& GetLastKnownChecks() const { return m_lastKnownChecks; }
  inline bool LastKnownChecksHasBeenSet() const { return m_lastKnownChecksHasBeenSet; }
  template <typename LastKnownChecksT = Aws::Vector<LastKnownCheck>>
  void SetLastKnownChecks(LastKnownChecksT&& value) {
    m_lastKnownChecksHasBeenSet = true;
    m_lastKnownChecks = std::forward<LastKnownChecksT>(value);
  }
  template <typename LastKnownChecksT = Aws::Vector<LastKnownCheck>>
  LaunchedInstance& WithLastKnownChecks(LastKnownChecksT&& value) {
    SetLastKnownChecks(std::forward<LastKnownChecksT>(value));
    return *this;
  }
  template <typename LastKnownChecksT = LastKnownCheck>
  LaunchedInstance& AddLastKnownChecks(LastKnownChecksT&& value) {
    m_lastKnownChecksHasBeenSet = true;
    m_lastKnownChecks.emplace_back(std::forward<LastKnownChecksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Launched instance last known FSx checks status.</p>
   */
  inline LastKnownCheckStatus GetLastKnownFsxChecksStatus() const { return m_lastKnownFsxChecksStatus; }
  inline bool LastKnownFsxChecksStatusHasBeenSet() const { return m_lastKnownFsxChecksStatusHasBeenSet; }
  inline void SetLastKnownFsxChecksStatus(LastKnownCheckStatus value) {
    m_lastKnownFsxChecksStatusHasBeenSet = true;
    m_lastKnownFsxChecksStatus = value;
  }
  inline LaunchedInstance& WithLastKnownFsxChecksStatus(LastKnownCheckStatus value) {
    SetLastKnownFsxChecksStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ec2InstanceID;

  Aws::String m_jobID;

  FirstBoot m_firstBoot{FirstBoot::NOT_SET};

  Aws::Vector<LastKnownCheck> m_lastKnownChecks;

  LastKnownCheckStatus m_lastKnownFsxChecksStatus{LastKnownCheckStatus::NOT_SET};
  bool m_ec2InstanceIDHasBeenSet = false;
  bool m_jobIDHasBeenSet = false;
  bool m_firstBootHasBeenSet = false;
  bool m_lastKnownChecksHasBeenSet = false;
  bool m_lastKnownFsxChecksStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
