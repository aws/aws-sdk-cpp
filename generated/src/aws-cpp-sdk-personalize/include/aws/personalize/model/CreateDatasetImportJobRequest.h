/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/ImportMode.h>
#include <aws/personalize/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateDatasetImportJobRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateDatasetImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetImportJob"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the dataset import job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    CreateDatasetImportJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    CreateDatasetImportJobRequest& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    CreateDatasetImportJobRequest& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateDatasetImportJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDatasetImportJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDatasetImportJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify how to add the new records to an existing dataset. The default import
     * mode is <code>FULL</code>. If you haven't imported bulk records into the dataset
     * previously, you can only specify <code>FULL</code>.</p> <ul> <li> <p>Specify
     * <code>FULL</code> to overwrite all existing bulk data in your dataset. Data you
     * imported individually is not replaced.</p> </li> <li> <p>Specify
     * <code>INCREMENTAL</code> to append the new records to the existing data in your
     * dataset. Amazon Personalize replaces any record with the same ID with the new
     * one.</p> </li> </ul>
     */
    inline ImportMode GetImportMode() const { return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(ImportMode value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline CreateDatasetImportJobRequest& WithImportMode(ImportMode value) { SetImportMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you created a metric attribution, specify whether to publish metrics for
     * this import job to Amazon S3</p>
     */
    inline bool GetPublishAttributionMetricsToS3() const { return m_publishAttributionMetricsToS3; }
    inline bool PublishAttributionMetricsToS3HasBeenSet() const { return m_publishAttributionMetricsToS3HasBeenSet; }
    inline void SetPublishAttributionMetricsToS3(bool value) { m_publishAttributionMetricsToS3HasBeenSet = true; m_publishAttributionMetricsToS3 = value; }
    inline CreateDatasetImportJobRequest& WithPublishAttributionMetricsToS3(bool value) { SetPublishAttributionMetricsToS3(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ImportMode m_importMode{ImportMode::NOT_SET};
    bool m_importModeHasBeenSet = false;

    bool m_publishAttributionMetricsToS3{false};
    bool m_publishAttributionMetricsToS3HasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
