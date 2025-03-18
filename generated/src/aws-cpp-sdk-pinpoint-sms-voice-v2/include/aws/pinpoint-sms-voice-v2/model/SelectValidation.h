/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Validation rules for a select field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SelectValidation">AWS
   * API Reference</a></p>
   */
  class SelectValidation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SelectValidation() = default;
    AWS_PINPOINTSMSVOICEV2_API SelectValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SelectValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum number of choices for the select.</p>
     */
    inline int GetMinChoices() const { return m_minChoices; }
    inline bool MinChoicesHasBeenSet() const { return m_minChoicesHasBeenSet; }
    inline void SetMinChoices(int value) { m_minChoicesHasBeenSet = true; m_minChoices = value; }
    inline SelectValidation& WithMinChoices(int value) { SetMinChoices(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of choices for the select.</p>
     */
    inline int GetMaxChoices() const { return m_maxChoices; }
    inline bool MaxChoicesHasBeenSet() const { return m_maxChoicesHasBeenSet; }
    inline void SetMaxChoices(int value) { m_maxChoicesHasBeenSet = true; m_maxChoices = value; }
    inline SelectValidation& WithMaxChoices(int value) { SetMaxChoices(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<Aws::String>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<Aws::String>>
    SelectValidation& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = Aws::String>
    SelectValidation& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}
  private:

    int m_minChoices{0};
    bool m_minChoicesHasBeenSet = false;

    int m_maxChoices{0};
    bool m_maxChoicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
