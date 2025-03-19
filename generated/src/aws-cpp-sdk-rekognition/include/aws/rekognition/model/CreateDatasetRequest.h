/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/DatasetSource.h>
#include <aws/rekognition/model/DatasetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateDatasetRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateDatasetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The source files for the dataset. You can specify the ARN of an existing
     * dataset or specify the Amazon S3 bucket location of an Amazon Sagemaker format
     * manifest file. If you don't specify <code>datasetSource</code>, an empty dataset
     * is created. To add labeled images to the dataset, You can use the console or
     * call <a>UpdateDatasetEntries</a>. </p>
     */
    inline const DatasetSource& GetDatasetSource() const { return m_datasetSource; }
    inline bool DatasetSourceHasBeenSet() const { return m_datasetSourceHasBeenSet; }
    template<typename DatasetSourceT = DatasetSource>
    void SetDatasetSource(DatasetSourceT&& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = std::forward<DatasetSourceT>(value); }
    template<typename DatasetSourceT = DatasetSource>
    CreateDatasetRequest& WithDatasetSource(DatasetSourceT&& value) { SetDatasetSource(std::forward<DatasetSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the dataset. Specify <code>TRAIN</code> to create a training
     * dataset. Specify <code>TEST</code> to create a test dataset. </p>
     */
    inline DatasetType GetDatasetType() const { return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(DatasetType value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline CreateDatasetRequest& WithDatasetType(DatasetType value) { SetDatasetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the Amazon Rekognition Custom Labels project to which you want to
     * asssign the dataset. </p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    CreateDatasetRequest& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDatasetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDatasetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    DatasetSource m_datasetSource;
    bool m_datasetSourceHasBeenSet = false;

    DatasetType m_datasetType{DatasetType::NOT_SET};
    bool m_datasetTypeHasBeenSet = false;

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
