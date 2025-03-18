/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The collection of settings used by an AutoML job V2 for the text
   * classification problem type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TextClassificationJobConfig">AWS
   * API Reference</a></p>
   */
  class TextClassificationJobConfig
  {
  public:
    AWS_SAGEMAKER_API TextClassificationJobConfig() = default;
    AWS_SAGEMAKER_API TextClassificationJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TextClassificationJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const { return m_completionCriteria; }
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    void SetCompletionCriteria(CompletionCriteriaT&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::forward<CompletionCriteriaT>(value); }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    TextClassificationJobConfig& WithCompletionCriteria(CompletionCriteriaT&& value) { SetCompletionCriteria(std::forward<CompletionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline const Aws::String& GetContentColumn() const { return m_contentColumn; }
    inline bool ContentColumnHasBeenSet() const { return m_contentColumnHasBeenSet; }
    template<typename ContentColumnT = Aws::String>
    void SetContentColumn(ContentColumnT&& value) { m_contentColumnHasBeenSet = true; m_contentColumn = std::forward<ContentColumnT>(value); }
    template<typename ContentColumnT = Aws::String>
    TextClassificationJobConfig& WithContentColumn(ContentColumnT&& value) { SetContentColumn(std::forward<ContentColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline const Aws::String& GetTargetLabelColumn() const { return m_targetLabelColumn; }
    inline bool TargetLabelColumnHasBeenSet() const { return m_targetLabelColumnHasBeenSet; }
    template<typename TargetLabelColumnT = Aws::String>
    void SetTargetLabelColumn(TargetLabelColumnT&& value) { m_targetLabelColumnHasBeenSet = true; m_targetLabelColumn = std::forward<TargetLabelColumnT>(value); }
    template<typename TargetLabelColumnT = Aws::String>
    TextClassificationJobConfig& WithTargetLabelColumn(TargetLabelColumnT&& value) { SetTargetLabelColumn(std::forward<TargetLabelColumnT>(value)); return *this;}
    ///@}
  private:

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;

    Aws::String m_contentColumn;
    bool m_contentColumnHasBeenSet = false;

    Aws::String m_targetLabelColumn;
    bool m_targetLabelColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
