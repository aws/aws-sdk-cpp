/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardStatus.h>
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
   * <p>The model card associated with the model package. Since
   * <code>ModelPackageModelCard</code> is tied to a model package, it is a specific
   * usage of a model card and its schema is simplified compared to the schema of
   * <code>ModelCard</code>. The <code>ModelPackageModelCard</code> schema does not
   * include <code>model_package_details</code>, and <code>model_overview</code> is
   * composed of the <code>model_creator</code> and <code>model_artifact</code>
   * properties. For more information about the model package model card schema, see
   * <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-registry-details.html#model-card-schema">Model
   * package model card schema</a>. For more information about the model card
   * associated with the model package, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-registry-details.html">View
   * the Details of a Model Version</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageModelCard">AWS
   * API Reference</a></p>
   */
  class ModelPackageModelCard
  {
  public:
    AWS_SAGEMAKER_API ModelPackageModelCard() = default;
    AWS_SAGEMAKER_API ModelPackageModelCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageModelCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the model card. The content must follow the schema described
     * in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-registry-details.html#model-card-schema">Model
     * Package Model Card Schema</a>.</p>
     */
    inline const Aws::String& GetModelCardContent() const { return m_modelCardContent; }
    inline bool ModelCardContentHasBeenSet() const { return m_modelCardContentHasBeenSet; }
    template<typename ModelCardContentT = Aws::String>
    void SetModelCardContent(ModelCardContentT&& value) { m_modelCardContentHasBeenSet = true; m_modelCardContent = std::forward<ModelCardContentT>(value); }
    template<typename ModelCardContentT = Aws::String>
    ModelPackageModelCard& WithModelCardContent(ModelCardContentT&& value) { SetModelCardContent(std::forward<ModelCardContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates can be made to the model card content. If you try to update the
     * model card content, you will receive the message <code>Model Card is in Archived
     * state</code>.</p> </li> </ul>
     */
    inline ModelCardStatus GetModelCardStatus() const { return m_modelCardStatus; }
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }
    inline void SetModelCardStatus(ModelCardStatus value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }
    inline ModelPackageModelCard& WithModelCardStatus(ModelCardStatus value) { SetModelCardStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_modelCardContent;
    bool m_modelCardContentHasBeenSet = false;

    ModelCardStatus m_modelCardStatus{ModelCardStatus::NOT_SET};
    bool m_modelCardStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
