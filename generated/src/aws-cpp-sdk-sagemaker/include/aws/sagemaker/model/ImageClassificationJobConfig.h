﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
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
   * <p>The collection of settings used by an AutoML job V2 for the image
   * classification problem type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ImageClassificationJobConfig">AWS
   * API Reference</a></p>
   */
  class ImageClassificationJobConfig
  {
  public:
    AWS_SAGEMAKER_API ImageClassificationJobConfig() = default;
    AWS_SAGEMAKER_API ImageClassificationJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ImageClassificationJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ImageClassificationJobConfig& WithCompletionCriteria(CompletionCriteriaT&& value) { SetCompletionCriteria(std::forward<CompletionCriteriaT>(value)); return *this;}
    ///@}
  private:

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
