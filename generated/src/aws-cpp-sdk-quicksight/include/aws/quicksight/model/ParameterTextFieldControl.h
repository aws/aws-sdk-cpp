/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TextFieldControlDisplayOptions.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A control to display a text box that is used to enter a single
   * entry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParameterTextFieldControl">AWS
   * API Reference</a></p>
   */
  class ParameterTextFieldControl
  {
  public:
    AWS_QUICKSIGHT_API ParameterTextFieldControl() = default;
    AWS_QUICKSIGHT_API ParameterTextFieldControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterTextFieldControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const { return m_parameterControlId; }
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }
    template<typename ParameterControlIdT = Aws::String>
    void SetParameterControlId(ParameterControlIdT&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::forward<ParameterControlIdT>(value); }
    template<typename ParameterControlIdT = Aws::String>
    ParameterTextFieldControl& WithParameterControlId(ParameterControlIdT&& value) { SetParameterControlId(std::forward<ParameterControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ParameterTextFieldControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const { return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    template<typename SourceParameterNameT = Aws::String>
    void SetSourceParameterName(SourceParameterNameT&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::forward<SourceParameterNameT>(value); }
    template<typename SourceParameterNameT = Aws::String>
    ParameterTextFieldControl& WithSourceParameterName(SourceParameterNameT&& value) { SetSourceParameterName(std::forward<SourceParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const TextFieldControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    template<typename DisplayOptionsT = TextFieldControlDisplayOptions>
    void SetDisplayOptions(DisplayOptionsT&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::forward<DisplayOptionsT>(value); }
    template<typename DisplayOptionsT = TextFieldControlDisplayOptions>
    ParameterTextFieldControl& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterControlId;
    bool m_parameterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceParameterName;
    bool m_sourceParameterNameHasBeenSet = false;

    TextFieldControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
