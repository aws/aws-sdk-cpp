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
    AWS_SAGEMAKER_API TextClassificationJobConfig();
    AWS_SAGEMAKER_API TextClassificationJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TextClassificationJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const{ return m_completionCriteria; }

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline void SetCompletionCriteria(const AutoMLJobCompletionCriteria& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = value; }

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline void SetCompletionCriteria(AutoMLJobCompletionCriteria&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::move(value); }

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline TextClassificationJobConfig& WithCompletionCriteria(const AutoMLJobCompletionCriteria& value) { SetCompletionCriteria(value); return *this;}

    /**
     * <p>How long a job is allowed to run, or how many candidates a job is allowed to
     * generate.</p>
     */
    inline TextClassificationJobConfig& WithCompletionCriteria(AutoMLJobCompletionCriteria&& value) { SetCompletionCriteria(std::move(value)); return *this;}


    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline const Aws::String& GetContentColumn() const{ return m_contentColumn; }

    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline bool ContentColumnHasBeenSet() const { return m_contentColumnHasBeenSet; }

    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline void SetContentColumn(const Aws::String& value) { m_contentColumnHasBeenSet = true; m_contentColumn = value; }

    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline void SetContentColumn(Aws::String&& value) { m_contentColumnHasBeenSet = true; m_contentColumn = std::move(value); }

    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline void SetContentColumn(const char* value) { m_contentColumnHasBeenSet = true; m_contentColumn.assign(value); }

    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline TextClassificationJobConfig& WithContentColumn(const Aws::String& value) { SetContentColumn(value); return *this;}

    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline TextClassificationJobConfig& WithContentColumn(Aws::String&& value) { SetContentColumn(std::move(value)); return *this;}

    /**
     * <p>The name of the column used to provide the sentences to be classified. It
     * should not be the same as the target column.</p>
     */
    inline TextClassificationJobConfig& WithContentColumn(const char* value) { SetContentColumn(value); return *this;}


    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline const Aws::String& GetTargetLabelColumn() const{ return m_targetLabelColumn; }

    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline bool TargetLabelColumnHasBeenSet() const { return m_targetLabelColumnHasBeenSet; }

    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline void SetTargetLabelColumn(const Aws::String& value) { m_targetLabelColumnHasBeenSet = true; m_targetLabelColumn = value; }

    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline void SetTargetLabelColumn(Aws::String&& value) { m_targetLabelColumnHasBeenSet = true; m_targetLabelColumn = std::move(value); }

    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline void SetTargetLabelColumn(const char* value) { m_targetLabelColumnHasBeenSet = true; m_targetLabelColumn.assign(value); }

    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline TextClassificationJobConfig& WithTargetLabelColumn(const Aws::String& value) { SetTargetLabelColumn(value); return *this;}

    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline TextClassificationJobConfig& WithTargetLabelColumn(Aws::String&& value) { SetTargetLabelColumn(std::move(value)); return *this;}

    /**
     * <p>The name of the column used to provide the class labels. It should not be
     * same as the content column.</p>
     */
    inline TextClassificationJobConfig& WithTargetLabelColumn(const char* value) { SetTargetLabelColumn(value); return *this;}

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
