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
 * <p>Configuration settings for connecting a router input to a flow
 * output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaConnectFlowRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class MediaConnectFlowRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API MediaConnectFlowRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API MediaConnectFlowRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MediaConnectFlowRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the flow to connect to.</p>
   */
  inline const Aws::String& GetFlowArn() const { return m_flowArn; }
  inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
  template <typename FlowArnT = Aws::String>
  void SetFlowArn(FlowArnT&& value) {
    m_flowArnHasBeenSet = true;
    m_flowArn = std::forward<FlowArnT>(value);
  }
  template <typename FlowArnT = Aws::String>
  MediaConnectFlowRouterInputConfiguration& WithFlowArn(FlowArnT&& value) {
    SetFlowArn(std::forward<FlowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the flow output to connect to this router input.</p>
   */
  inline const Aws::String& GetFlowOutputArn() const { return m_flowOutputArn; }
  inline bool FlowOutputArnHasBeenSet() const { return m_flowOutputArnHasBeenSet; }
  template <typename FlowOutputArnT = Aws::String>
  void SetFlowOutputArn(FlowOutputArnT&& value) {
    m_flowOutputArnHasBeenSet = true;
    m_flowOutputArn = std::forward<FlowOutputArnT>(value);
  }
  template <typename FlowOutputArnT = Aws::String>
  MediaConnectFlowRouterInputConfiguration& WithFlowOutputArn(FlowOutputArnT&& value) {
    SetFlowOutputArn(std::forward<FlowOutputArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The decryption configuration for the flow source when connected to this
   * router input.</p>
   */
  inline const FlowTransitEncryption& GetSourceTransitDecryption() const { return m_sourceTransitDecryption; }
  inline bool SourceTransitDecryptionHasBeenSet() const { return m_sourceTransitDecryptionHasBeenSet; }
  template <typename SourceTransitDecryptionT = FlowTransitEncryption>
  void SetSourceTransitDecryption(SourceTransitDecryptionT&& value) {
    m_sourceTransitDecryptionHasBeenSet = true;
    m_sourceTransitDecryption = std::forward<SourceTransitDecryptionT>(value);
  }
  template <typename SourceTransitDecryptionT = FlowTransitEncryption>
  MediaConnectFlowRouterInputConfiguration& WithSourceTransitDecryption(SourceTransitDecryptionT&& value) {
    SetSourceTransitDecryption(std::forward<SourceTransitDecryptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_flowArn;
  bool m_flowArnHasBeenSet = false;

  Aws::String m_flowOutputArn;
  bool m_flowOutputArnHasBeenSet = false;

  FlowTransitEncryption m_sourceTransitDecryption;
  bool m_sourceTransitDecryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
