/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/RemoteSourceActionJob.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {
class StartRemoteSourceActionJobResult {
 public:
  AWS_MGN_API StartRemoteSourceActionJobResult() = default;
  AWS_MGN_API StartRemoteSourceActionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MGN_API StartRemoteSourceActionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The job that was started.</p>
   */
  inline const RemoteSourceActionJob& GetRemoteSourceActionJob() const { return m_remoteSourceActionJob; }
  template <typename RemoteSourceActionJobT = RemoteSourceActionJob>
  void SetRemoteSourceActionJob(RemoteSourceActionJobT&& value) {
    m_remoteSourceActionJobHasBeenSet = true;
    m_remoteSourceActionJob = std::forward<RemoteSourceActionJobT>(value);
  }
  template <typename RemoteSourceActionJobT = RemoteSourceActionJob>
  StartRemoteSourceActionJobResult& WithRemoteSourceActionJob(RemoteSourceActionJobT&& value) {
    SetRemoteSourceActionJob(std::forward<RemoteSourceActionJobT>(value));
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
  StartRemoteSourceActionJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RemoteSourceActionJob m_remoteSourceActionJob;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_remoteSourceActionJobHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
