/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/IngestionMode.h>
#include <aws/personalize/model/DatasetExportJobOutput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateDatasetExportJobRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateDatasetExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetExportJob"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the dataset export job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name for the dataset export job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name for the dataset export job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name for the dataset export job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name for the dataset export job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name for the dataset export job.</p>
     */
    inline CreateDatasetExportJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name for the dataset export job.</p>
     */
    inline CreateDatasetExportJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name for the dataset export job.</p>
     */
    inline CreateDatasetExportJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains the data to
     * export.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains the data to
     * export.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains the data to
     * export.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains the data to
     * export.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains the data to
     * export.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains the data to
     * export.</p>
     */
    inline CreateDatasetExportJobRequest& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains the data to
     * export.</p>
     */
    inline CreateDatasetExportJobRequest& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains the data to
     * export.</p>
     */
    inline CreateDatasetExportJobRequest& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The data to export, based on how you imported the data. You can choose to
     * export only <code>BULK</code> data that you imported using a dataset import job,
     * only <code>PUT</code> data that you imported incrementally (using the console,
     * PutEvents, PutUsers and PutItems operations), or <code>ALL</code> for both
     * types. The default value is <code>PUT</code>. </p>
     */
    inline const IngestionMode& GetIngestionMode() const{ return m_ingestionMode; }

    /**
     * <p>The data to export, based on how you imported the data. You can choose to
     * export only <code>BULK</code> data that you imported using a dataset import job,
     * only <code>PUT</code> data that you imported incrementally (using the console,
     * PutEvents, PutUsers and PutItems operations), or <code>ALL</code> for both
     * types. The default value is <code>PUT</code>. </p>
     */
    inline bool IngestionModeHasBeenSet() const { return m_ingestionModeHasBeenSet; }

    /**
     * <p>The data to export, based on how you imported the data. You can choose to
     * export only <code>BULK</code> data that you imported using a dataset import job,
     * only <code>PUT</code> data that you imported incrementally (using the console,
     * PutEvents, PutUsers and PutItems operations), or <code>ALL</code> for both
     * types. The default value is <code>PUT</code>. </p>
     */
    inline void SetIngestionMode(const IngestionMode& value) { m_ingestionModeHasBeenSet = true; m_ingestionMode = value; }

    /**
     * <p>The data to export, based on how you imported the data. You can choose to
     * export only <code>BULK</code> data that you imported using a dataset import job,
     * only <code>PUT</code> data that you imported incrementally (using the console,
     * PutEvents, PutUsers and PutItems operations), or <code>ALL</code> for both
     * types. The default value is <code>PUT</code>. </p>
     */
    inline void SetIngestionMode(IngestionMode&& value) { m_ingestionModeHasBeenSet = true; m_ingestionMode = std::move(value); }

    /**
     * <p>The data to export, based on how you imported the data. You can choose to
     * export only <code>BULK</code> data that you imported using a dataset import job,
     * only <code>PUT</code> data that you imported incrementally (using the console,
     * PutEvents, PutUsers and PutItems operations), or <code>ALL</code> for both
     * types. The default value is <code>PUT</code>. </p>
     */
    inline CreateDatasetExportJobRequest& WithIngestionMode(const IngestionMode& value) { SetIngestionMode(value); return *this;}

    /**
     * <p>The data to export, based on how you imported the data. You can choose to
     * export only <code>BULK</code> data that you imported using a dataset import job,
     * only <code>PUT</code> data that you imported incrementally (using the console,
     * PutEvents, PutUsers and PutItems operations), or <code>ALL</code> for both
     * types. The default value is <code>PUT</code>. </p>
     */
    inline CreateDatasetExportJobRequest& WithIngestionMode(IngestionMode&& value) { SetIngestionMode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline CreateDatasetExportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline CreateDatasetExportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket.</p>
     */
    inline CreateDatasetExportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The path to the Amazon S3 bucket where the job's output is stored.</p>
     */
    inline const DatasetExportJobOutput& GetJobOutput() const{ return m_jobOutput; }

    /**
     * <p>The path to the Amazon S3 bucket where the job's output is stored.</p>
     */
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }

    /**
     * <p>The path to the Amazon S3 bucket where the job's output is stored.</p>
     */
    inline void SetJobOutput(const DatasetExportJobOutput& value) { m_jobOutputHasBeenSet = true; m_jobOutput = value; }

    /**
     * <p>The path to the Amazon S3 bucket where the job's output is stored.</p>
     */
    inline void SetJobOutput(DatasetExportJobOutput&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::move(value); }

    /**
     * <p>The path to the Amazon S3 bucket where the job's output is stored.</p>
     */
    inline CreateDatasetExportJobRequest& WithJobOutput(const DatasetExportJobOutput& value) { SetJobOutput(value); return *this;}

    /**
     * <p>The path to the Amazon S3 bucket where the job's output is stored.</p>
     */
    inline CreateDatasetExportJobRequest& WithJobOutput(DatasetExportJobOutput&& value) { SetJobOutput(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset export job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset export job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset export job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset export job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset export job.</p>
     */
    inline CreateDatasetExportJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset export job.</p>
     */
    inline CreateDatasetExportJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset export job.</p>
     */
    inline CreateDatasetExportJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset export job.</p>
     */
    inline CreateDatasetExportJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    IngestionMode m_ingestionMode;
    bool m_ingestionModeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DatasetExportJobOutput m_jobOutput;
    bool m_jobOutputHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
