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
#include <aws/personalize/model/BatchInferenceJobMode.h>
#include <aws/personalize/model/ThemeGenerationConfig.h>
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


    ///@{
    /**
     * <p>The name of the batch inference job to create.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline CreateBatchInferenceJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline CreateBatchInferenceJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }
    inline CreateBatchInferenceJobRequest& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}
    inline CreateBatchInferenceJobRequest& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }
    inline CreateBatchInferenceJobRequest& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}
    inline CreateBatchInferenceJobRequest& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recommendations to retrieve.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline CreateBatchInferenceJobRequest& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path that leads to the input file to base your recommendations
     * on. The input material must be in JSON format.</p>
     */
    inline const BatchInferenceJobInput& GetJobInput() const{ return m_jobInput; }
    inline bool JobInputHasBeenSet() const { return m_jobInputHasBeenSet; }
    inline void SetJobInput(const BatchInferenceJobInput& value) { m_jobInputHasBeenSet = true; m_jobInput = value; }
    inline void SetJobInput(BatchInferenceJobInput&& value) { m_jobInputHasBeenSet = true; m_jobInput = std::move(value); }
    inline CreateBatchInferenceJobRequest& WithJobInput(const BatchInferenceJobInput& value) { SetJobInput(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithJobInput(BatchInferenceJobInput&& value) { SetJobInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon S3 bucket where the job's output will be stored.</p>
     */
    inline const BatchInferenceJobOutput& GetJobOutput() const{ return m_jobOutput; }
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }
    inline void SetJobOutput(const BatchInferenceJobOutput& value) { m_jobOutputHasBeenSet = true; m_jobOutput = value; }
    inline void SetJobOutput(BatchInferenceJobOutput&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::move(value); }
    inline CreateBatchInferenceJobRequest& WithJobOutput(const BatchInferenceJobOutput& value) { SetJobOutput(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithJobOutput(BatchInferenceJobOutput&& value) { SetJobOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateBatchInferenceJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateBatchInferenceJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of a batch inference job.</p>
     */
    inline const BatchInferenceJobConfig& GetBatchInferenceJobConfig() const{ return m_batchInferenceJobConfig; }
    inline bool BatchInferenceJobConfigHasBeenSet() const { return m_batchInferenceJobConfigHasBeenSet; }
    inline void SetBatchInferenceJobConfig(const BatchInferenceJobConfig& value) { m_batchInferenceJobConfigHasBeenSet = true; m_batchInferenceJobConfig = value; }
    inline void SetBatchInferenceJobConfig(BatchInferenceJobConfig&& value) { m_batchInferenceJobConfigHasBeenSet = true; m_batchInferenceJobConfig = std::move(value); }
    inline CreateBatchInferenceJobRequest& WithBatchInferenceJobConfig(const BatchInferenceJobConfig& value) { SetBatchInferenceJobConfig(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithBatchInferenceJobConfig(BatchInferenceJobConfig&& value) { SetBatchInferenceJobConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateBatchInferenceJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateBatchInferenceJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateBatchInferenceJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mode of the batch inference job. To generate descriptive themes for
     * groups of similar items, set the job mode to <code>THEME_GENERATION</code>. If
     * you don't want to generate themes, use the default
     * <code>BATCH_INFERENCE</code>.</p> <p> When you get batch recommendations with
     * themes, you will incur additional costs. For more information, see <a
     * href="https://aws.amazon.com/personalize/pricing/">Amazon Personalize
     * pricing</a>. </p>
     */
    inline const BatchInferenceJobMode& GetBatchInferenceJobMode() const{ return m_batchInferenceJobMode; }
    inline bool BatchInferenceJobModeHasBeenSet() const { return m_batchInferenceJobModeHasBeenSet; }
    inline void SetBatchInferenceJobMode(const BatchInferenceJobMode& value) { m_batchInferenceJobModeHasBeenSet = true; m_batchInferenceJobMode = value; }
    inline void SetBatchInferenceJobMode(BatchInferenceJobMode&& value) { m_batchInferenceJobModeHasBeenSet = true; m_batchInferenceJobMode = std::move(value); }
    inline CreateBatchInferenceJobRequest& WithBatchInferenceJobMode(const BatchInferenceJobMode& value) { SetBatchInferenceJobMode(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithBatchInferenceJobMode(BatchInferenceJobMode&& value) { SetBatchInferenceJobMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For theme generation jobs, specify the name of the column in your Items
     * dataset that contains each item's name.</p>
     */
    inline const ThemeGenerationConfig& GetThemeGenerationConfig() const{ return m_themeGenerationConfig; }
    inline bool ThemeGenerationConfigHasBeenSet() const { return m_themeGenerationConfigHasBeenSet; }
    inline void SetThemeGenerationConfig(const ThemeGenerationConfig& value) { m_themeGenerationConfigHasBeenSet = true; m_themeGenerationConfig = value; }
    inline void SetThemeGenerationConfig(ThemeGenerationConfig&& value) { m_themeGenerationConfigHasBeenSet = true; m_themeGenerationConfig = std::move(value); }
    inline CreateBatchInferenceJobRequest& WithThemeGenerationConfig(const ThemeGenerationConfig& value) { SetThemeGenerationConfig(value); return *this;}
    inline CreateBatchInferenceJobRequest& WithThemeGenerationConfig(ThemeGenerationConfig&& value) { SetThemeGenerationConfig(std::move(value)); return *this;}
    ///@}
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

    BatchInferenceJobMode m_batchInferenceJobMode;
    bool m_batchInferenceJobModeHasBeenSet = false;

    ThemeGenerationConfig m_themeGenerationConfig;
    bool m_themeGenerationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
