/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FlowTransitEncryption.h>

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
 * <p>Configuration settings for connecting a router output to a MediaConnect flow
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaConnectFlowRouterOutputConfiguration">AWS
 * API Reference</a></p>
 */
class MediaConnectFlowRouterOutputConfiguration {
 public:
  AWS_MEDIACONNECT_API MediaConnectFlowRouterOutputConfiguration() = default;
  AWS_MEDIACONNECT_API MediaConnectFlowRouterOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MediaConnectFlowRouterOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the flow to connect to this router output.</p>
   */
  inline const Aws::String& GetFlowArn() const { return m_flowArn; }
  inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
  template <typename FlowArnT = Aws::String>
  void SetFlowArn(FlowArnT&& value) {
    m_flowArnHasBeenSet = true;
    m_flowArn = std::forward<FlowArnT>(value);
  }
  template <typename FlowArnT = Aws::String>
  MediaConnectFlowRouterOutputConfiguration& WithFlowArn(FlowArnT&& value) {
    SetFlowArn(std::forward<FlowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the flow source to connect to this router output.</p>
   */
  inline const Aws::String& GetFlowSourceArn() const { return m_flowSourceArn; }
  inline bool FlowSourceArnHasBeenSet() const { return m_flowSourceArnHasBeenSet; }
  template <typename FlowSourceArnT = Aws::String>
  void SetFlowSourceArn(FlowSourceArnT&& value) {
    m_flowSourceArnHasBeenSet = true;
    m_flowSourceArn = std::forward<FlowSourceArnT>(value);
  }
  template <typename FlowSourceArnT = Aws::String>
  MediaConnectFlowRouterOutputConfiguration& WithFlowSourceArn(FlowSourceArnT&& value) {
    SetFlowSourceArn(std::forward<FlowSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the flow destination when connected to this
   * router output.</p>
   */
  inline const FlowTransitEncryption& GetDestinationTransitEncryption() const { return m_destinationTransitEncryption; }
  inline bool DestinationTransitEncryptionHasBeenSet() const { return m_destinationTransitEncryptionHasBeenSet; }
  template <typename DestinationTransitEncryptionT = FlowTransitEncryption>
  void SetDestinationTransitEncryption(DestinationTransitEncryptionT&& value) {
    m_destinationTransitEncryptionHasBeenSet = true;
    m_destinationTransitEncryption = std::forward<DestinationTransitEncryptionT>(value);
  }
  template <typename DestinationTransitEncryptionT = FlowTransitEncryption>
  MediaConnectFlowRouterOutputConfiguration& WithDestinationTransitEncryption(DestinationTransitEncryptionT&& value) {
    SetDestinationTransitEncryption(std::forward<DestinationTransitEncryptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_flowArn;
  bool m_flowArnHasBeenSet = false;

  Aws::String m_flowSourceArn;
  bool m_flowSourceArnHasBeenSet = false;

  FlowTransitEncryption m_destinationTransitEncryption;
  bool m_destinationTransitEncryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
