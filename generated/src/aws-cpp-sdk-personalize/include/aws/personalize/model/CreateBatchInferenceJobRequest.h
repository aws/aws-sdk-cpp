/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/BatchInferenceJobInput.h>
#include <aws/personalize/model/BatchInferenceJobOutput.h>
#include <aws/personalize/model/BatchInferenceJobConfig.h>
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
  class CreateBatchInferenceJobRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateBatchInferenceJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBatchInferenceJob"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline CreateBatchInferenceJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline CreateBatchInferenceJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline CreateBatchInferenceJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline CreateBatchInferenceJobRequest& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline CreateBatchInferenceJobRequest& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline CreateBatchInferenceJobRequest& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }

    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }

    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }

    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }

    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }

    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline CreateBatchInferenceJobRequest& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}

    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline CreateBatchInferenceJobRequest& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline CreateBatchInferenceJobRequest& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}


    /**
     * <p>The number of recommendations to retrieve.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p>The number of recommendations to retrieve.</p>
     */
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }

    /**
     * <p>The number of recommendations to retrieve.</p>
     */
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }

    /**
     * <p>The number of recommendations to retrieve.</p>
     */
    inline CreateBatchInferenceJobRequest& WithNumResults(int value) { SetNumResults(value); return *this;}


    /**
     * <p>The Amazon S3 path that leads to the input file to base your recommendations
     * on. The input material must be in JSON format.</p>
     */
    inline const BatchInferenceJobInput& GetJobInput() const{ return m_jobInput; }

    /**
     * <p>The Amazon S3 path that leads to the input file to base your recommendations
     * on. The input material must be in JSON format.</p>
     */
    inline bool JobInputHasBeenSet() const { return m_jobInputHasBeenSet; }

    /**
     * <p>The Amazon S3 path that leads to the input file to base your recommendations
     * on. The input material must be in JSON format.</p>
     */
    inline void SetJobInput(const BatchInferenceJobInput& value) { m_jobInputHasBeenSet = true; m_jobInput = value; }

    /**
     * <p>The Amazon S3 path that leads to the input file to base your recommendations
     * on. The input material must be in JSON format.</p>
     */
    inline void SetJobInput(BatchInferenceJobInput&& value) { m_jobInputHasBeenSet = true; m_jobInput = std::move(value); }

    /**
     * <p>The Amazon S3 path that leads to the input file to base your recommendations
     * on. The input material must be in JSON format.</p>
     */
    inline CreateBatchInferenceJobRequest& WithJobInput(const BatchInferenceJobInput& value) { SetJobInput(value); return *this;}

    /**
     * <p>The Amazon S3 path that leads to the input file to base your recommendations
     * on. The input material must be in JSON format.</p>
     */
    inline CreateBatchInferenceJobRequest& WithJobInput(BatchInferenceJobInput&& value) { SetJobInput(std::move(value)); return *this;}


    /**
     * <p>The path to the Amazon S3 bucket where the job's output will be stored.</p>
     */
    inline const BatchInferenceJobOutput& GetJobOutput() const{ return m_jobOutput; }

    /**
     * <p>The path to the Amazon S3 bucket where the job's output will be stored.</p>
     */
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }

    /**
     * <p>The path to the Amazon S3 bucket where the job's output will be stored.</p>
     */
    inline void SetJobOutput(const BatchInferenceJobOutput& value) { m_jobOutputHasBeenSet = true; m_jobOutput = value; }

    /**
     * <p>The path to the Amazon S3 bucket where the job's output will be stored.</p>
     */
    inline void SetJobOutput(BatchInferenceJobOutput&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::move(value); }

    /**
     * <p>The path to the Amazon S3 bucket where the job's output will be stored.</p>
     */
    inline CreateBatchInferenceJobRequest& WithJobOutput(const BatchInferenceJobOutput& value) { SetJobOutput(value); return *this;}

    /**
     * <p>The path to the Amazon S3 bucket where the job's output will be stored.</p>
     */
    inline CreateBatchInferenceJobRequest& WithJobOutput(BatchInferenceJobOutput&& value) { SetJobOutput(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline CreateBatchInferenceJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline CreateBatchInferenceJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline CreateBatchInferenceJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The configuration details of a batch inference job.</p>
     */
    inline const BatchInferenceJobConfig& GetBatchInferenceJobConfig() const{ return m_batchInferenceJobConfig; }

    /**
     * <p>The configuration details of a batch inference job.</p>
     */
    inline bool BatchInferenceJobConfigHasBeenSet() const { return m_batchInferenceJobConfigHasBeenSet; }

    /**
     * <p>The configuration details of a batch inference job.</p>
     */
    inline void SetBatchInferenceJobConfig(const BatchInferenceJobConfig& value) { m_batchInferenceJobConfigHasBeenSet = true; m_batchInferenceJobConfig = value; }

    /**
     * <p>The configuration details of a batch inference job.</p>
     */
    inline void SetBatchInferenceJobConfig(BatchInferenceJobConfig&& value) { m_batchInferenceJobConfigHasBeenSet = true; m_batchInferenceJobConfig = std::move(value); }

    /**
     * <p>The configuration details of a batch inference job.</p>
     */
    inline CreateBatchInferenceJobRequest& WithBatchInferenceJobConfig(const BatchInferenceJobConfig& value) { SetBatchInferenceJobConfig(value); return *this;}

    /**
     * <p>The configuration details of a batch inference job.</p>
     */
    inline CreateBatchInferenceJobRequest& WithBatchInferenceJobConfig(BatchInferenceJobConfig&& value) { SetBatchInferenceJobConfig(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline CreateBatchInferenceJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline CreateBatchInferenceJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline CreateBatchInferenceJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline CreateBatchInferenceJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    int m_numResults;
    bool m_numResultsHasBeenSet = false;

    BatchInferenceJobInput m_jobInput;
    bool m_jobInputHasBeenSet = false;

    BatchInferenceJobOutput m_jobOutput;
    bool m_jobOutputHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    BatchInferenceJobConfig m_batchInferenceJobConfig;
    bool m_batchInferenceJobConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
