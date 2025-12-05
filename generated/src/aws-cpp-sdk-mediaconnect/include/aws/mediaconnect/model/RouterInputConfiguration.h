/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FailoverRouterInputConfiguration.h>
#include <aws/mediaconnect/model/MediaConnectFlowRouterInputConfiguration.h>
#include <aws/mediaconnect/model/MergeRouterInputConfiguration.h>
#include <aws/mediaconnect/model/StandardRouterInputConfiguration.h>

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
 * <p>The configuration settings for a router input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class RouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API RouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API RouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const StandardRouterInputConfiguration& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardRouterInputConfiguration>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardRouterInputConfiguration>
  RouterInputConfiguration& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FailoverRouterInputConfiguration& GetFailover() const { return m_failover; }
  inline bool FailoverHasBeenSet() const { return m_failoverHasBeenSet; }
  template <typename FailoverT = FailoverRouterInputConfiguration>
  void SetFailover(FailoverT&& value) {
    m_failoverHasBeenSet = true;
    m_failover = std::forward<FailoverT>(value);
  }
  template <typename FailoverT = FailoverRouterInputConfiguration>
  RouterInputConfiguration& WithFailover(FailoverT&& value) {
    SetFailover(std::forward<FailoverT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MergeRouterInputConfiguration& GetMerge() const { return m_merge; }
  inline bool MergeHasBeenSet() const { return m_mergeHasBeenSet; }
  template <typename MergeT = MergeRouterInputConfiguration>
  void SetMerge(MergeT&& value) {
    m_mergeHasBeenSet = true;
    m_merge = std::forward<MergeT>(value);
  }
  template <typename MergeT = MergeRouterInputConfiguration>
  RouterInputConfiguration& WithMerge(MergeT&& value) {
    SetMerge(std::forward<MergeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaConnectFlowRouterInputConfiguration& GetMediaConnectFlow() const { return m_mediaConnectFlow; }
  inline bool MediaConnectFlowHasBeenSet() const { return m_mediaConnectFlowHasBeenSet; }
  template <typename MediaConnectFlowT = MediaConnectFlowRouterInputConfiguration>
  void SetMediaConnectFlow(MediaConnectFlowT&& value) {
    m_mediaConnectFlowHasBeenSet = true;
    m_mediaConnectFlow = std::forward<MediaConnectFlowT>(value);
  }
  template <typename MediaConnectFlowT = MediaConnectFlowRouterInputConfiguration>
  RouterInputConfiguration& WithMediaConnectFlow(MediaConnectFlowT&& value) {
    SetMediaConnectFlow(std::forward<MediaConnectFlowT>(value));
    return *this;
  }
  ///@}
 private:
  StandardRouterInputConfiguration m_standard;

  FailoverRouterInputConfiguration m_failover;

  MergeRouterInputConfiguration m_merge;

  MediaConnectFlowRouterInputConfiguration m_mediaConnectFlow;
  bool m_standardHasBeenSet = false;
  bool m_failoverHasBeenSet = false;
  bool m_mergeHasBeenSet = false;
  bool m_mediaConnectFlowHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
