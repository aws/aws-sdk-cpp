/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialComponentSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
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
   * <p>A short summary of a trial component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentSimpleSummary">AWS
   * API Reference</a></p>
   */
  class TrialComponentSimpleSummary
  {
  public:
    AWS_SAGEMAKER_API TrialComponentSimpleSummary();
    AWS_SAGEMAKER_API TrialComponentSimpleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentSimpleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = value; }
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::move(value); }
    inline void SetTrialComponentName(const char* value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName.assign(value); }
    inline TrialComponentSimpleSummary& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}
    inline TrialComponentSimpleSummary& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}
    inline TrialComponentSimpleSummary& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentArn() const{ return m_trialComponentArn; }
    inline bool TrialComponentArnHasBeenSet() const { return m_trialComponentArnHasBeenSet; }
    inline void SetTrialComponentArn(const Aws::String& value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn = value; }
    inline void SetTrialComponentArn(Aws::String&& value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn = std::move(value); }
    inline void SetTrialComponentArn(const char* value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn.assign(value); }
    inline TrialComponentSimpleSummary& WithTrialComponentArn(const Aws::String& value) { SetTrialComponentArn(value); return *this;}
    inline TrialComponentSimpleSummary& WithTrialComponentArn(Aws::String&& value) { SetTrialComponentArn(std::move(value)); return *this;}
    inline TrialComponentSimpleSummary& WithTrialComponentArn(const char* value) { SetTrialComponentArn(value); return *this;}
    ///@}

    ///@{
    
    inline const TrialComponentSource& GetTrialComponentSource() const{ return m_trialComponentSource; }
    inline bool TrialComponentSourceHasBeenSet() const { return m_trialComponentSourceHasBeenSet; }
    inline void SetTrialComponentSource(const TrialComponentSource& value) { m_trialComponentSourceHasBeenSet = true; m_trialComponentSource = value; }
    inline void SetTrialComponentSource(TrialComponentSource&& value) { m_trialComponentSourceHasBeenSet = true; m_trialComponentSource = std::move(value); }
    inline TrialComponentSimpleSummary& WithTrialComponentSource(const TrialComponentSource& value) { SetTrialComponentSource(value); return *this;}
    inline TrialComponentSimpleSummary& WithTrialComponentSource(TrialComponentSource&& value) { SetTrialComponentSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TrialComponentSimpleSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TrialComponentSimpleSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline TrialComponentSimpleSummary& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline TrialComponentSimpleSummary& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::String m_trialComponentArn;
    bool m_trialComponentArnHasBeenSet = false;

    TrialComponentSource m_trialComponentSource;
    bool m_trialComponentSourceHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
