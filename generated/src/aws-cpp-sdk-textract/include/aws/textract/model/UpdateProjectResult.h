/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ProjectStatus.h>

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
class UpdateProjectResult {
 public:
  AWS_TEXTRACT_API UpdateProjectResult() = default;
  AWS_TEXTRACT_API UpdateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_TEXTRACT_API UpdateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project that was updated.</p>
   */
  inline const Aws::String& GetProjectArn() const { return m_projectArn; }
  template <typename ProjectArnT = Aws::String>
  void SetProjectArn(ProjectArnT&& value) {
    m_projectArnHasBeenSet = true;
    m_projectArn = std::forward<ProjectArnT>(value);
  }
  template <typename ProjectArnT = Aws::String>
  UpdateProjectResult& WithProjectArn(ProjectArnT&& value) {
    SetProjectArn(std::forward<ProjectArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the project after the update.</p>
   */
  inline ProjectStatus GetStatus() const { return m_status; }
  inline void SetStatus(ProjectStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateProjectResult& WithStatus(ProjectStatus value) {
    SetStatus(value);
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
  UpdateProjectResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_projectArn;

  ProjectStatus m_status{ProjectStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_projectArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
