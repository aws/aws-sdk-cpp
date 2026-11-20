/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/JobStatus.h>
#include <aws/textract/model/OutputConfiguration.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {
class GetDocumentInsightsResult {
 public:
  AWS_TEXTRACT_API GetDocumentInsightsResult() = default;
  AWS_TEXTRACT_API GetDocumentInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_TEXTRACT_API GetDocumentInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The current status of the document insights job, indicating whether it is
   * still running, has completed, or has failed. When the job has failed, inspect
   * <code>ErrorType</code> and <code>ErrorMessage</code> for details.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDocumentInsightsResult& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location where the analysis results are written.</p>
   */
  inline const OutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  template <typename OutputConfigurationT = OutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = OutputConfiguration>
  GetDocumentInsightsResult& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of error that caused the job to fail. Present only when the job
   * status is a failure state.</p>
   */
  inline const Aws::String& GetErrorType() const { return m_errorType; }
  template <typename ErrorTypeT = Aws::String>
  void SetErrorType(ErrorTypeT&& value) {
    m_errorTypeHasBeenSet = true;
    m_errorType = std::forward<ErrorTypeT>(value);
  }
  template <typename ErrorTypeT = Aws::String>
  GetDocumentInsightsResult& WithErrorType(ErrorTypeT&& value) {
    SetErrorType(std::forward<ErrorTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the error that caused the job to fail.
   * Present only when the job status is a failure state.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GetDocumentInsightsResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
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
  GetDocumentInsightsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  JobStatus m_status{JobStatus::NOT_SET};

  OutputConfiguration m_outputConfiguration;

  Aws::String m_errorType;

  Aws::String m_errorMessage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_errorTypeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
