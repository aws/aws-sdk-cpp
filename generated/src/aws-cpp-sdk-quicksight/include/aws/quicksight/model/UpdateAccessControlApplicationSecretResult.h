/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class UpdateAccessControlApplicationSecretResult {
 public:
  AWS_QUICKSIGHT_API UpdateAccessControlApplicationSecretResult() = default;
  AWS_QUICKSIGHT_API UpdateAccessControlApplicationSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API UpdateAccessControlApplicationSecretResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateAccessControlApplicationSecretResult& WithStatus(int value) {
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
  UpdateAccessControlApplicationSecretResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the client secret.</p>
   */
  inline const Aws::String& GetClientSecretId() const { return m_clientSecretId; }
  template <typename ClientSecretIdT = Aws::String>
  void SetClientSecretId(ClientSecretIdT&& value) {
    m_clientSecretIdHasBeenSet = true;
    m_clientSecretId = std::forward<ClientSecretIdT>(value);
  }
  template <typename ClientSecretIdT = Aws::String>
  UpdateAccessControlApplicationSecretResult& WithClientSecretId(ClientSecretIdT&& value) {
    SetClientSecretId(std::forward<ClientSecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the client secret was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateAccessControlApplicationSecretResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region ARNs of the client secret after the update.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetRegionalSecretManagerArns() const { return m_regionalSecretManagerArns; }
  template <typename RegionalSecretManagerArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetRegionalSecretManagerArns(RegionalSecretManagerArnsT&& value) {
    m_regionalSecretManagerArnsHasBeenSet = true;
    m_regionalSecretManagerArns = std::forward<RegionalSecretManagerArnsT>(value);
  }
  template <typename RegionalSecretManagerArnsT = Aws::Map<Aws::String, Aws::String>>
  UpdateAccessControlApplicationSecretResult& WithRegionalSecretManagerArns(RegionalSecretManagerArnsT&& value) {
    SetRegionalSecretManagerArns(std::forward<RegionalSecretManagerArnsT>(value));
    return *this;
  }
  template <typename RegionalSecretManagerArnsKeyT = Aws::String, typename RegionalSecretManagerArnsValueT = Aws::String>
  UpdateAccessControlApplicationSecretResult& AddRegionalSecretManagerArns(RegionalSecretManagerArnsKeyT&& key,
                                                                           RegionalSecretManagerArnsValueT&& value) {
    m_regionalSecretManagerArnsHasBeenSet = true;
    m_regionalSecretManagerArns.emplace(std::forward<RegionalSecretManagerArnsKeyT>(key),
                                        std::forward<RegionalSecretManagerArnsValueT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_status{0};

  Aws::String m_requestId;

  Aws::String m_clientSecretId;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_regionalSecretManagerArns;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_clientSecretIdHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_regionalSecretManagerArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
