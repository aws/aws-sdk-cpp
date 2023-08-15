/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pi/model/AnalysisStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/Tag.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>Retrieves the details of the performance analysis report.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/AnalysisReportSummary">AWS
   * API Reference</a></p>
   */
  class AnalysisReportSummary
  {
  public:
    AWS_PI_API AnalysisReportSummary();
    AWS_PI_API AnalysisReportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API AnalysisReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the analysis report.</p>
     */
    inline const Aws::String& GetAnalysisReportId() const{ return m_analysisReportId; }

    /**
     * <p>The name of the analysis report.</p>
     */
    inline bool AnalysisReportIdHasBeenSet() const { return m_analysisReportIdHasBeenSet; }

    /**
     * <p>The name of the analysis report.</p>
     */
    inline void SetAnalysisReportId(const Aws::String& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = value; }

    /**
     * <p>The name of the analysis report.</p>
     */
    inline void SetAnalysisReportId(Aws::String&& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = std::move(value); }

    /**
     * <p>The name of the analysis report.</p>
     */
    inline void SetAnalysisReportId(const char* value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId.assign(value); }

    /**
     * <p>The name of the analysis report.</p>
     */
    inline AnalysisReportSummary& WithAnalysisReportId(const Aws::String& value) { SetAnalysisReportId(value); return *this;}

    /**
     * <p>The name of the analysis report.</p>
     */
    inline AnalysisReportSummary& WithAnalysisReportId(Aws::String&& value) { SetAnalysisReportId(std::move(value)); return *this;}

    /**
     * <p>The name of the analysis report.</p>
     */
    inline AnalysisReportSummary& WithAnalysisReportId(const char* value) { SetAnalysisReportId(value); return *this;}


    /**
     * <p>The time you created the analysis report.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time you created the analysis report.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time you created the analysis report.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time you created the analysis report.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time you created the analysis report.</p>
     */
    inline AnalysisReportSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time you created the analysis report.</p>
     */
    inline AnalysisReportSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The start time of the analysis in the report.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the analysis in the report.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the analysis in the report.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the analysis in the report.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the analysis in the report.</p>
     */
    inline AnalysisReportSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the analysis in the report.</p>
     */
    inline AnalysisReportSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the analysis in the report.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the analysis in the report.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the analysis in the report.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the analysis in the report.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the analysis in the report.</p>
     */
    inline AnalysisReportSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the analysis in the report.</p>
     */
    inline AnalysisReportSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The status of the analysis report.</p>
     */
    inline const AnalysisStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the analysis report.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the analysis report.</p>
     */
    inline void SetStatus(const AnalysisStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the analysis report.</p>
     */
    inline void SetStatus(AnalysisStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the analysis report.</p>
     */
    inline AnalysisReportSummary& WithStatus(const AnalysisStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the analysis report.</p>
     */
    inline AnalysisReportSummary& WithStatus(AnalysisStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>List of all the tags added to the analysis report.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>List of all the tags added to the analysis report.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>List of all the tags added to the analysis report.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>List of all the tags added to the analysis report.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>List of all the tags added to the analysis report.</p>
     */
    inline AnalysisReportSummary& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>List of all the tags added to the analysis report.</p>
     */
    inline AnalysisReportSummary& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>List of all the tags added to the analysis report.</p>
     */
    inline AnalysisReportSummary& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>List of all the tags added to the analysis report.</p>
     */
    inline AnalysisReportSummary& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_analysisReportId;
    bool m_analysisReportIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    AnalysisStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
