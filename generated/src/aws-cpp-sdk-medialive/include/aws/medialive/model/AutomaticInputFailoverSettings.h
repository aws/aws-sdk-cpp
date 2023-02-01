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
    AWS_MEDIALIVE_API AutomaticInputFailoverSettings();
    AWS_MEDIALIVE_API AutomaticInputFailoverSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AutomaticInputFailoverSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * This clear time defines the requirement a recovered input must meet to be
     * considered healthy. The input must have no failover conditions for this length
     * of time. Enter a time in milliseconds. This value is particularly important if
     * the input_preference for the failover pair is set to PRIMARY_INPUT_PREFERRED,
     * because after this time, MediaLive will switch back to the primary input.
     */
    inline int GetErrorClearTimeMsec() const{ return m_errorClearTimeMsec; }

    /**
     * This clear time defines the requirement a recovered input must meet to be
     * considered healthy. The input must have no failover conditions for this length
     * of time. Enter a time in milliseconds. This value is particularly important if
     * the input_preference for the failover pair is set to PRIMARY_INPUT_PREFERRED,
     * because after this time, MediaLive will switch back to the primary input.
     */
    inline bool ErrorClearTimeMsecHasBeenSet() const { return m_errorClearTimeMsecHasBeenSet; }

    /**
     * This clear time defines the requirement a recovered input must meet to be
     * considered healthy. The input must have no failover conditions for this length
     * of time. Enter a time in milliseconds. This value is particularly important if
     * the input_preference for the failover pair is set to PRIMARY_INPUT_PREFERRED,
     * because after this time, MediaLive will switch back to the primary input.
     */
    inline void SetErrorClearTimeMsec(int value) { m_errorClearTimeMsecHasBeenSet = true; m_errorClearTimeMsec = value; }

    /**
     * This clear time defines the requirement a recovered input must meet to be
     * considered healthy. The input must have no failover conditions for this length
     * of time. Enter a time in milliseconds. This value is particularly important if
     * the input_preference for the failover pair is set to PRIMARY_INPUT_PREFERRED,
     * because after this time, MediaLive will switch back to the primary input.
     */
    inline AutomaticInputFailoverSettings& WithErrorClearTimeMsec(int value) { SetErrorClearTimeMsec(value); return *this;}


    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline const Aws::Vector<FailoverCondition>& GetFailoverConditions() const{ return m_failoverConditions; }

    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline bool FailoverConditionsHasBeenSet() const { return m_failoverConditionsHasBeenSet; }

    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline void SetFailoverConditions(const Aws::Vector<FailoverCondition>& value) { m_failoverConditionsHasBeenSet = true; m_failoverConditions = value; }

    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline void SetFailoverConditions(Aws::Vector<FailoverCondition>&& value) { m_failoverConditionsHasBeenSet = true; m_failoverConditions = std::move(value); }

    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline AutomaticInputFailoverSettings& WithFailoverConditions(const Aws::Vector<FailoverCondition>& value) { SetFailoverConditions(value); return *this;}

    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline AutomaticInputFailoverSettings& WithFailoverConditions(Aws::Vector<FailoverCondition>&& value) { SetFailoverConditions(std::move(value)); return *this;}

    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline AutomaticInputFailoverSettings& AddFailoverConditions(const FailoverCondition& value) { m_failoverConditionsHasBeenSet = true; m_failoverConditions.push_back(value); return *this; }

    /**
     * A list of failover conditions. If any of these conditions occur, MediaLive will
     * perform a failover to the other input.
     */
    inline AutomaticInputFailoverSettings& AddFailoverConditions(FailoverCondition&& value) { m_failoverConditionsHasBeenSet = true; m_failoverConditions.push_back(std::move(value)); return *this; }


    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline const InputPreference& GetInputPreference() const{ return m_inputPreference; }

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline bool InputPreferenceHasBeenSet() const { return m_inputPreferenceHasBeenSet; }

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline void SetInputPreference(const InputPreference& value) { m_inputPreferenceHasBeenSet = true; m_inputPreference = value; }

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline void SetInputPreference(InputPreference&& value) { m_inputPreferenceHasBeenSet = true; m_inputPreference = std::move(value); }

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline AutomaticInputFailoverSettings& WithInputPreference(const InputPreference& value) { SetInputPreference(value); return *this;}

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline AutomaticInputFailoverSettings& WithInputPreference(InputPreference&& value) { SetInputPreference(std::move(value)); return *this;}


    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline const Aws::String& GetSecondaryInputId() const{ return m_secondaryInputId; }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline bool SecondaryInputIdHasBeenSet() const { return m_secondaryInputIdHasBeenSet; }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline void SetSecondaryInputId(const Aws::String& value) { m_secondaryInputIdHasBeenSet = true; m_secondaryInputId = value; }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline void SetSecondaryInputId(Aws::String&& value) { m_secondaryInputIdHasBeenSet = true; m_secondaryInputId = std::move(value); }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline void SetSecondaryInputId(const char* value) { m_secondaryInputIdHasBeenSet = true; m_secondaryInputId.assign(value); }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline AutomaticInputFailoverSettings& WithSecondaryInputId(const Aws::String& value) { SetSecondaryInputId(value); return *this;}

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline AutomaticInputFailoverSettings& WithSecondaryInputId(Aws::String&& value) { SetSecondaryInputId(std::move(value)); return *this;}

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline AutomaticInputFailoverSettings& WithSecondaryInputId(const char* value) { SetSecondaryInputId(value); return *this;}

  private:

    int m_errorClearTimeMsec;
    bool m_errorClearTimeMsecHasBeenSet = false;

    Aws::Vector<FailoverCondition> m_failoverConditions;
    bool m_failoverConditionsHasBeenSet = false;

    InputPreference m_inputPreference;
    bool m_inputPreferenceHasBeenSet = false;

    Aws::String m_secondaryInputId;
    bool m_secondaryInputIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
