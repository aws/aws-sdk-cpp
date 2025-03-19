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
    AWS_QUICKSIGHT_API TopicRefreshScheduleSummary() = default;
    AWS_QUICKSIGHT_API TopicRefreshScheduleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicRefreshScheduleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const { return m_datasetId; }
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
    template<typename DatasetIdT = Aws::String>
    void SetDatasetId(DatasetIdT&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::forward<DatasetIdT>(value); }
    template<typename DatasetIdT = Aws::String>
    TopicRefreshScheduleSummary& WithDatasetId(DatasetIdT&& value) { SetDatasetId(std::forward<DatasetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    TopicRefreshScheduleSummary& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    TopicRefreshScheduleSummary& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a refresh schedule.</p>
     */
    inline const TopicRefreshSchedule& GetRefreshSchedule() const { return m_refreshSchedule; }
    inline bool RefreshScheduleHasBeenSet() const { return m_refreshScheduleHasBeenSet; }
    template<typename RefreshScheduleT = TopicRefreshSchedule>
    void SetRefreshSchedule(RefreshScheduleT&& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = std::forward<RefreshScheduleT>(value); }
    template<typename RefreshScheduleT = TopicRefreshSchedule>
    TopicRefreshScheduleSummary& WithRefreshSchedule(RefreshScheduleT&& value) { SetRefreshSchedule(std::forward<RefreshScheduleT>(value)); return *this;}
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
