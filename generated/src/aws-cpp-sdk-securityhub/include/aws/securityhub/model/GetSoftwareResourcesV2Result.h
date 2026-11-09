/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SoftwareResourceResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class GetSoftwareResourcesV2Result {
 public:
  AWS_SECURITYHUB_API GetSoftwareResourcesV2Result() = default;
  AWS_SECURITYHUB_API GetSoftwareResourcesV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API GetSoftwareResourcesV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of resources that contain the specified software package.</p>
   */
  inline const Aws::Vector<SoftwareResourceResult>& GetSoftwareResources() const { return m_softwareResources; }
  template <typename SoftwareResourcesT = Aws::Vector<SoftwareResourceResult>>
  void SetSoftwareResources(SoftwareResourcesT&& value) {
    m_softwareResourcesHasBeenSet = true;
    m_softwareResources = std::forward<SoftwareResourcesT>(value);
  }
  template <typename SoftwareResourcesT = Aws::Vector<SoftwareResourceResult>>
  GetSoftwareResourcesV2Result& WithSoftwareResources(SoftwareResourcesT&& value) {
    SetSoftwareResources(std::forward<SoftwareResourcesT>(value));
    return *this;
  }
  template <typename SoftwareResourcesT = SoftwareResourceResult>
  GetSoftwareResourcesV2Result& AddSoftwareResources(SoftwareResourcesT&& value) {
    m_softwareResourcesHasBeenSet = true;
    m_softwareResources.emplace_back(std::forward<SoftwareResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use to request the next page of results. Otherwise,
   * this parameter is null.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetSoftwareResourcesV2Result& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  GetSoftwareResourcesV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SoftwareResourceResult> m_softwareResources;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_softwareResourcesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
