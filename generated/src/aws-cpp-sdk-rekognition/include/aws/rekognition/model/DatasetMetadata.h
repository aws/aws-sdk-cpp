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
    AWS_REKOGNITION_API DatasetMetadata() = default;
    AWS_REKOGNITION_API DatasetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Unix timestamp for the date and time that the dataset was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    DatasetMetadata& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the dataset. </p>
     */
    inline DatasetType GetDatasetType() const { return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(DatasetType value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline DatasetMetadata& WithDatasetType(DatasetType value) { SetDatasetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the dataset. </p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DatasetMetadata& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status for the dataset. </p>
     */
    inline DatasetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DatasetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DatasetMetadata& WithStatus(DatasetStatus value) { SetStatus(value); return *this;}
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
    DatasetMetadata& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
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
    inline DatasetMetadata& WithStatusMessageCode(DatasetStatusMessageCode value) { SetStatusMessageCode(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    DatasetType m_datasetType{DatasetType::NOT_SET};
    bool m_datasetTypeHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    DatasetStatus m_status{DatasetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    DatasetStatusMessageCode m_statusMessageCode{DatasetStatusMessageCode::NOT_SET};
    bool m_statusMessageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
