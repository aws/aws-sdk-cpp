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
    AWS_PINPOINTSMSVOICEV2_API SelectValidation();
    AWS_PINPOINTSMSVOICEV2_API SelectValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SelectValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of choices for the select.</p>
     */
    inline int GetMinChoices() const{ return m_minChoices; }

    /**
     * <p>The minimum number of choices for the select.</p>
     */
    inline bool MinChoicesHasBeenSet() const { return m_minChoicesHasBeenSet; }

    /**
     * <p>The minimum number of choices for the select.</p>
     */
    inline void SetMinChoices(int value) { m_minChoicesHasBeenSet = true; m_minChoices = value; }

    /**
     * <p>The minimum number of choices for the select.</p>
     */
    inline SelectValidation& WithMinChoices(int value) { SetMinChoices(value); return *this;}


    /**
     * <p>The maximum number of choices for the select.</p>
     */
    inline int GetMaxChoices() const{ return m_maxChoices; }

    /**
     * <p>The maximum number of choices for the select.</p>
     */
    inline bool MaxChoicesHasBeenSet() const { return m_maxChoicesHasBeenSet; }

    /**
     * <p>The maximum number of choices for the select.</p>
     */
    inline void SetMaxChoices(int value) { m_maxChoicesHasBeenSet = true; m_maxChoices = value; }

    /**
     * <p>The maximum number of choices for the select.</p>
     */
    inline SelectValidation& WithMaxChoices(int value) { SetMaxChoices(value); return *this;}


    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline void SetOptions(const Aws::Vector<Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline void SetOptions(Aws::Vector<Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline SelectValidation& WithOptions(const Aws::Vector<Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline SelectValidation& WithOptions(Aws::Vector<Aws::String>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline SelectValidation& AddOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline SelectValidation& AddOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings for the possible selection options. </p>
     */
    inline SelectValidation& AddOptions(const char* value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

  private:

    int m_minChoices;
    bool m_minChoicesHasBeenSet = false;

    int m_maxChoices;
    bool m_maxChoicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
