/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Contains error information for a username hash lookup that failed in a batch
 * uname lookup request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchUnameErrorResponseItem">AWS
 * API Reference</a></p>
 */
class BatchUnameErrorResponseItem {
 public:
  AWS_WICKR_API BatchUnameErrorResponseItem() = default;
  AWS_WICKR_API BatchUnameErrorResponseItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API BatchUnameErrorResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field that caused the error.</p>
   */
  inline const Aws::String& GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  template <typename FieldT = Aws::String>
  void SetField(FieldT&& value) {
    m_fieldHasBeenSet = true;
    m_field = std::forward<FieldT>(value);
  }
  template <typename FieldT = Aws::String>
  BatchUnameErrorResponseItem& WithField(FieldT&& value) {
    SetField(std::forward<FieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of why the username hash lookup failed.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  BatchUnameErrorResponseItem& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username hash that failed to be looked up.</p>
   */
  inline const Aws::String& GetUname() const { return m_uname; }
  inline bool UnameHasBeenSet() const { return m_unameHasBeenSet; }
  template <typename UnameT = Aws::String>
  void SetUname(UnameT&& value) {
    m_unameHasBeenSet = true;
    m_uname = std::forward<UnameT>(value);
  }
  template <typename UnameT = Aws::String>
  BatchUnameErrorResponseItem& WithUname(UnameT&& value) {
    SetUname(std::forward<UnameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_field;

  Aws::String m_reason;

  Aws::String m_uname;
  bool m_fieldHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_unameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
