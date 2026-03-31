/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ArtifactMetadataItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
class BatchGetArtifactMetadataResult {
 public:
  AWS_SECURITYAGENT_API BatchGetArtifactMetadataResult() = default;
  AWS_SECURITYAGENT_API BatchGetArtifactMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetArtifactMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of artifact metadata</p>
   */
  inline const Aws::Vector<ArtifactMetadataItem>& GetArtifactMetadataList() const { return m_artifactMetadataList; }
  template <typename ArtifactMetadataListT = Aws::Vector<ArtifactMetadataItem>>
  void SetArtifactMetadataList(ArtifactMetadataListT&& value) {
    m_artifactMetadataListHasBeenSet = true;
    m_artifactMetadataList = std::forward<ArtifactMetadataListT>(value);
  }
  template <typename ArtifactMetadataListT = Aws::Vector<ArtifactMetadataItem>>
  BatchGetArtifactMetadataResult& WithArtifactMetadataList(ArtifactMetadataListT&& value) {
    SetArtifactMetadataList(std::forward<ArtifactMetadataListT>(value));
    return *this;
  }
  template <typename ArtifactMetadataListT = ArtifactMetadataItem>
  BatchGetArtifactMetadataResult& AddArtifactMetadataList(ArtifactMetadataListT&& value) {
    m_artifactMetadataListHasBeenSet = true;
    m_artifactMetadataList.emplace_back(std::forward<ArtifactMetadataListT>(value));
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
  BatchGetArtifactMetadataResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ArtifactMetadataItem> m_artifactMetadataList;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_artifactMetadataListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
