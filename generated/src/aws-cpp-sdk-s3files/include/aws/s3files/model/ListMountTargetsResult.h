/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/ListMountTargetsDescription.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {
class ListMountTargetsResult {
 public:
  AWS_S3FILES_API ListMountTargetsResult() = default;
  AWS_S3FILES_API ListMountTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3FILES_API ListMountTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token to use in a subsequent request if more results are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMountTargetsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of mount target descriptions.</p>
   */
  inline const Aws::Vector<ListMountTargetsDescription>& GetMountTargets() const { return m_mountTargets; }
  template <typename MountTargetsT = Aws::Vector<ListMountTargetsDescription>>
  void SetMountTargets(MountTargetsT&& value) {
    m_mountTargetsHasBeenSet = true;
    m_mountTargets = std::forward<MountTargetsT>(value);
  }
  template <typename MountTargetsT = Aws::Vector<ListMountTargetsDescription>>
  ListMountTargetsResult& WithMountTargets(MountTargetsT&& value) {
    SetMountTargets(std::forward<MountTargetsT>(value));
    return *this;
  }
  template <typename MountTargetsT = ListMountTargetsDescription>
  ListMountTargetsResult& AddMountTargets(MountTargetsT&& value) {
    m_mountTargetsHasBeenSet = true;
    m_mountTargets.emplace_back(std::forward<MountTargetsT>(value));
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
  ListMountTargetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ListMountTargetsDescription> m_mountTargets;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_mountTargetsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
