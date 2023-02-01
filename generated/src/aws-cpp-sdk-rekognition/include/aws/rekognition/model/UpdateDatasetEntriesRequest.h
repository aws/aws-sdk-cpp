/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/DatasetChanges.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class UpdateDatasetEntriesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API UpdateDatasetEntriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatasetEntries"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to update. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to update. </p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to update. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to update. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to update. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to update. </p>
     */
    inline UpdateDatasetEntriesRequest& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to update. </p>
     */
    inline UpdateDatasetEntriesRequest& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to update. </p>
     */
    inline UpdateDatasetEntriesRequest& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p> The changes that you want to make to the dataset. </p>
     */
    inline const DatasetChanges& GetChanges() const{ return m_changes; }

    /**
     * <p> The changes that you want to make to the dataset. </p>
     */
    inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }

    /**
     * <p> The changes that you want to make to the dataset. </p>
     */
    inline void SetChanges(const DatasetChanges& value) { m_changesHasBeenSet = true; m_changes = value; }

    /**
     * <p> The changes that you want to make to the dataset. </p>
     */
    inline void SetChanges(DatasetChanges&& value) { m_changesHasBeenSet = true; m_changes = std::move(value); }

    /**
     * <p> The changes that you want to make to the dataset. </p>
     */
    inline UpdateDatasetEntriesRequest& WithChanges(const DatasetChanges& value) { SetChanges(value); return *this;}

    /**
     * <p> The changes that you want to make to the dataset. </p>
     */
    inline UpdateDatasetEntriesRequest& WithChanges(DatasetChanges&& value) { SetChanges(std::move(value)); return *this;}

  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    DatasetChanges m_changes;
    bool m_changesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
