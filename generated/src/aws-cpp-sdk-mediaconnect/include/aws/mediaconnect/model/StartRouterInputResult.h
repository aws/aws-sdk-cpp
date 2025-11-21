/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MaintenanceSchedule.h>
#include <aws/mediaconnect/model/MaintenanceScheduleType.h>
#include <aws/mediaconnect/model/RouterInputState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {
class StartRouterInputResult {
 public:
  AWS_MEDIACONNECT_API StartRouterInputResult() = default;
  AWS_MEDIACONNECT_API StartRouterInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API StartRouterInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the router input that was started.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StartRouterInputResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the router input that was started.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartRouterInputResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the router input after being started.</p>
   */
  inline RouterInputState GetState() const { return m_state; }
  inline void SetState(RouterInputState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline StartRouterInputResult& WithState(RouterInputState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of maintenance schedule associated with the router input.</p>
   */
  inline MaintenanceScheduleType GetMaintenanceScheduleType() const { return m_maintenanceScheduleType; }
  inline void SetMaintenanceScheduleType(MaintenanceScheduleType value) {
    m_maintenanceScheduleTypeHasBeenSet = true;
    m_maintenanceScheduleType = value;
  }
  inline StartRouterInputResult& WithMaintenanceScheduleType(MaintenanceScheduleType value) {
    SetMaintenanceScheduleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the maintenance schedule for the router input.</p>
   */
  inline const MaintenanceSchedule& GetMaintenanceSchedule() const { return m_maintenanceSchedule; }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  void SetMaintenanceSchedule(MaintenanceScheduleT&& value) {
    m_maintenanceScheduleHasBeenSet = true;
    m_maintenanceSchedule = std::forward<MaintenanceScheduleT>(value);
  }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  StartRouterInputResult& WithMaintenanceSchedule(MaintenanceScheduleT&& value) {
    SetMaintenanceSchedule(std::forward<MaintenanceScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartRouterInputResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  RouterInputState m_state{RouterInputState::NOT_SET};
  bool m_stateHasBeenSet = false;

  MaintenanceScheduleType m_maintenanceScheduleType{MaintenanceScheduleType::NOT_SET};
  bool m_maintenanceScheduleTypeHasBeenSet = false;

  MaintenanceSchedule m_maintenanceSchedule;
  bool m_maintenanceScheduleHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
