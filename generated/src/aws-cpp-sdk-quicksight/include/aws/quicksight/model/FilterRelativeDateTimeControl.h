/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RelativeDateTimeControlDisplayOptions.h>
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
   * <p>A control from a date filter that is used to specify the relative
   * date.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterRelativeDateTimeControl">AWS
   * API Reference</a></p>
   */
  class FilterRelativeDateTimeControl
  {
  public:
    AWS_QUICKSIGHT_API FilterRelativeDateTimeControl();
    AWS_QUICKSIGHT_API FilterRelativeDateTimeControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterRelativeDateTimeControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>FilterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetFilterControlId() const{ return m_filterControlId; }
    inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }
    inline void SetFilterControlId(const Aws::String& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = value; }
    inline void SetFilterControlId(Aws::String&& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = std::move(value); }
    inline void SetFilterControlId(const char* value) { m_filterControlIdHasBeenSet = true; m_filterControlId.assign(value); }
    inline FilterRelativeDateTimeControl& WithFilterControlId(const Aws::String& value) { SetFilterControlId(value); return *this;}
    inline FilterRelativeDateTimeControl& WithFilterControlId(Aws::String&& value) { SetFilterControlId(std::move(value)); return *this;}
    inline FilterRelativeDateTimeControl& WithFilterControlId(const char* value) { SetFilterControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>FilterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline FilterRelativeDateTimeControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline FilterRelativeDateTimeControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline FilterRelativeDateTimeControl& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source filter ID of the <code>FilterTextAreaControl</code>.</p>
     */
    inline const Aws::String& GetSourceFilterId() const{ return m_sourceFilterId; }
    inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }
    inline void SetSourceFilterId(const Aws::String& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = value; }
    inline void SetSourceFilterId(Aws::String&& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = std::move(value); }
    inline void SetSourceFilterId(const char* value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId.assign(value); }
    inline FilterRelativeDateTimeControl& WithSourceFilterId(const Aws::String& value) { SetSourceFilterId(value); return *this;}
    inline FilterRelativeDateTimeControl& WithSourceFilterId(Aws::String&& value) { SetSourceFilterId(std::move(value)); return *this;}
    inline FilterRelativeDateTimeControl& WithSourceFilterId(const char* value) { SetSourceFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const RelativeDateTimeControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const RelativeDateTimeControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(RelativeDateTimeControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline FilterRelativeDateTimeControl& WithDisplayOptions(const RelativeDateTimeControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline FilterRelativeDateTimeControl& WithDisplayOptions(RelativeDateTimeControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility configuration of the Apply button on a
     * <code>FilterRelativeDateTimeControl</code>.</p>
     */
    inline const CommitMode& GetCommitMode() const{ return m_commitMode; }
    inline bool CommitModeHasBeenSet() const { return m_commitModeHasBeenSet; }
    inline void SetCommitMode(const CommitMode& value) { m_commitModeHasBeenSet = true; m_commitMode = value; }
    inline void SetCommitMode(CommitMode&& value) { m_commitModeHasBeenSet = true; m_commitMode = std::move(value); }
    inline FilterRelativeDateTimeControl& WithCommitMode(const CommitMode& value) { SetCommitMode(value); return *this;}
    inline FilterRelativeDateTimeControl& WithCommitMode(CommitMode&& value) { SetCommitMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterControlId;
    bool m_filterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceFilterId;
    bool m_sourceFilterIdHasBeenSet = false;

    RelativeDateTimeControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    CommitMode m_commitMode;
    bool m_commitModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
