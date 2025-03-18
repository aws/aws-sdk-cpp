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
    AWS_PERSONALIZE_API CreateBatchInferenceJobRequest() = default;

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
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    CreateBatchInferenceJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution version that will be used to
     * generate the batch inference recommendations.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const { return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    template<typename SolutionVersionArnT = Aws::String>
    void SetSolutionVersionArn(SolutionVersionArnT&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::forward<SolutionVersionArnT>(value); }
    template<typename SolutionVersionArnT = Aws::String>
    CreateBatchInferenceJobRequest& WithSolutionVersionArn(SolutionVersionArnT&& value) { SetSolutionVersionArn(std::forward<SolutionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the filter to apply to the batch inference job. For more
     * information on using filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-batch.html">Filtering
     * batch recommendations</a>.</p>
     */
    inline const Aws::String& GetFilterArn() const { return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    template<typename FilterArnT = Aws::String>
    void SetFilterArn(FilterArnT&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::forward<FilterArnT>(value); }
    template<typename FilterArnT = Aws::String>
    CreateBatchInferenceJobRequest& WithFilterArn(FilterArnT&& value) { SetFilterArn(std::forward<FilterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recommendations to retrieve.</p>
     */
    inline int GetNumResults() const { return m_numResults; }
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline CreateBatchInferenceJobRequest& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path that leads to the input file to base your recommendations
     * on. The input material must be in JSON format.</p>
     */
    inline const BatchInferenceJobInput& GetJobInput() const { return m_jobInput; }
    inline bool JobInputHasBeenSet() const { return m_jobInputHasBeenSet; }
    template<typename JobInputT = BatchInferenceJobInput>
    void SetJobInput(JobInputT&& value) { m_jobInputHasBeenSet = true; m_jobInput = std::forward<JobInputT>(value); }
    template<typename JobInputT = BatchInferenceJobInput>
    CreateBatchInferenceJobRequest& WithJobInput(JobInputT&& value) { SetJobInput(std::forward<JobInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon S3 bucket where the job's output will be stored.</p>
     */
    inline const BatchInferenceJobOutput& GetJobOutput() const { return m_jobOutput; }
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }
    template<typename JobOutputT = BatchInferenceJobOutput>
    void SetJobOutput(JobOutputT&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::forward<JobOutputT>(value); }
    template<typename JobOutputT = BatchInferenceJobOutput>
    CreateBatchInferenceJobRequest& WithJobOutput(JobOutputT&& value) { SetJobOutput(std::forward<JobOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateBatchInferenceJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of a batch inference job.</p>
     */
    inline const BatchInferenceJobConfig& GetBatchInferenceJobConfig() const { return m_batchInferenceJobConfig; }
    inline bool BatchInferenceJobConfigHasBeenSet() const { return m_batchInferenceJobConfigHasBeenSet; }
    template<typename BatchInferenceJobConfigT = BatchInferenceJobConfig>
    void SetBatchInferenceJobConfig(BatchInferenceJobConfigT&& value) { m_batchInferenceJobConfigHasBeenSet = true; m_batchInferenceJobConfig = std::forward<BatchInferenceJobConfigT>(value); }
    template<typename BatchInferenceJobConfigT = BatchInferenceJobConfig>
    CreateBatchInferenceJobRequest& WithBatchInferenceJobConfig(BatchInferenceJobConfigT&& value) { SetBatchInferenceJobConfig(std::forward<BatchInferenceJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/tagging-resources.html">tags</a>
     * to apply to the batch inference job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateBatchInferenceJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateBatchInferenceJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline BatchInferenceJobMode GetBatchInferenceJobMode() const { return m_batchInferenceJobMode; }
    inline bool BatchInferenceJobModeHasBeenSet() const { return m_batchInferenceJobModeHasBeenSet; }
    inline void SetBatchInferenceJobMode(BatchInferenceJobMode value) { m_batchInferenceJobModeHasBeenSet = true; m_batchInferenceJobMode = value; }
    inline CreateBatchInferenceJobRequest& WithBatchInferenceJobMode(BatchInferenceJobMode value) { SetBatchInferenceJobMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For theme generation jobs, specify the name of the column in your Items
     * dataset that contains each item's name.</p>
     */
    inline const ThemeGenerationConfig& GetThemeGenerationConfig() const { return m_themeGenerationConfig; }
    inline bool ThemeGenerationConfigHasBeenSet() const { return m_themeGenerationConfigHasBeenSet; }
    template<typename ThemeGenerationConfigT = ThemeGenerationConfig>
    void SetThemeGenerationConfig(ThemeGenerationConfigT&& value) { m_themeGenerationConfigHasBeenSet = true; m_themeGenerationConfig = std::forward<ThemeGenerationConfigT>(value); }
    template<typename ThemeGenerationConfigT = ThemeGenerationConfig>
    CreateBatchInferenceJobRequest& WithThemeGenerationConfig(ThemeGenerationConfigT&& value) { SetThemeGenerationConfig(std::forward<ThemeGenerationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    int m_numResults{0};
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

    BatchInferenceJobMode m_batchInferenceJobMode{BatchInferenceJobMode::NOT_SET};
    bool m_batchInferenceJobModeHasBeenSet = false;

    ThemeGenerationConfig m_themeGenerationConfig;
    bool m_themeGenerationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
