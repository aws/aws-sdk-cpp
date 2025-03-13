/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A summary of the model card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelCardSummary">AWS
   * API Reference</a></p>
   */
  class ModelCardSummary
  {
  public:
    AWS_SAGEMAKER_API ModelCardSummary() = default;
    AWS_SAGEMAKER_API ModelCardSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCardSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model card.</p>
     */
    inline const Aws::String& GetModelCardName() const { return m_modelCardName; }
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
    template<typename ModelCardNameT = Aws::String>
    void SetModelCardName(ModelCardNameT&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::forward<ModelCardNameT>(value); }
    template<typename ModelCardNameT = Aws::String>
    ModelCardSummary& WithModelCardName(ModelCardNameT&& value) { SetModelCardName(std::forward<ModelCardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const { return m_modelCardArn; }
    inline bool ModelCardArnHasBeenSet() const { return m_modelCardArnHasBeenSet; }
    template<typename ModelCardArnT = Aws::String>
    void SetModelCardArn(ModelCardArnT&& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = std::forward<ModelCardArnT>(value); }
    template<typename ModelCardArnT = Aws::String>
    ModelCardSummary& WithModelCardArn(ModelCardArnT&& value) { SetModelCardArn(std::forward<ModelCardArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline ModelCardStatus GetModelCardStatus() const { return m_modelCardStatus; }
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }
    inline void SetModelCardStatus(ModelCardStatus value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }
    inline ModelCardSummary& WithModelCardStatus(ModelCardStatus value) { SetModelCardStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the model card was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ModelCardSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the model card was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ModelCardSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    Aws::String m_modelCardArn;
    bool m_modelCardArnHasBeenSet = false;

    ModelCardStatus m_modelCardStatus{ModelCardStatus::NOT_SET};
    bool m_modelCardStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
