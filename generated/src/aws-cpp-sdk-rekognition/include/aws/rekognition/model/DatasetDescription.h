/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/DatasetStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/DatasetStatusMessageCode.h>
#include <aws/rekognition/model/DatasetStats.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p> A description for a dataset. For more information, see
   * <a>DescribeDataset</a>.</p> <p>The status fields <code>Status</code>,
   * <code>StatusMessage</code>, and <code>StatusMessageCode</code> reflect the last
   * operation on the dataset. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DatasetDescription">AWS
   * API Reference</a></p>
   */
  class DatasetDescription
  {
  public:
    AWS_REKOGNITION_API DatasetDescription() = default;
    AWS_REKOGNITION_API DatasetDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Unix timestamp for the time and date that the dataset was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    DatasetDescription& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Unix timestamp for the date and time that the dataset was last updated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    DatasetDescription& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the dataset. </p>
     */
    inline DatasetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DatasetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DatasetDescription& WithStatus(DatasetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message for the dataset. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DatasetDescription& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message code for the dataset operation. If a service error
     * occurs, try the API call again later. If a client error occurs, check the input
     * parameters to the dataset API call that failed. </p>
     */
    inline DatasetStatusMessageCode GetStatusMessageCode() const { return m_statusMessageCode; }
    inline bool StatusMessageCodeHasBeenSet() const { return m_statusMessageCodeHasBeenSet; }
    inline void SetStatusMessageCode(DatasetStatusMessageCode value) { m_statusMessageCodeHasBeenSet = true; m_statusMessageCode = value; }
    inline DatasetDescription& WithStatusMessageCode(DatasetStatusMessageCode value) { SetStatusMessageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message code for the dataset. </p>
     */
    inline const DatasetStats& GetDatasetStats() const { return m_datasetStats; }
    inline bool DatasetStatsHasBeenSet() const { return m_datasetStatsHasBeenSet; }
    template<typename DatasetStatsT = DatasetStats>
    void SetDatasetStats(DatasetStatsT&& value) { m_datasetStatsHasBeenSet = true; m_datasetStats = std::forward<DatasetStatsT>(value); }
    template<typename DatasetStatsT = DatasetStats>
    DatasetDescription& WithDatasetStats(DatasetStatsT&& value) { SetDatasetStats(std::forward<DatasetStatsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    DatasetStatus m_status{DatasetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    DatasetStatusMessageCode m_statusMessageCode{DatasetStatusMessageCode::NOT_SET};
    bool m_statusMessageCodeHasBeenSet = false;

    DatasetStats m_datasetStats;
    bool m_datasetStatsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
