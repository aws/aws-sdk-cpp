/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ResourceDiscoveryErrorCode.h>
#include <aws/resiliencehubv2/model/ResourceDiscoveryRunStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains the status of resource discovery for a service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ResourceDiscoveryStatus">AWS
 * API Reference</a></p>
 */
class ResourceDiscoveryStatus {
 public:
  AWS_RESILIENCEHUBV2_API ResourceDiscoveryStatus() = default;
  AWS_RESILIENCEHUBV2_API ResourceDiscoveryStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ResourceDiscoveryStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of resource discovery.</p>
   */
  inline ResourceDiscoveryRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ResourceDiscoveryRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ResourceDiscoveryStatus& WithStatus(ResourceDiscoveryRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the last resource discovery run.</p>
   */
  inline const Aws::Utils::DateTime& GetLastRunAt() const { return m_lastRunAt; }
  inline bool LastRunAtHasBeenSet() const { return m_lastRunAtHasBeenSet; }
  template <typename LastRunAtT = Aws::Utils::DateTime>
  void SetLastRunAt(LastRunAtT&& value) {
    m_lastRunAtHasBeenSet = true;
    m_lastRunAt = std::forward<LastRunAtT>(value);
  }
  template <typename LastRunAtT = Aws::Utils::DateTime>
  ResourceDiscoveryStatus& WithLastRunAt(LastRunAtT&& value) {
    SetLastRunAt(std::forward<LastRunAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code if resource discovery failed.</p>
   */
  inline ResourceDiscoveryErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(ResourceDiscoveryErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline ResourceDiscoveryStatus& WithErrorCode(ResourceDiscoveryErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the error if resource discovery failed.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  ResourceDiscoveryStatus& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  ResourceDiscoveryRunStatus m_status{ResourceDiscoveryRunStatus::NOT_SET};

  Aws::Utils::DateTime m_lastRunAt{};

  ResourceDiscoveryErrorCode m_errorCode{ResourceDiscoveryErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_statusHasBeenSet = false;
  bool m_lastRunAtHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
