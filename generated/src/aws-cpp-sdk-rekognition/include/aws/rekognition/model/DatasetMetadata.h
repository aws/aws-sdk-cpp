/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/DatasetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/DatasetStatus.h>
#include <aws/rekognition/model/DatasetStatusMessageCode.h>
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
   * <p> Summary information for an Amazon Rekognition Custom Labels dataset. For
   * more information, see <a>ProjectDescription</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DatasetMetadata">AWS
   * API Reference</a></p>
   */
  class DatasetMetadata
  {
  public:
    AWS_REKOGNITION_API DatasetMetadata();
    AWS_REKOGNITION_API DatasetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Unix timestamp for the date and time that the dataset was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline DatasetMetadata& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline DatasetMetadata& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the dataset. </p>
     */
    inline const DatasetType& GetDatasetType() const{ return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(const DatasetType& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline void SetDatasetType(DatasetType&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }
    inline DatasetMetadata& WithDatasetType(const DatasetType& value) { SetDatasetType(value); return *this;}
    inline DatasetMetadata& WithDatasetType(DatasetType&& value) { SetDatasetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the dataset. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }
    inline DatasetMetadata& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline DatasetMetadata& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline DatasetMetadata& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status for the dataset. </p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DatasetMetadata& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}
    inline DatasetMetadata& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline DatasetMetadata& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DatasetMetadata& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DatasetMetadata& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
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
    inline DatasetMetadata& WithStatusMessageCode(const DatasetStatusMessageCode& value) { SetStatusMessageCode(value); return *this;}
    inline DatasetMetadata& WithStatusMessageCode(DatasetStatusMessageCode&& value) { SetStatusMessageCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    DatasetType m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    DatasetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    DatasetStatusMessageCode m_statusMessageCode;
    bool m_statusMessageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
