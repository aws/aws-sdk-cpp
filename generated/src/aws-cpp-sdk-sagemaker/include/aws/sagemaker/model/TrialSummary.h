/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialSource.h>
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
   * <p>A summary of the properties of a trial. To get the complete set of
   * properties, call the <a>DescribeTrial</a> API and provide the
   * <code>TrialName</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialSummary">AWS
   * API Reference</a></p>
   */
  class TrialSummary
  {
  public:
    AWS_SAGEMAKER_API TrialSummary();
    AWS_SAGEMAKER_API TrialSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline const Aws::String& GetTrialArn() const{ return m_trialArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline bool TrialArnHasBeenSet() const { return m_trialArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(const Aws::String& value) { m_trialArnHasBeenSet = true; m_trialArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(Aws::String&& value) { m_trialArnHasBeenSet = true; m_trialArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(const char* value) { m_trialArnHasBeenSet = true; m_trialArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline TrialSummary& WithTrialArn(const Aws::String& value) { SetTrialArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline TrialSummary& WithTrialArn(Aws::String&& value) { SetTrialArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline TrialSummary& WithTrialArn(const char* value) { SetTrialArn(value); return *this;}


    /**
     * <p>The name of the trial.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }

    /**
     * <p>The name of the trial.</p>
     */
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }

    /**
     * <p>The name of the trial.</p>
     */
    inline TrialSummary& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}

    /**
     * <p>The name of the trial.</p>
     */
    inline TrialSummary& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial.</p>
     */
    inline TrialSummary& WithTrialName(const char* value) { SetTrialName(value); return *this;}


    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline TrialSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline TrialSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline TrialSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    
    inline const TrialSource& GetTrialSource() const{ return m_trialSource; }

    
    inline bool TrialSourceHasBeenSet() const { return m_trialSourceHasBeenSet; }

    
    inline void SetTrialSource(const TrialSource& value) { m_trialSourceHasBeenSet = true; m_trialSource = value; }

    
    inline void SetTrialSource(TrialSource&& value) { m_trialSourceHasBeenSet = true; m_trialSource = std::move(value); }

    
    inline TrialSummary& WithTrialSource(const TrialSource& value) { SetTrialSource(value); return *this;}

    
    inline TrialSummary& WithTrialSource(TrialSource&& value) { SetTrialSource(std::move(value)); return *this;}


    /**
     * <p>When the trial was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the trial was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the trial was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the trial was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the trial was created.</p>
     */
    inline TrialSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the trial was created.</p>
     */
    inline TrialSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the trial was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the trial was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the trial was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the trial was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the trial was last modified.</p>
     */
    inline TrialSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the trial was last modified.</p>
     */
    inline TrialSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_trialArn;
    bool m_trialArnHasBeenSet = false;

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    TrialSource m_trialSource;
    bool m_trialSourceHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
