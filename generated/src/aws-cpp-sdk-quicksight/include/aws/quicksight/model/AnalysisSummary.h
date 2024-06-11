﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The summary metadata that describes an analysis.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnalysisSummary">AWS
   * API Reference</a></p>
   */
  class AnalysisSummary
  {
  public:
    AWS_QUICKSIGHT_API AnalysisSummary();
    AWS_QUICKSIGHT_API AnalysisSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnalysisSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the analysis.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AnalysisSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AnalysisSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AnalysisSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the analysis. This ID displays in the URL.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }
    inline AnalysisSummary& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline AnalysisSummary& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline AnalysisSummary& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the analysis. This name is displayed in the Amazon QuickSight
     * console. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AnalysisSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AnalysisSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AnalysisSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known status for the analysis.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AnalysisSummary& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}
    inline AnalysisSummary& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline AnalysisSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline AnalysisSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline AnalysisSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline AnalysisSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
