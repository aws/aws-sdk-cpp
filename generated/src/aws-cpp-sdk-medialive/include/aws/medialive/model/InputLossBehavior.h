﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/InputLossImageType.h>
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
   * Input Loss Behavior<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputLossBehavior">AWS
   * API Reference</a></p>
   */
  class InputLossBehavior
  {
  public:
    AWS_MEDIALIVE_API InputLossBehavior() = default;
    AWS_MEDIALIVE_API InputLossBehavior(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputLossBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Documentation update needed
     */
    inline int GetBlackFrameMsec() const { return m_blackFrameMsec; }
    inline bool BlackFrameMsecHasBeenSet() const { return m_blackFrameMsecHasBeenSet; }
    inline void SetBlackFrameMsec(int value) { m_blackFrameMsecHasBeenSet = true; m_blackFrameMsec = value; }
    inline InputLossBehavior& WithBlackFrameMsec(int value) { SetBlackFrameMsec(value); return *this;}
    ///@}

    ///@{
    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline const Aws::String& GetInputLossImageColor() const { return m_inputLossImageColor; }
    inline bool InputLossImageColorHasBeenSet() const { return m_inputLossImageColorHasBeenSet; }
    template<typename InputLossImageColorT = Aws::String>
    void SetInputLossImageColor(InputLossImageColorT&& value) { m_inputLossImageColorHasBeenSet = true; m_inputLossImageColor = std::forward<InputLossImageColorT>(value); }
    template<typename InputLossImageColorT = Aws::String>
    InputLossBehavior& WithInputLossImageColor(InputLossImageColorT&& value) { SetInputLossImageColor(std::forward<InputLossImageColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When input loss image type is "slate" these fields specify the parameters for
     * accessing the slate.
     */
    inline const InputLocation& GetInputLossImageSlate() const { return m_inputLossImageSlate; }
    inline bool InputLossImageSlateHasBeenSet() const { return m_inputLossImageSlateHasBeenSet; }
    template<typename InputLossImageSlateT = InputLocation>
    void SetInputLossImageSlate(InputLossImageSlateT&& value) { m_inputLossImageSlateHasBeenSet = true; m_inputLossImageSlate = std::forward<InputLossImageSlateT>(value); }
    template<typename InputLossImageSlateT = InputLocation>
    InputLossBehavior& WithInputLossImageSlate(InputLossImageSlateT&& value) { SetInputLossImageSlate(std::forward<InputLossImageSlateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates whether to substitute a solid color or a slate into the output after
     * input loss exceeds blackFrameMsec.
     */
    inline InputLossImageType GetInputLossImageType() const { return m_inputLossImageType; }
    inline bool InputLossImageTypeHasBeenSet() const { return m_inputLossImageTypeHasBeenSet; }
    inline void SetInputLossImageType(InputLossImageType value) { m_inputLossImageTypeHasBeenSet = true; m_inputLossImageType = value; }
    inline InputLossBehavior& WithInputLossImageType(InputLossImageType value) { SetInputLossImageType(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline int GetRepeatFrameMsec() const { return m_repeatFrameMsec; }
    inline bool RepeatFrameMsecHasBeenSet() const { return m_repeatFrameMsecHasBeenSet; }
    inline void SetRepeatFrameMsec(int value) { m_repeatFrameMsecHasBeenSet = true; m_repeatFrameMsec = value; }
    inline InputLossBehavior& WithRepeatFrameMsec(int value) { SetRepeatFrameMsec(value); return *this;}
    ///@}
  private:

    int m_blackFrameMsec{0};
    bool m_blackFrameMsecHasBeenSet = false;

    Aws::String m_inputLossImageColor;
    bool m_inputLossImageColorHasBeenSet = false;

    InputLocation m_inputLossImageSlate;
    bool m_inputLossImageSlateHasBeenSet = false;

    InputLossImageType m_inputLossImageType{InputLossImageType::NOT_SET};
    bool m_inputLossImageTypeHasBeenSet = false;

    int m_repeatFrameMsec{0};
    bool m_repeatFrameMsecHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
