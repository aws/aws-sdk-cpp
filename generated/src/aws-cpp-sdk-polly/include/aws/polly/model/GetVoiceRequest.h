/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/Polly_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Polly {
namespace Model {

/**
 */
class GetVoiceRequest : public PollyRequest {
 public:
  AWS_POLLY_API GetVoiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetVoice"; }

  AWS_POLLY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the custom voice that <code>CreateVoice</code> returned, for
   * example, <code>vc-9a8fa85dd3</code>. You can't specify the ARN of the voice.</p>
   */
  inline const Aws::String& GetVoiceId() const { return m_voiceId; }
  inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
  template <typename VoiceIdT = Aws::String>
  void SetVoiceId(VoiceIdT&& value) {
    m_voiceIdHasBeenSet = true;
    m_voiceId = std::forward<VoiceIdT>(value);
  }
  template <typename VoiceIdT = Aws::String>
  GetVoiceRequest& WithVoiceId(VoiceIdT&& value) {
    SetVoiceId(std::forward<VoiceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_voiceId;
  bool m_voiceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
