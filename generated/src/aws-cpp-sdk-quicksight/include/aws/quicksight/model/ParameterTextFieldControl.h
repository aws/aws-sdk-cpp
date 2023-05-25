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
    AWS_QUICKSIGHT_API ParameterTextFieldControl();
    AWS_QUICKSIGHT_API ParameterTextFieldControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterTextFieldControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const{ return m_parameterControlId; }

    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }

    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetParameterControlId(const Aws::String& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = value; }

    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetParameterControlId(Aws::String&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::move(value); }

    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetParameterControlId(const char* value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId.assign(value); }

    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithParameterControlId(const Aws::String& value) { SetParameterControlId(value); return *this;}

    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithParameterControlId(Aws::String&& value) { SetParameterControlId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithParameterControlId(const char* value) { SetParameterControlId(value); return *this;}


    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const{ return m_sourceParameterName; }

    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }

    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetSourceParameterName(const Aws::String& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = value; }

    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetSourceParameterName(Aws::String&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::move(value); }

    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline void SetSourceParameterName(const char* value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName.assign(value); }

    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithSourceParameterName(const Aws::String& value) { SetSourceParameterName(value); return *this;}

    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithSourceParameterName(Aws::String&& value) { SetSourceParameterName(std::move(value)); return *this;}

    /**
     * <p>The source parameter name of the <code>ParameterTextFieldControl</code>.</p>
     */
    inline ParameterTextFieldControl& WithSourceParameterName(const char* value) { SetSourceParameterName(value); return *this;}


    /**
     * <p>The display options of a control.</p>
     */
    inline const TextFieldControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }

    /**
     * <p>The display options of a control.</p>
     */
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }

    /**
     * <p>The display options of a control.</p>
     */
    inline void SetDisplayOptions(const TextFieldControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }

    /**
     * <p>The display options of a control.</p>
     */
    inline void SetDisplayOptions(TextFieldControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }

    /**
     * <p>The display options of a control.</p>
     */
    inline ParameterTextFieldControl& WithDisplayOptions(const TextFieldControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}

    /**
     * <p>The display options of a control.</p>
     */
    inline ParameterTextFieldControl& WithDisplayOptions(TextFieldControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}

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
