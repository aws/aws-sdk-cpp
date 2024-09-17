/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialComponentSource.h>
#include <aws/sagemaker/model/TrialComponentStatus.h>
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
   * <p>A summary of the properties of a trial component. To get all the properties,
   * call the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeTrialComponent.html">DescribeTrialComponent</a>
   * API and provide the <code>TrialComponentName</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentSummary">AWS
   * API Reference</a></p>
   */
  class TrialComponentSummary
  {
  public:
    AWS_SAGEMAKER_API TrialComponentSummary();
    AWS_SAGEMAKER_API TrialComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TrialComponentSummary& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}
    inline TrialComponentSummary& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}
    inline TrialComponentSummary& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}
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
    inline TrialComponentSummary& WithTrialComponentArn(const Aws::String& value) { SetTrialComponentArn(value); return *this;}
    inline TrialComponentSummary& WithTrialComponentArn(Aws::String&& value) { SetTrialComponentArn(std::move(value)); return *this;}
    inline TrialComponentSummary& WithTrialComponentArn(const char* value) { SetTrialComponentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline TrialComponentSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline TrialComponentSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline TrialComponentSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    
    inline const TrialComponentSource& GetTrialComponentSource() const{ return m_trialComponentSource; }
    inline bool TrialComponentSourceHasBeenSet() const { return m_trialComponentSourceHasBeenSet; }
    inline void SetTrialComponentSource(const TrialComponentSource& value) { m_trialComponentSourceHasBeenSet = true; m_trialComponentSource = value; }
    inline void SetTrialComponentSource(TrialComponentSource&& value) { m_trialComponentSourceHasBeenSet = true; m_trialComponentSource = std::move(value); }
    inline TrialComponentSummary& WithTrialComponentSource(const TrialComponentSource& value) { SetTrialComponentSource(value); return *this;}
    inline TrialComponentSummary& WithTrialComponentSource(TrialComponentSource&& value) { SetTrialComponentSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the component. States include:</p> <ul> <li> <p>InProgress</p>
     * </li> <li> <p>Completed</p> </li> <li> <p>Failed</p> </li> </ul>
     */
    inline const TrialComponentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TrialComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TrialComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TrialComponentSummary& WithStatus(const TrialComponentStatus& value) { SetStatus(value); return *this;}
    inline TrialComponentSummary& WithStatus(TrialComponentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline TrialComponentSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline TrialComponentSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline TrialComponentSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline TrialComponentSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TrialComponentSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TrialComponentSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the trial component.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline TrialComponentSummary& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline TrialComponentSummary& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline TrialComponentSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline TrialComponentSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who last modified the component.</p>
     */
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline TrialComponentSummary& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline TrialComponentSummary& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::String m_trialComponentArn;
    bool m_trialComponentArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    TrialComponentSource m_trialComponentSource;
    bool m_trialComponentSourceHasBeenSet = false;

    TrialComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
