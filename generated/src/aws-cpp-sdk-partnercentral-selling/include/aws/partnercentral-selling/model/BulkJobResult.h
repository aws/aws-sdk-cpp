/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/BulkRecordStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>The outcome of processing a single record within a bulk job. It identifies
 * the record and, when the record didn't succeed, carries an error code and
 * message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/BulkJobResult">AWS
 * API Reference</a></p>
 */
class BulkJobResult {
 public:
  AWS_PARTNERCENTRALSELLING_API BulkJobResult() = default;
  AWS_PARTNERCENTRALSELLING_API BulkJobResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API BulkJobResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the record in the bulk job file.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  BulkJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The outcome of processing the record.</p>
   */
  inline BulkRecordStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BulkRecordStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BulkJobResult& WithStatus(BulkRecordStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This value is the identifier of the resource that Partner Central created or
   * updated for the record. A failed record includes this value when Partner Central
   * created the resource before the failure.</p>
   */
  inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
  inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
  template <typename ResourceIdentifierT = Aws::String>
  void SetResourceIdentifier(ResourceIdentifierT&& value) {
    m_resourceIdentifierHasBeenSet = true;
    m_resourceIdentifier = std::forward<ResourceIdentifierT>(value);
  }
  template <typename ResourceIdentifierT = Aws::String>
  BulkJobResult& WithResourceIdentifier(ResourceIdentifierT&& value) {
    SetResourceIdentifier(std::forward<ResourceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that identifies why the record failed. Present only when the record
   * failed.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  BulkJobResult& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of why the record failed. Present only when the record
   * failed.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  BulkJobResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestId;

  BulkRecordStatus m_status{BulkRecordStatus::NOT_SET};

  Aws::String m_resourceIdentifier;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_resourceIdentifierHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
