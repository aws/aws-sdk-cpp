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
    AWS_QUICKSIGHT_API ParameterTextAreaControl();
    AWS_QUICKSIGHT_API ParameterTextAreaControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterTextAreaControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>ParameterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const{ return m_parameterControlId; }
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }
    inline void SetParameterControlId(const Aws::String& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = value; }
    inline void SetParameterControlId(Aws::String&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::move(value); }
    inline void SetParameterControlId(const char* value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId.assign(value); }
    inline ParameterTextAreaControl& WithParameterControlId(const Aws::String& value) { SetParameterControlId(value); return *this;}
    inline ParameterTextAreaControl& WithParameterControlId(Aws::String&& value) { SetParameterControlId(std::move(value)); return *this;}
    inline ParameterTextAreaControl& WithParameterControlId(const char* value) { SetParameterControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>ParameterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ParameterTextAreaControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ParameterTextAreaControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ParameterTextAreaControl& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source parameter name of the <code>ParameterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const{ return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    inline void SetSourceParameterName(const Aws::String& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = value; }
    inline void SetSourceParameterName(Aws::String&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::move(value); }
    inline void SetSourceParameterName(const char* value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName.assign(value); }
    inline ParameterTextAreaControl& WithSourceParameterName(const Aws::String& value) { SetSourceParameterName(value); return *this;}
    inline ParameterTextAreaControl& WithSourceParameterName(Aws::String&& value) { SetSourceParameterName(std::move(value)); return *this;}
    inline ParameterTextAreaControl& WithSourceParameterName(const char* value) { SetSourceParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delimiter that is used to separate the lines in text.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }
    inline ParameterTextAreaControl& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}
    inline ParameterTextAreaControl& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}
    inline ParameterTextAreaControl& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const TextAreaControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const TextAreaControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(TextAreaControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline ParameterTextAreaControl& WithDisplayOptions(const TextAreaControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline ParameterTextAreaControl& WithDisplayOptions(TextAreaControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
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
