/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/RetrieveErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>An error returned for a single assistant association whose knowledge base
 * retrieval failed during a <code>Retrieve</code> operation. The overall operation
 * still succeeds and returns the results from the associations that were queried
 * successfully.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RetrieveError">AWS
 * API Reference</a></p>
 */
class RetrieveError {
 public:
  AWS_QCONNECT_API RetrieveError() = default;
  AWS_QCONNECT_API RetrieveError(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API RetrieveError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the assistant association whose knowledge base retrieval
   * failed.</p>
   */
  inline const Aws::String& GetAssociationId() const { return m_associationId; }
  inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
  template <typename AssociationIdT = Aws::String>
  void SetAssociationId(AssociationIdT&& value) {
    m_associationIdHasBeenSet = true;
    m_associationId = std::forward<AssociationIdT>(value);
  }
  template <typename AssociationIdT = Aws::String>
  RetrieveError& WithAssociationId(AssociationIdT&& value) {
    SetAssociationId(std::forward<AssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code that categorizes the retrieval failure for the assistant
   * association.</p>
   */
  inline RetrieveErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(RetrieveErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline RetrieveError& WithCode(RetrieveErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the retrieval failure for the assistant
   * association.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  RetrieveError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_associationId;

  RetrieveErrorCode m_code{RetrieveErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_associationIdHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
