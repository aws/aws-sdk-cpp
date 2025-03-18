/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputPreference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/FailoverCondition.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The settings for Automatic Input Failover.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AutomaticInputFailoverSettings">AWS
   * API Reference</a></p>
   */
  class AutomaticInputFailoverSettings
  {
  public:
    AWS_MEDIALIVE_API AutomaticInputFailoverSettings() = default;
    AWS_MEDIALIVE_API AutomaticInputFailoverSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AutomaticInputFailoverSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * This clear time defines the requirement a recovered input must meet to be
     * considered healthy. The input must have no failover conditions for this length
     * of time. Enter a time in milliseconds. This value is particularly important if
     * the input_preference for the failover pair is set to PRIMARY_INPUT_PREFERRED,
     * because after this time, MediaLive will switch back to the primary input.
     */
    inline int GetErrorClearTimeMsec() const { return m_errorClearTimeMsec; }
    inline bool ErrorClearTimeMsecHasBeenSet() const { return m_errorClearTimeMsecHasBeenSet; }
    inline void SetErrorClearTimeMsec(int value) { m_errorClearTimeMsecHasBeenSet = true; m_errorClearTimeMsec = value; }
    inline AutomaticInputFailoverSettings& WithErrorClearTimeMsec(int value) { SetErrorClearTimeMsec(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline const Aws::Vector<FailoverCondition>& GetFailoverConditions() const { return m_failoverConditions; }
    inline bool FailoverConditionsHasBeenSet() const { return m_failoverConditionsHasBeenSet; }
    template<typename FailoverConditionsT = Aws::Vector<FailoverCondition>>
    void SetFailoverConditions(FailoverConditionsT&& value) { m_failoverConditionsHasBeenSet = true; m_failoverConditions = std::forward<FailoverConditionsT>(value); }
    template<typename FailoverConditionsT = Aws::Vector<FailoverCondition>>
    AutomaticInputFailoverSettings& WithFailoverConditions(FailoverConditionsT&& value) { SetFailoverConditions(std::forward<FailoverConditionsT>(value)); return *this;}
    template<typename FailoverConditionsT = FailoverCondition>
    AutomaticInputFailoverSettings& AddFailoverConditions(FailoverConditionsT&& value) { m_failoverConditionsHasBeenSet = true; m_failoverConditions.emplace_back(std::forward<FailoverConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline InputPreference GetInputPreference() const { return m_inputPreference; }
    inline bool InputPreferenceHasBeenSet() const { return m_inputPreferenceHasBeenSet; }
    inline void SetInputPreference(InputPreference value) { m_inputPreferenceHasBeenSet = true; m_inputPreference = value; }
    inline AutomaticInputFailoverSettings& WithInputPreference(InputPreference value) { SetInputPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline const Aws::String& GetSecondaryInputId() const { return m_secondaryInputId; }
    inline bool SecondaryInputIdHasBeenSet() const { return m_secondaryInputIdHasBeenSet; }
    template<typename SecondaryInputIdT = Aws::String>
    void SetSecondaryInputId(SecondaryInputIdT&& value) { m_secondaryInputIdHasBeenSet = true; m_secondaryInputId = std::forward<SecondaryInputIdT>(value); }
    template<typename SecondaryInputIdT = Aws::String>
    AutomaticInputFailoverSettings& WithSecondaryInputId(SecondaryInputIdT&& value) { SetSecondaryInputId(std::forward<SecondaryInputIdT>(value)); return *this;}
    ///@}
  private:

    int m_errorClearTimeMsec{0};
    bool m_errorClearTimeMsecHasBeenSet = false;

    Aws::Vector<FailoverCondition> m_failoverConditions;
    bool m_failoverConditionsHasBeenSet = false;

    InputPreference m_inputPreference{InputPreference::NOT_SET};
    bool m_inputPreferenceHasBeenSet = false;

    Aws::String m_secondaryInputId;
    bool m_secondaryInputIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
