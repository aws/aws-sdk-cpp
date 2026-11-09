/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionAlertCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {

/**
 * <p>An active alert about a running ingestion — operational issues or updates to
 * processing state. Cleared when the issue resolves.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IngestionAlert">AWS
 * API Reference</a></p>
 */
class IngestionAlert {
 public:
  AWS_OPENSEARCHSERVERLESS_API IngestionAlert() = default;
  AWS_OPENSEARCHSERVERLESS_API IngestionAlert(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API IngestionAlert& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The code that identifies the alert.</p>
   */
  inline IngestionAlertCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(IngestionAlertCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline IngestionAlert& WithCode(IngestionAlertCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the alert.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  IngestionAlert& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  IngestionAlertCode m_code{IngestionAlertCode::NOT_SET};

  Aws::String m_message;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
