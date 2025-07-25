/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The configuration for input switching based on the media quality confidence
   * score (MQCS) as provided from AWS Elemental MediaLive.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/InputSwitchConfiguration">AWS
   * API Reference</a></p>
   */
  class InputSwitchConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API InputSwitchConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API InputSwitchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API InputSwitchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When true, AWS Elemental MediaPackage performs input switching based on the
     * MQCS. Default is true. This setting is valid only when <code>InputType</code> is
     * <code>CMAF</code>.</p>
     */
    inline bool GetMQCSInputSwitching() const { return m_mQCSInputSwitching; }
    inline bool MQCSInputSwitchingHasBeenSet() const { return m_mQCSInputSwitchingHasBeenSet; }
    inline void SetMQCSInputSwitching(bool value) { m_mQCSInputSwitchingHasBeenSet = true; m_mQCSInputSwitching = value; }
    inline InputSwitchConfiguration& WithMQCSInputSwitching(bool value) { SetMQCSInputSwitching(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For CMAF inputs, indicates which input MediaPackage should prefer when both
     * inputs have equal MQCS scores. Select <code>1</code> to prefer the first ingest
     * endpoint, or <code>2</code> to prefer the second ingest endpoint. If you don't
     * specify a preferred input, MediaPackage uses its default switching behavior when
     * MQCS scores are equal.</p>
     */
    inline int GetPreferredInput() const { return m_preferredInput; }
    inline bool PreferredInputHasBeenSet() const { return m_preferredInputHasBeenSet; }
    inline void SetPreferredInput(int value) { m_preferredInputHasBeenSet = true; m_preferredInput = value; }
    inline InputSwitchConfiguration& WithPreferredInput(int value) { SetPreferredInput(value); return *this;}
    ///@}
  private:

    bool m_mQCSInputSwitching{false};
    bool m_mQCSInputSwitchingHasBeenSet = false;

    int m_preferredInput{0};
    bool m_preferredInputHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
