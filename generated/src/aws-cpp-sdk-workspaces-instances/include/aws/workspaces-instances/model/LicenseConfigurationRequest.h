/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Specifies license configuration for WorkSpace Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/LicenseConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class LicenseConfigurationRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API LicenseConfigurationRequest() = default;
    AWS_WORKSPACESINSTANCES_API LicenseConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API LicenseConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the license configuration for the WorkSpace Instance.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const { return m_licenseConfigurationArn; }
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }
    template<typename LicenseConfigurationArnT = Aws::String>
    void SetLicenseConfigurationArn(LicenseConfigurationArnT&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::forward<LicenseConfigurationArnT>(value); }
    template<typename LicenseConfigurationArnT = Aws::String>
    LicenseConfigurationRequest& WithLicenseConfigurationArn(LicenseConfigurationArnT&& value) { SetLicenseConfigurationArn(std::forward<LicenseConfigurationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
