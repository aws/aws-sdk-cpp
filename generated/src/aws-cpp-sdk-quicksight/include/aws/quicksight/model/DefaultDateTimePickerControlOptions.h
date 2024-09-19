/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SheetControlDateTimePickerType.h>
#include <aws/quicksight/model/DateTimePickerControlDisplayOptions.h>
#include <aws/quicksight/model/CommitMode.h>
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
   * <p>The default options that correspond to the filter control type of a
   * <code>DateTimePicker</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultDateTimePickerControlOptions">AWS
   * API Reference</a></p>
   */
  class DefaultDateTimePickerControlOptions
  {
  public:
    AWS_QUICKSIGHT_API DefaultDateTimePickerControlOptions();
    AWS_QUICKSIGHT_API DefaultDateTimePickerControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultDateTimePickerControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date time picker type of the
     * <code>DefaultDateTimePickerControlOptions</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>SINGLE_VALUED</code>: The filter condition is a
     * fixed date.</p> </li> <li> <p> <code>DATE_RANGE</code>: The filter condition is
     * a date time range.</p> </li> </ul>
     */
    inline const SheetControlDateTimePickerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SheetControlDateTimePickerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SheetControlDateTimePickerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DefaultDateTimePickerControlOptions& WithType(const SheetControlDateTimePickerType& value) { SetType(value); return *this;}
    inline DefaultDateTimePickerControlOptions& WithType(SheetControlDateTimePickerType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const DateTimePickerControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const DateTimePickerControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(DateTimePickerControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline DefaultDateTimePickerControlOptions& WithDisplayOptions(const DateTimePickerControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline DefaultDateTimePickerControlOptions& WithDisplayOptions(DateTimePickerControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility configuration of the Apply button on a
     * <code>DateTimePickerControl</code>.</p>
     */
    inline const CommitMode& GetCommitMode() const{ return m_commitMode; }
    inline bool CommitModeHasBeenSet() const { return m_commitModeHasBeenSet; }
    inline void SetCommitMode(const CommitMode& value) { m_commitModeHasBeenSet = true; m_commitMode = value; }
    inline void SetCommitMode(CommitMode&& value) { m_commitModeHasBeenSet = true; m_commitMode = std::move(value); }
    inline DefaultDateTimePickerControlOptions& WithCommitMode(const CommitMode& value) { SetCommitMode(value); return *this;}
    inline DefaultDateTimePickerControlOptions& WithCommitMode(CommitMode&& value) { SetCommitMode(std::move(value)); return *this;}
    ///@}
  private:

    SheetControlDateTimePickerType m_type;
    bool m_typeHasBeenSet = false;

    DateTimePickerControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    CommitMode m_commitMode;
    bool m_commitModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
