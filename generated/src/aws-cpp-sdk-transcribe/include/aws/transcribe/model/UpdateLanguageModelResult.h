/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ModelStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace TranscribeService {
namespace Model {
class UpdateLanguageModelResult {
 public:
  AWS_TRANSCRIBESERVICE_API UpdateLanguageModelResult() = default;
  AWS_TRANSCRIBESERVICE_API UpdateLanguageModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_TRANSCRIBESERVICE_API UpdateLanguageModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the custom language model that was updated.</p>
   */
  inline const Aws::String& GetModelName() const { return m_modelName; }
  template <typename ModelNameT = Aws::String>
  void SetModelName(ModelNameT&& value) {
    m_modelNameHasBeenSet = true;
    m_modelName = std::forward<ModelNameT>(value);
  }
  template <typename ModelNameT = Aws::String>
  UpdateLanguageModelResult& WithModelName(ModelNameT&& value) {
    SetModelName(std::forward<ModelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the specified custom language model.</p>
   */
  inline ModelStatus GetModelStatus() const { return m_modelStatus; }
  inline void SetModelStatus(ModelStatus value) {
    m_modelStatusHasBeenSet = true;
    m_modelStatus = value;
  }
  inline UpdateLanguageModelResult& WithModelStatus(ModelStatus value) {
    SetModelStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the specified custom language model was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  UpdateLanguageModelResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
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
  UpdateLanguageModelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_modelName;

  ModelStatus m_modelStatus{ModelStatus::NOT_SET};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_modelNameHasBeenSet = false;
  bool m_modelStatusHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
