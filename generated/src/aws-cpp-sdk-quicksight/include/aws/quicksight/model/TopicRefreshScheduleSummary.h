/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicRefreshSchedule.h>
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
   * <p>A summary of the refresh schedule details for a dataset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicRefreshScheduleSummary">AWS
   * API Reference</a></p>
   */
  class TopicRefreshScheduleSummary
  {
  public:
    AWS_QUICKSIGHT_API TopicRefreshScheduleSummary();
    AWS_QUICKSIGHT_API TopicRefreshScheduleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicRefreshScheduleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }
    inline TopicRefreshScheduleSummary& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}
    inline TopicRefreshScheduleSummary& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}
    inline TopicRefreshScheduleSummary& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }
    inline TopicRefreshScheduleSummary& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline TopicRefreshScheduleSummary& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline TopicRefreshScheduleSummary& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline TopicRefreshScheduleSummary& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline TopicRefreshScheduleSummary& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline TopicRefreshScheduleSummary& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a refresh schedule.</p>
     */
    inline const TopicRefreshSchedule& GetRefreshSchedule() const{ return m_refreshSchedule; }
    inline bool RefreshScheduleHasBeenSet() const { return m_refreshScheduleHasBeenSet; }
    inline void SetRefreshSchedule(const TopicRefreshSchedule& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = value; }
    inline void SetRefreshSchedule(TopicRefreshSchedule&& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = std::move(value); }
    inline TopicRefreshScheduleSummary& WithRefreshSchedule(const TopicRefreshSchedule& value) { SetRefreshSchedule(value); return *this;}
    inline TopicRefreshScheduleSummary& WithRefreshSchedule(TopicRefreshSchedule&& value) { SetRefreshSchedule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    TopicRefreshSchedule m_refreshSchedule;
    bool m_refreshScheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
