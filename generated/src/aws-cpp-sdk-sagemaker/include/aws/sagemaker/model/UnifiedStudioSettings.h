/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FeatureStatus.h>
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
   * <p>The settings that apply to an Amazon SageMaker AI domain when you use it in
   * Amazon SageMaker Unified Studio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UnifiedStudioSettings">AWS
   * API Reference</a></p>
   */
  class UnifiedStudioSettings
  {
  public:
    AWS_SAGEMAKER_API UnifiedStudioSettings() = default;
    AWS_SAGEMAKER_API UnifiedStudioSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UnifiedStudioSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets whether you can access the domain in Amazon SageMaker Studio:</p> <dl>
     * <dt>ENABLED</dt> <dd> <p>You can access the domain in Amazon SageMaker Studio.
     * If you migrate the domain to Amazon SageMaker Unified Studio, you can access it
     * in both studio interfaces.</p> </dd> <dt>DISABLED</dt> <dd> <p>You can't access
     * the domain in Amazon SageMaker Studio. If you migrate the domain to Amazon
     * SageMaker Unified Studio, you can access it only in that studio interface.</p>
     * </dd> </dl> <p>To migrate a domain to Amazon SageMaker Unified Studio, you
     * specify the UnifiedStudioSettings data type when you use the UpdateDomain
     * action.</p>
     */
    inline FeatureStatus GetStudioWebPortalAccess() const { return m_studioWebPortalAccess; }
    inline bool StudioWebPortalAccessHasBeenSet() const { return m_studioWebPortalAccessHasBeenSet; }
    inline void SetStudioWebPortalAccess(FeatureStatus value) { m_studioWebPortalAccessHasBeenSet = true; m_studioWebPortalAccess = value; }
    inline UnifiedStudioSettings& WithStudioWebPortalAccess(FeatureStatus value) { SetStudioWebPortalAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that has the Amazon SageMaker
     * Unified Studio domain. The default value, if you don't specify an ID, is the ID
     * of the account that has the Amazon SageMaker AI domain.</p>
     */
    inline const Aws::String& GetDomainAccountId() const { return m_domainAccountId; }
    inline bool DomainAccountIdHasBeenSet() const { return m_domainAccountIdHasBeenSet; }
    template<typename DomainAccountIdT = Aws::String>
    void SetDomainAccountId(DomainAccountIdT&& value) { m_domainAccountIdHasBeenSet = true; m_domainAccountId = std::forward<DomainAccountIdT>(value); }
    template<typename DomainAccountIdT = Aws::String>
    UnifiedStudioSettings& WithDomainAccountId(DomainAccountIdT&& value) { SetDomainAccountId(std::forward<DomainAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the domain is located in Amazon
     * SageMaker Unified Studio. The default value, if you don't specify a Region, is
     * the Region where the Amazon SageMaker AI domain is located.</p>
     */
    inline const Aws::String& GetDomainRegion() const { return m_domainRegion; }
    inline bool DomainRegionHasBeenSet() const { return m_domainRegionHasBeenSet; }
    template<typename DomainRegionT = Aws::String>
    void SetDomainRegion(DomainRegionT&& value) { m_domainRegionHasBeenSet = true; m_domainRegion = std::forward<DomainRegionT>(value); }
    template<typename DomainRegionT = Aws::String>
    UnifiedStudioSettings& WithDomainRegion(DomainRegionT&& value) { SetDomainRegion(std::forward<DomainRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon SageMaker Unified Studio domain associated with this
     * domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    UnifiedStudioSettings& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon SageMaker Unified Studio project that corresponds to the
     * domain.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    UnifiedStudioSettings& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment that Amazon SageMaker Unified Studio associates
     * with the domain.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    UnifiedStudioSettings& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where Amazon S3 stores temporary execution data and other
     * artifacts for the project that corresponds to the domain.</p>
     */
    inline const Aws::String& GetProjectS3Path() const { return m_projectS3Path; }
    inline bool ProjectS3PathHasBeenSet() const { return m_projectS3PathHasBeenSet; }
    template<typename ProjectS3PathT = Aws::String>
    void SetProjectS3Path(ProjectS3PathT&& value) { m_projectS3PathHasBeenSet = true; m_projectS3Path = std::forward<ProjectS3PathT>(value); }
    template<typename ProjectS3PathT = Aws::String>
    UnifiedStudioSettings& WithProjectS3Path(ProjectS3PathT&& value) { SetProjectS3Path(std::forward<ProjectS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon DataZone application managed by Amazon SageMaker
     * Unified Studio in the Amazon Web Services IAM Identity Center.</p>
     */
    inline const Aws::String& GetSingleSignOnApplicationArn() const { return m_singleSignOnApplicationArn; }
    inline bool SingleSignOnApplicationArnHasBeenSet() const { return m_singleSignOnApplicationArnHasBeenSet; }
    template<typename SingleSignOnApplicationArnT = Aws::String>
    void SetSingleSignOnApplicationArn(SingleSignOnApplicationArnT&& value) { m_singleSignOnApplicationArnHasBeenSet = true; m_singleSignOnApplicationArn = std::forward<SingleSignOnApplicationArnT>(value); }
    template<typename SingleSignOnApplicationArnT = Aws::String>
    UnifiedStudioSettings& WithSingleSignOnApplicationArn(SingleSignOnApplicationArnT&& value) { SetSingleSignOnApplicationArn(std::forward<SingleSignOnApplicationArnT>(value)); return *this;}
    ///@}
  private:

    FeatureStatus m_studioWebPortalAccess{FeatureStatus::NOT_SET};
    bool m_studioWebPortalAccessHasBeenSet = false;

    Aws::String m_domainAccountId;
    bool m_domainAccountIdHasBeenSet = false;

    Aws::String m_domainRegion;
    bool m_domainRegionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_projectS3Path;
    bool m_projectS3PathHasBeenSet = false;

    Aws::String m_singleSignOnApplicationArn;
    bool m_singleSignOnApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
