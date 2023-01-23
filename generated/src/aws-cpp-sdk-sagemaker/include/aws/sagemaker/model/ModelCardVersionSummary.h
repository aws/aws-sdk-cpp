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
   * <p>A summary of a specific version of the model card.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelCardVersionSummary">AWS
   * API Reference</a></p>
   */
  class ModelCardVersionSummary
  {
  public:
    AWS_SAGEMAKER_API ModelCardVersionSummary();
    AWS_SAGEMAKER_API ModelCardVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCardVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model card.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }

    /**
     * <p>The name of the model card.</p>
     */
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }

    /**
     * <p>The name of the model card.</p>
     */
    inline void SetModelCardName(const Aws::String& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = value; }

    /**
     * <p>The name of the model card.</p>
     */
    inline void SetModelCardName(Aws::String&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::move(value); }

    /**
     * <p>The name of the model card.</p>
     */
    inline void SetModelCardName(const char* value) { m_modelCardNameHasBeenSet = true; m_modelCardName.assign(value); }

    /**
     * <p>The name of the model card.</p>
     */
    inline ModelCardVersionSummary& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}

    /**
     * <p>The name of the model card.</p>
     */
    inline ModelCardVersionSummary& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}

    /**
     * <p>The name of the model card.</p>
     */
    inline ModelCardVersionSummary& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const{ return m_modelCardArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline bool ModelCardArnHasBeenSet() const { return m_modelCardArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline void SetModelCardArn(const Aws::String& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline void SetModelCardArn(Aws::String&& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline void SetModelCardArn(const char* value) { m_modelCardArnHasBeenSet = true; m_modelCardArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline ModelCardVersionSummary& WithModelCardArn(const Aws::String& value) { SetModelCardArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline ModelCardVersionSummary& WithModelCardArn(Aws::String&& value) { SetModelCardArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline ModelCardVersionSummary& WithModelCardArn(const char* value) { SetModelCardArn(value); return *this;}


    /**
     * <p>The approval status of the model card version within your organization.
     * Different organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline const ModelCardStatus& GetModelCardStatus() const{ return m_modelCardStatus; }

    /**
     * <p>The approval status of the model card version within your organization.
     * Different organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }

    /**
     * <p>The approval status of the model card version within your organization.
     * Different organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline void SetModelCardStatus(const ModelCardStatus& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }

    /**
     * <p>The approval status of the model card version within your organization.
     * Different organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline void SetModelCardStatus(ModelCardStatus&& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = std::move(value); }

    /**
     * <p>The approval status of the model card version within your organization.
     * Different organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline ModelCardVersionSummary& WithModelCardStatus(const ModelCardStatus& value) { SetModelCardStatus(value); return *this;}

    /**
     * <p>The approval status of the model card version within your organization.
     * Different organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline ModelCardVersionSummary& WithModelCardStatus(ModelCardStatus&& value) { SetModelCardStatus(std::move(value)); return *this;}


    /**
     * <p>A version of the model card.</p>
     */
    inline int GetModelCardVersion() const{ return m_modelCardVersion; }

    /**
     * <p>A version of the model card.</p>
     */
    inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }

    /**
     * <p>A version of the model card.</p>
     */
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }

    /**
     * <p>A version of the model card.</p>
     */
    inline ModelCardVersionSummary& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}


    /**
     * <p>The date and time that the model card version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the model card version was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the model card version was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the model card version was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the model card version was created.</p>
     */
    inline ModelCardVersionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the model card version was created.</p>
     */
    inline ModelCardVersionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time date and time that the model card version was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time date and time that the model card version was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time date and time that the model card version was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time date and time that the model card version was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time date and time that the model card version was last modified.</p>
     */
    inline ModelCardVersionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time date and time that the model card version was last modified.</p>
     */
    inline ModelCardVersionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    Aws::String m_modelCardArn;
    bool m_modelCardArnHasBeenSet = false;

    ModelCardStatus m_modelCardStatus;
    bool m_modelCardStatusHasBeenSet = false;

    int m_modelCardVersion;
    bool m_modelCardVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
