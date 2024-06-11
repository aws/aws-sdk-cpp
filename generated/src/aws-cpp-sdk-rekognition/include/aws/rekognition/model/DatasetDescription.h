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
    AWS_REKOGNITION_API DatasetDescription();
    AWS_REKOGNITION_API DatasetDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Unix timestamp for the time and date that the dataset was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline DatasetDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline DatasetDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Unix timestamp for the date and time that the dataset was last updated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline DatasetDescription& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline DatasetDescription& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the dataset. </p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DatasetDescription& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}
    inline DatasetDescription& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message for the dataset. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline DatasetDescription& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DatasetDescription& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DatasetDescription& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message code for the dataset operation. If a service error
     * occurs, try the API call again later. If a client error occurs, check the input
     * parameters to the dataset API call that failed. </p>
     */
    inline const DatasetStatusMessageCode& GetStatusMessageCode() const{ return m_statusMessageCode; }
    inline bool StatusMessageCodeHasBeenSet() const { return m_statusMessageCodeHasBeenSet; }
    inline void SetStatusMessageCode(const DatasetStatusMessageCode& value) { m_statusMessageCodeHasBeenSet = true; m_statusMessageCode = value; }
    inline void SetStatusMessageCode(DatasetStatusMessageCode&& value) { m_statusMessageCodeHasBeenSet = true; m_statusMessageCode = std::move(value); }
    inline DatasetDescription& WithStatusMessageCode(const DatasetStatusMessageCode& value) { SetStatusMessageCode(value); return *this;}
    inline DatasetDescription& WithStatusMessageCode(DatasetStatusMessageCode&& value) { SetStatusMessageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message code for the dataset. </p>
     */
    inline const DatasetStats& GetDatasetStats() const{ return m_datasetStats; }
    inline bool DatasetStatsHasBeenSet() const { return m_datasetStatsHasBeenSet; }
    inline void SetDatasetStats(const DatasetStats& value) { m_datasetStatsHasBeenSet = true; m_datasetStats = value; }
    inline void SetDatasetStats(DatasetStats&& value) { m_datasetStatsHasBeenSet = true; m_datasetStats = std::move(value); }
    inline DatasetDescription& WithDatasetStats(const DatasetStats& value) { SetDatasetStats(value); return *this;}
    inline DatasetDescription& WithDatasetStats(DatasetStats&& value) { SetDatasetStats(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    DatasetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    DatasetStatusMessageCode m_statusMessageCode;
    bool m_statusMessageCodeHasBeenSet = false;

    DatasetStats m_datasetStats;
    bool m_datasetStatsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
