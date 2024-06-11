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
   * <p>A collection of settings that update the current configuration for the
   * <code>RStudioServerPro</code> Domain-level app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RStudioServerProDomainSettingsForUpdate">AWS
   * API Reference</a></p>
   */
  class RStudioServerProDomainSettingsForUpdate
  {
  public:
    AWS_SAGEMAKER_API RStudioServerProDomainSettingsForUpdate();
    AWS_SAGEMAKER_API RStudioServerProDomainSettingsForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RStudioServerProDomainSettingsForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline const Aws::String& GetDomainExecutionRoleArn() const{ return m_domainExecutionRoleArn; }
    inline bool DomainExecutionRoleArnHasBeenSet() const { return m_domainExecutionRoleArnHasBeenSet; }
    inline void SetDomainExecutionRoleArn(const Aws::String& value) { m_domainExecutionRoleArnHasBeenSet = true; m_domainExecutionRoleArn = value; }
    inline void SetDomainExecutionRoleArn(Aws::String&& value) { m_domainExecutionRoleArnHasBeenSet = true; m_domainExecutionRoleArn = std::move(value); }
    inline void SetDomainExecutionRoleArn(const char* value) { m_domainExecutionRoleArnHasBeenSet = true; m_domainExecutionRoleArn.assign(value); }
    inline RStudioServerProDomainSettingsForUpdate& WithDomainExecutionRoleArn(const Aws::String& value) { SetDomainExecutionRoleArn(value); return *this;}
    inline RStudioServerProDomainSettingsForUpdate& WithDomainExecutionRoleArn(Aws::String&& value) { SetDomainExecutionRoleArn(std::move(value)); return *this;}
    inline RStudioServerProDomainSettingsForUpdate& WithDomainExecutionRoleArn(const char* value) { SetDomainExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }
    inline RStudioServerProDomainSettingsForUpdate& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}
    inline RStudioServerProDomainSettingsForUpdate& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL pointing to an RStudio Connect server.</p>
     */
    inline const Aws::String& GetRStudioConnectUrl() const{ return m_rStudioConnectUrl; }
    inline bool RStudioConnectUrlHasBeenSet() const { return m_rStudioConnectUrlHasBeenSet; }
    inline void SetRStudioConnectUrl(const Aws::String& value) { m_rStudioConnectUrlHasBeenSet = true; m_rStudioConnectUrl = value; }
    inline void SetRStudioConnectUrl(Aws::String&& value) { m_rStudioConnectUrlHasBeenSet = true; m_rStudioConnectUrl = std::move(value); }
    inline void SetRStudioConnectUrl(const char* value) { m_rStudioConnectUrlHasBeenSet = true; m_rStudioConnectUrl.assign(value); }
    inline RStudioServerProDomainSettingsForUpdate& WithRStudioConnectUrl(const Aws::String& value) { SetRStudioConnectUrl(value); return *this;}
    inline RStudioServerProDomainSettingsForUpdate& WithRStudioConnectUrl(Aws::String&& value) { SetRStudioConnectUrl(std::move(value)); return *this;}
    inline RStudioServerProDomainSettingsForUpdate& WithRStudioConnectUrl(const char* value) { SetRStudioConnectUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL pointing to an RStudio Package Manager server.</p>
     */
    inline const Aws::String& GetRStudioPackageManagerUrl() const{ return m_rStudioPackageManagerUrl; }
    inline bool RStudioPackageManagerUrlHasBeenSet() const { return m_rStudioPackageManagerUrlHasBeenSet; }
    inline void SetRStudioPackageManagerUrl(const Aws::String& value) { m_rStudioPackageManagerUrlHasBeenSet = true; m_rStudioPackageManagerUrl = value; }
    inline void SetRStudioPackageManagerUrl(Aws::String&& value) { m_rStudioPackageManagerUrlHasBeenSet = true; m_rStudioPackageManagerUrl = std::move(value); }
    inline void SetRStudioPackageManagerUrl(const char* value) { m_rStudioPackageManagerUrlHasBeenSet = true; m_rStudioPackageManagerUrl.assign(value); }
    inline RStudioServerProDomainSettingsForUpdate& WithRStudioPackageManagerUrl(const Aws::String& value) { SetRStudioPackageManagerUrl(value); return *this;}
    inline RStudioServerProDomainSettingsForUpdate& WithRStudioPackageManagerUrl(Aws::String&& value) { SetRStudioPackageManagerUrl(std::move(value)); return *this;}
    inline RStudioServerProDomainSettingsForUpdate& WithRStudioPackageManagerUrl(const char* value) { SetRStudioPackageManagerUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_domainExecutionRoleArn;
    bool m_domainExecutionRoleArnHasBeenSet = false;

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::String m_rStudioConnectUrl;
    bool m_rStudioConnectUrlHasBeenSet = false;

    Aws::String m_rStudioPackageManagerUrl;
    bool m_rStudioPackageManagerUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
