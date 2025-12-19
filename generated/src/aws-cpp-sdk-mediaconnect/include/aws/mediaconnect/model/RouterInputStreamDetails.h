/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FailoverRouterInputStreamDetails.h>
#include <aws/mediaconnect/model/MediaConnectFlowRouterInputStreamDetails.h>
#include <aws/mediaconnect/model/MergeRouterInputStreamDetails.h>
#include <aws/mediaconnect/model/StandardRouterInputStreamDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>Configuration details for the router input stream.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputStreamDetails">AWS
 * API Reference</a></p>
 */
class RouterInputStreamDetails {
 public:
  AWS_MEDIACONNECT_API RouterInputStreamDetails() = default;
  AWS_MEDIACONNECT_API RouterInputStreamDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const StandardRouterInputStreamDetails& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardRouterInputStreamDetails>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardRouterInputStreamDetails>
  RouterInputStreamDetails& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FailoverRouterInputStreamDetails& GetFailover() const { return m_failover; }
  inline bool FailoverHasBeenSet() const { return m_failoverHasBeenSet; }
  template <typename FailoverT = FailoverRouterInputStreamDetails>
  void SetFailover(FailoverT&& value) {
    m_failoverHasBeenSet = true;
    m_failover = std::forward<FailoverT>(value);
  }
  template <typename FailoverT = FailoverRouterInputStreamDetails>
  RouterInputStreamDetails& WithFailover(FailoverT&& value) {
    SetFailover(std::forward<FailoverT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MergeRouterInputStreamDetails& GetMerge() const { return m_merge; }
  inline bool MergeHasBeenSet() const { return m_mergeHasBeenSet; }
  template <typename MergeT = MergeRouterInputStreamDetails>
  void SetMerge(MergeT&& value) {
    m_mergeHasBeenSet = true;
    m_merge = std::forward<MergeT>(value);
  }
  template <typename MergeT = MergeRouterInputStreamDetails>
  RouterInputStreamDetails& WithMerge(MergeT&& value) {
    SetMerge(std::forward<MergeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaConnectFlowRouterInputStreamDetails& GetMediaConnectFlow() const { return m_mediaConnectFlow; }
  inline bool MediaConnectFlowHasBeenSet() const { return m_mediaConnectFlowHasBeenSet; }
  template <typename MediaConnectFlowT = MediaConnectFlowRouterInputStreamDetails>
  void SetMediaConnectFlow(MediaConnectFlowT&& value) {
    m_mediaConnectFlowHasBeenSet = true;
    m_mediaConnectFlow = std::forward<MediaConnectFlowT>(value);
  }
  template <typename MediaConnectFlowT = MediaConnectFlowRouterInputStreamDetails>
  RouterInputStreamDetails& WithMediaConnectFlow(MediaConnectFlowT&& value) {
    SetMediaConnectFlow(std::forward<MediaConnectFlowT>(value));
    return *this;
  }
  ///@}
 private:
  StandardRouterInputStreamDetails m_standard;

  FailoverRouterInputStreamDetails m_failover;

  MergeRouterInputStreamDetails m_merge;

  MediaConnectFlowRouterInputStreamDetails m_mediaConnectFlow;
  bool m_standardHasBeenSet = false;
  bool m_failoverHasBeenSet = false;
  bool m_mergeHasBeenSet = false;
  bool m_mediaConnectFlowHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
