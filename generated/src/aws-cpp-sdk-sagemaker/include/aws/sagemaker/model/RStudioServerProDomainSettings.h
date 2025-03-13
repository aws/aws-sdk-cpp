/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ResourceSpec.h>
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
   * <p>A collection of settings that configure the <code>RStudioServerPro</code>
   * Domain-level app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RStudioServerProDomainSettings">AWS
   * API Reference</a></p>
   */
  class RStudioServerProDomainSettings
  {
  public:
    AWS_SAGEMAKER_API RStudioServerProDomainSettings() = default;
    AWS_SAGEMAKER_API RStudioServerProDomainSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RStudioServerProDomainSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the execution role for the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline const Aws::String& GetDomainExecutionRoleArn() const { return m_domainExecutionRoleArn; }
    inline bool DomainExecutionRoleArnHasBeenSet() const { return m_domainExecutionRoleArnHasBeenSet; }
    template<typename DomainExecutionRoleArnT = Aws::String>
    void SetDomainExecutionRoleArn(DomainExecutionRoleArnT&& value) { m_domainExecutionRoleArnHasBeenSet = true; m_domainExecutionRoleArn = std::forward<DomainExecutionRoleArnT>(value); }
    template<typename DomainExecutionRoleArnT = Aws::String>
    RStudioServerProDomainSettings& WithDomainExecutionRoleArn(DomainExecutionRoleArnT&& value) { SetDomainExecutionRoleArn(std::forward<DomainExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL pointing to an RStudio Connect server.</p>
     */
    inline const Aws::String& GetRStudioConnectUrl() const { return m_rStudioConnectUrl; }
    inline bool RStudioConnectUrlHasBeenSet() const { return m_rStudioConnectUrlHasBeenSet; }
    template<typename RStudioConnectUrlT = Aws::String>
    void SetRStudioConnectUrl(RStudioConnectUrlT&& value) { m_rStudioConnectUrlHasBeenSet = true; m_rStudioConnectUrl = std::forward<RStudioConnectUrlT>(value); }
    template<typename RStudioConnectUrlT = Aws::String>
    RStudioServerProDomainSettings& WithRStudioConnectUrl(RStudioConnectUrlT&& value) { SetRStudioConnectUrl(std::forward<RStudioConnectUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL pointing to an RStudio Package Manager server.</p>
     */
    inline const Aws::String& GetRStudioPackageManagerUrl() const { return m_rStudioPackageManagerUrl; }
    inline bool RStudioPackageManagerUrlHasBeenSet() const { return m_rStudioPackageManagerUrlHasBeenSet; }
    template<typename RStudioPackageManagerUrlT = Aws::String>
    void SetRStudioPackageManagerUrl(RStudioPackageManagerUrlT&& value) { m_rStudioPackageManagerUrlHasBeenSet = true; m_rStudioPackageManagerUrl = std::forward<RStudioPackageManagerUrlT>(value); }
    template<typename RStudioPackageManagerUrlT = Aws::String>
    RStudioServerProDomainSettings& WithRStudioPackageManagerUrl(RStudioPackageManagerUrlT&& value) { SetRStudioPackageManagerUrl(std::forward<RStudioPackageManagerUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    RStudioServerProDomainSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainExecutionRoleArn;
    bool m_domainExecutionRoleArnHasBeenSet = false;

    Aws::String m_rStudioConnectUrl;
    bool m_rStudioConnectUrlHasBeenSet = false;

    Aws::String m_rStudioPackageManagerUrl;
    bool m_rStudioPackageManagerUrlHasBeenSet = false;

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
