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


    /**
     * <p> The Unix timestamp for the time and date that the dataset was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p> The Unix timestamp for the time and date that the dataset was created. </p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p> The Unix timestamp for the time and date that the dataset was created. </p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p> The Unix timestamp for the time and date that the dataset was created. </p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p> The Unix timestamp for the time and date that the dataset was created. </p>
     */
    inline DatasetDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p> The Unix timestamp for the time and date that the dataset was created. </p>
     */
    inline DatasetDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p> The Unix timestamp for the date and time that the dataset was last updated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p> The Unix timestamp for the date and time that the dataset was last updated.
     * </p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p> The Unix timestamp for the date and time that the dataset was last updated.
     * </p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p> The Unix timestamp for the date and time that the dataset was last updated.
     * </p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p> The Unix timestamp for the date and time that the dataset was last updated.
     * </p>
     */
    inline DatasetDescription& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p> The Unix timestamp for the date and time that the dataset was last updated.
     * </p>
     */
    inline DatasetDescription& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p> The status of the dataset. </p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the dataset. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the dataset. </p>
     */
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the dataset. </p>
     */
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the dataset. </p>
     */
    inline DatasetDescription& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the dataset. </p>
     */
    inline DatasetDescription& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The status message for the dataset. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> The status message for the dataset. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> The status message for the dataset. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> The status message for the dataset. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> The status message for the dataset. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> The status message for the dataset. </p>
     */
    inline DatasetDescription& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> The status message for the dataset. </p>
     */
    inline DatasetDescription& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> The status message for the dataset. </p>
     */
    inline DatasetDescription& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p> The status message code for the dataset operation. If a service error
     * occurs, try the API call again later. If a client error occurs, check the input
     * parameters to the dataset API call that failed. </p>
     */
    inline const DatasetStatusMessageCode& GetStatusMessageCode() const{ return m_statusMessageCode; }

    /**
     * <p> The status message code for the dataset operation. If a service error
     * occurs, try the API call again later. If a client error occurs, check the input
     * parameters to the dataset API call that failed. </p>
     */
    inline bool StatusMessageCodeHasBeenSet() const { return m_statusMessageCodeHasBeenSet; }

    /**
     * <p> The status message code for the dataset operation. If a service error
     * occurs, try the API call again later. If a client error occurs, check the input
     * parameters to the dataset API call that failed. </p>
     */
    inline void SetStatusMessageCode(const DatasetStatusMessageCode& value) { m_statusMessageCodeHasBeenSet = true; m_statusMessageCode = value; }

    /**
     * <p> The status message code for the dataset operation. If a service error
     * occurs, try the API call again later. If a client error occurs, check the input
     * parameters to the dataset API call that failed. </p>
     */
    inline void SetStatusMessageCode(DatasetStatusMessageCode&& value) { m_statusMessageCodeHasBeenSet = true; m_statusMessageCode = std::move(value); }

    /**
     * <p> The status message code for the dataset operation. If a service error
     * occurs, try the API call again later. If a client error occurs, check the input
     * parameters to the dataset API call that failed. </p>
     */
    inline DatasetDescription& WithStatusMessageCode(const DatasetStatusMessageCode& value) { SetStatusMessageCode(value); return *this;}

    /**
     * <p> The status message code for the dataset operation. If a service error
     * occurs, try the API call again later. If a client error occurs, check the input
     * parameters to the dataset API call that failed. </p>
     */
    inline DatasetDescription& WithStatusMessageCode(DatasetStatusMessageCode&& value) { SetStatusMessageCode(std::move(value)); return *this;}


    /**
     * <p> The status message code for the dataset. </p>
     */
    inline const DatasetStats& GetDatasetStats() const{ return m_datasetStats; }

    /**
     * <p> The status message code for the dataset. </p>
     */
    inline bool DatasetStatsHasBeenSet() const { return m_datasetStatsHasBeenSet; }

    /**
     * <p> The status message code for the dataset. </p>
     */
    inline void SetDatasetStats(const DatasetStats& value) { m_datasetStatsHasBeenSet = true; m_datasetStats = value; }

    /**
     * <p> The status message code for the dataset. </p>
     */
    inline void SetDatasetStats(DatasetStats&& value) { m_datasetStatsHasBeenSet = true; m_datasetStats = std::move(value); }

    /**
     * <p> The status message code for the dataset. </p>
     */
    inline DatasetDescription& WithDatasetStats(const DatasetStats& value) { SetDatasetStats(value); return *this;}

    /**
     * <p> The status message code for the dataset. </p>
     */
    inline DatasetDescription& WithDatasetStats(DatasetStats&& value) { SetDatasetStats(std::move(value)); return *this;}

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
