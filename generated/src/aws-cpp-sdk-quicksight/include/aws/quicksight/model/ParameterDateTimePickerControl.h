/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DateTimePickerControlDisplayOptions.h>
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
   * <p>A control from a date parameter that specifies date and time.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParameterDateTimePickerControl">AWS
   * API Reference</a></p>
   */
  class ParameterDateTimePickerControl
  {
  public:
    AWS_QUICKSIGHT_API ParameterDateTimePickerControl();
    AWS_QUICKSIGHT_API ParameterDateTimePickerControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterDateTimePickerControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>ParameterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const{ return m_parameterControlId; }
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }
    inline void SetParameterControlId(const Aws::String& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = value; }
    inline void SetParameterControlId(Aws::String&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::move(value); }
    inline void SetParameterControlId(const char* value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId.assign(value); }
    inline ParameterDateTimePickerControl& WithParameterControlId(const Aws::String& value) { SetParameterControlId(value); return *this;}
    inline ParameterDateTimePickerControl& WithParameterControlId(Aws::String&& value) { SetParameterControlId(std::move(value)); return *this;}
    inline ParameterDateTimePickerControl& WithParameterControlId(const char* value) { SetParameterControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>ParameterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ParameterDateTimePickerControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ParameterDateTimePickerControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ParameterDateTimePickerControl& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>ParameterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const{ return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    inline void SetSourceParameterName(const Aws::String& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = value; }
    inline void SetSourceParameterName(Aws::String&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::move(value); }
    inline void SetSourceParameterName(const char* value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName.assign(value); }
    inline ParameterDateTimePickerControl& WithSourceParameterName(const Aws::String& value) { SetSourceParameterName(value); return *this;}
    inline ParameterDateTimePickerControl& WithSourceParameterName(Aws::String&& value) { SetSourceParameterName(std::move(value)); return *this;}
    inline ParameterDateTimePickerControl& WithSourceParameterName(const char* value) { SetSourceParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const DateTimePickerControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const DateTimePickerControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(DateTimePickerControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline ParameterDateTimePickerControl& WithDisplayOptions(const DateTimePickerControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline ParameterDateTimePickerControl& WithDisplayOptions(DateTimePickerControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterControlId;
    bool m_parameterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceParameterName;
    bool m_sourceParameterNameHasBeenSet = false;

    DateTimePickerControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
