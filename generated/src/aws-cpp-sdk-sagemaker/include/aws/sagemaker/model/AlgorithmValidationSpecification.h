/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AlgorithmValidationProfile.h>
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
   * <p>Specifies configurations for one or more training jobs that SageMaker runs to
   * test the algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmValidationSpecification">AWS
   * API Reference</a></p>
   */
  class AlgorithmValidationSpecification
  {
  public:
    AWS_SAGEMAKER_API AlgorithmValidationSpecification();
    AWS_SAGEMAKER_API AlgorithmValidationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AlgorithmValidationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM roles that SageMaker uses to run the training jobs.</p>
     */
    inline const Aws::String& GetValidationRole() const{ return m_validationRole; }

    /**
     * <p>The IAM roles that SageMaker uses to run the training jobs.</p>
     */
    inline bool ValidationRoleHasBeenSet() const { return m_validationRoleHasBeenSet; }

    /**
     * <p>The IAM roles that SageMaker uses to run the training jobs.</p>
     */
    inline void SetValidationRole(const Aws::String& value) { m_validationRoleHasBeenSet = true; m_validationRole = value; }

    /**
     * <p>The IAM roles that SageMaker uses to run the training jobs.</p>
     */
    inline void SetValidationRole(Aws::String&& value) { m_validationRoleHasBeenSet = true; m_validationRole = std::move(value); }

    /**
     * <p>The IAM roles that SageMaker uses to run the training jobs.</p>
     */
    inline void SetValidationRole(const char* value) { m_validationRoleHasBeenSet = true; m_validationRole.assign(value); }

    /**
     * <p>The IAM roles that SageMaker uses to run the training jobs.</p>
     */
    inline AlgorithmValidationSpecification& WithValidationRole(const Aws::String& value) { SetValidationRole(value); return *this;}

    /**
     * <p>The IAM roles that SageMaker uses to run the training jobs.</p>
     */
    inline AlgorithmValidationSpecification& WithValidationRole(Aws::String&& value) { SetValidationRole(std::move(value)); return *this;}

    /**
     * <p>The IAM roles that SageMaker uses to run the training jobs.</p>
     */
    inline AlgorithmValidationSpecification& WithValidationRole(const char* value) { SetValidationRole(value); return *this;}


    /**
     * <p>An array of <code>AlgorithmValidationProfile</code> objects, each of which
     * specifies a training job and batch transform job that SageMaker runs to validate
     * your algorithm.</p>
     */
    inline const Aws::Vector<AlgorithmValidationProfile>& GetValidationProfiles() const{ return m_validationProfiles; }

    /**
     * <p>An array of <code>AlgorithmValidationProfile</code> objects, each of which
     * specifies a training job and batch transform job that SageMaker runs to validate
     * your algorithm.</p>
     */
    inline bool ValidationProfilesHasBeenSet() const { return m_validationProfilesHasBeenSet; }

    /**
     * <p>An array of <code>AlgorithmValidationProfile</code> objects, each of which
     * specifies a training job and batch transform job that SageMaker runs to validate
     * your algorithm.</p>
     */
    inline void SetValidationProfiles(const Aws::Vector<AlgorithmValidationProfile>& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles = value; }

    /**
     * <p>An array of <code>AlgorithmValidationProfile</code> objects, each of which
     * specifies a training job and batch transform job that SageMaker runs to validate
     * your algorithm.</p>
     */
    inline void SetValidationProfiles(Aws::Vector<AlgorithmValidationProfile>&& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles = std::move(value); }

    /**
     * <p>An array of <code>AlgorithmValidationProfile</code> objects, each of which
     * specifies a training job and batch transform job that SageMaker runs to validate
     * your algorithm.</p>
     */
    inline AlgorithmValidationSpecification& WithValidationProfiles(const Aws::Vector<AlgorithmValidationProfile>& value) { SetValidationProfiles(value); return *this;}

    /**
     * <p>An array of <code>AlgorithmValidationProfile</code> objects, each of which
     * specifies a training job and batch transform job that SageMaker runs to validate
     * your algorithm.</p>
     */
    inline AlgorithmValidationSpecification& WithValidationProfiles(Aws::Vector<AlgorithmValidationProfile>&& value) { SetValidationProfiles(std::move(value)); return *this;}

    /**
     * <p>An array of <code>AlgorithmValidationProfile</code> objects, each of which
     * specifies a training job and batch transform job that SageMaker runs to validate
     * your algorithm.</p>
     */
    inline AlgorithmValidationSpecification& AddValidationProfiles(const AlgorithmValidationProfile& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles.push_back(value); return *this; }

    /**
     * <p>An array of <code>AlgorithmValidationProfile</code> objects, each of which
     * specifies a training job and batch transform job that SageMaker runs to validate
     * your algorithm.</p>
     */
    inline AlgorithmValidationSpecification& AddValidationProfiles(AlgorithmValidationProfile&& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_validationRole;
    bool m_validationRoleHasBeenSet = false;

    Aws::Vector<AlgorithmValidationProfile> m_validationProfiles;
    bool m_validationProfilesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
