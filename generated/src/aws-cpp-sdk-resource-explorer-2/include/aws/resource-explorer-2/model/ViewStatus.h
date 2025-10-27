/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/ErrorDetails.h>
#include <aws/resource-explorer-2/model/OperationStatus.h>
#include <aws/resource-explorer-2/model/View.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ResourceExplorer2 {
namespace Model {

/**
 * <p>Contains information about the status of a Resource Explorer view operation
 * in a specific Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ViewStatus">AWS
 * API Reference</a></p>
 */
class ViewStatus {
 public:
  AWS_RESOURCEEXPLORER2_API ViewStatus() = default;
  AWS_RESOURCEEXPLORER2_API ViewStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API ViewStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the view operation. Valid values are
   * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>IN_PROGRESS</code>, or
   * <code>SKIPPED</code>.</p>
   */
  inline OperationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(OperationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ViewStatus& WithStatus(OperationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const View& GetView() const { return m_view; }
  inline bool ViewHasBeenSet() const { return m_viewHasBeenSet; }
  template <typename ViewT = View>
  void SetView(ViewT&& value) {
    m_viewHasBeenSet = true;
    m_view = std::forward<ViewT>(value);
  }
  template <typename ViewT = View>
  ViewStatus& WithView(ViewT&& value) {
    SetView(std::forward<ViewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about any error that occurred during the view operation.</p>
   */
  inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
  inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
  template <typename ErrorDetailsT = ErrorDetails>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = ErrorDetails>
  ViewStatus& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  OperationStatus m_status{OperationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  View m_view;
  bool m_viewHasBeenSet = false;

  ErrorDetails m_errorDetails;
  bool m_errorDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
