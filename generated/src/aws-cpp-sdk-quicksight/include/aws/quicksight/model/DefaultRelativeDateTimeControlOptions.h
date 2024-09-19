/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The default options that correspond to the <code>RelativeDateTime</code>
   * filter control type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultRelativeDateTimeControlOptions">AWS
   * API Reference</a></p>
   */
  class DefaultRelativeDateTimeControlOptions
  {
  public:
    AWS_QUICKSIGHT_API DefaultRelativeDateTimeControlOptions();
    AWS_QUICKSIGHT_API DefaultRelativeDateTimeControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultRelativeDateTimeControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const RelativeDateTimeControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const RelativeDateTimeControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(RelativeDateTimeControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline DefaultRelativeDateTimeControlOptions& WithDisplayOptions(const RelativeDateTimeControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline DefaultRelativeDateTimeControlOptions& WithDisplayOptions(RelativeDateTimeControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility configuration of the Apply button on a
     * <code>RelativeDateTimeControl</code>.</p>
     */
    inline const CommitMode& GetCommitMode() const{ return m_commitMode; }
    inline bool CommitModeHasBeenSet() const { return m_commitModeHasBeenSet; }
    inline void SetCommitMode(const CommitMode& value) { m_commitModeHasBeenSet = true; m_commitMode = value; }
    inline void SetCommitMode(CommitMode&& value) { m_commitModeHasBeenSet = true; m_commitMode = std::move(value); }
    inline DefaultRelativeDateTimeControlOptions& WithCommitMode(const CommitMode& value) { SetCommitMode(value); return *this;}
    inline DefaultRelativeDateTimeControlOptions& WithCommitMode(CommitMode&& value) { SetCommitMode(std::move(value)); return *this;}
    ///@}
  private:

    RelativeDateTimeControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    CommitMode m_commitMode;
    bool m_commitModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
