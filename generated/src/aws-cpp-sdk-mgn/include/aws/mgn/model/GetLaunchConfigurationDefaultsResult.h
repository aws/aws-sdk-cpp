/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SourceServerVolumeConfiguration.h>

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
class GetLaunchConfigurationDefaultsResult {
 public:
  AWS_MGN_API GetLaunchConfigurationDefaultsResult() = default;
  AWS_MGN_API GetLaunchConfigurationDefaultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MGN_API GetLaunchConfigurationDefaultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Source Server ID of the launch configuration defaults.</p>
   */
  inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
  template <typename SourceServerIDT = Aws::String>
  void SetSourceServerID(SourceServerIDT&& value) {
    m_sourceServerIDHasBeenSet = true;
    m_sourceServerID = std::forward<SourceServerIDT>(value);
  }
  template <typename SourceServerIDT = Aws::String>
  GetLaunchConfigurationDefaultsResult& WithSourceServerID(SourceServerIDT&& value) {
    SetSourceServerID(std::forward<SourceServerIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Disks up to this size, in GiB, use the small volume configuration, and larger
   * disks use the large one. <code>0</code> means every disk uses the large one.</p>
   */
  inline long long GetSmallVolumeMaxSize() const { return m_smallVolumeMaxSize; }
  inline void SetSmallVolumeMaxSize(long long value) {
    m_smallVolumeMaxSizeHasBeenSet = true;
    m_smallVolumeMaxSize = value;
  }
  inline GetLaunchConfigurationDefaultsResult& WithSmallVolumeMaxSize(long long value) {
    SetSmallVolumeMaxSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Volume configuration for disks up to <code>smallVolumeMaxSize</code>. Omitted
   * when none of its fields is set.</p>
   */
  inline const SourceServerVolumeConfiguration& GetSmallVolumeConfiguration() const { return m_smallVolumeConfiguration; }
  template <typename SmallVolumeConfigurationT = SourceServerVolumeConfiguration>
  void SetSmallVolumeConfiguration(SmallVolumeConfigurationT&& value) {
    m_smallVolumeConfigurationHasBeenSet = true;
    m_smallVolumeConfiguration = std::forward<SmallVolumeConfigurationT>(value);
  }
  template <typename SmallVolumeConfigurationT = SourceServerVolumeConfiguration>
  GetLaunchConfigurationDefaultsResult& WithSmallVolumeConfiguration(SmallVolumeConfigurationT&& value) {
    SetSmallVolumeConfiguration(std::forward<SmallVolumeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Volume configuration for disks larger than <code>smallVolumeMaxSize</code>.
   * Omitted when none of its fields is set.</p>
   */
  inline const SourceServerVolumeConfiguration& GetLargeVolumeConfiguration() const { return m_largeVolumeConfiguration; }
  template <typename LargeVolumeConfigurationT = SourceServerVolumeConfiguration>
  void SetLargeVolumeConfiguration(LargeVolumeConfigurationT&& value) {
    m_largeVolumeConfigurationHasBeenSet = true;
    m_largeVolumeConfiguration = std::forward<LargeVolumeConfigurationT>(value);
  }
  template <typename LargeVolumeConfigurationT = SourceServerVolumeConfiguration>
  GetLaunchConfigurationDefaultsResult& WithLargeVolumeConfiguration(LargeVolumeConfigurationT&& value) {
    SetLargeVolumeConfiguration(std::forward<LargeVolumeConfigurationT>(value));
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
  GetLaunchConfigurationDefaultsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sourceServerID;

  long long m_smallVolumeMaxSize{0};

  SourceServerVolumeConfiguration m_smallVolumeConfiguration;

  SourceServerVolumeConfiguration m_largeVolumeConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sourceServerIDHasBeenSet = false;
  bool m_smallVolumeMaxSizeHasBeenSet = false;
  bool m_smallVolumeConfigurationHasBeenSet = false;
  bool m_largeVolumeConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
