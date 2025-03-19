/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TextAreaControlDisplayOptions.h>
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
   * <p>A control to display a text box that is used to enter multiple
   * entries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParameterTextAreaControl">AWS
   * API Reference</a></p>
   */
  class ParameterTextAreaControl
  {
  public:
    AWS_QUICKSIGHT_API ParameterTextAreaControl() = default;
    AWS_QUICKSIGHT_API ParameterTextAreaControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterTextAreaControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>ParameterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const { return m_parameterControlId; }
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }
    template<typename ParameterControlIdT = Aws::String>
    void SetParameterControlId(ParameterControlIdT&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::forward<ParameterControlIdT>(value); }
    template<typename ParameterControlIdT = Aws::String>
    ParameterTextAreaControl& WithParameterControlId(ParameterControlIdT&& value) { SetParameterControlId(std::forward<ParameterControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>ParameterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ParameterTextAreaControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source parameter name of the <code>ParameterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const { return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    template<typename SourceParameterNameT = Aws::String>
    void SetSourceParameterName(SourceParameterNameT&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::forward<SourceParameterNameT>(value); }
    template<typename SourceParameterNameT = Aws::String>
    ParameterTextAreaControl& WithSourceParameterName(SourceParameterNameT&& value) { SetSourceParameterName(std::forward<SourceParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delimiter that is used to separate the lines in text.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    ParameterTextAreaControl& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const TextAreaControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    template<typename DisplayOptionsT = TextAreaControlDisplayOptions>
    void SetDisplayOptions(DisplayOptionsT&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::forward<DisplayOptionsT>(value); }
    template<typename DisplayOptionsT = TextAreaControlDisplayOptions>
    ParameterTextAreaControl& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterControlId;
    bool m_parameterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceParameterName;
    bool m_sourceParameterNameHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    TextAreaControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
