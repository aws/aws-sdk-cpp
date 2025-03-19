/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The user-defined preferences that will be applied during product
   * provisioning, unless overridden by <code>ProvisioningPreferences</code> or
   * <code>UpdateProvisioningPreferences</code>.</p> <p>For more information on
   * maximum concurrent accounts and failure tolerance, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
   * set operation options</a> in the <i>CloudFormation User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactPreferences">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactPreferences
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactPreferences() = default;
    AWS_SERVICECATALOG_API ProvisioningArtifactPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more Amazon Web Services accounts where stack instances are deployed
     * from the stack set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetAccounts() const { return m_stackSetAccounts; }
    inline bool StackSetAccountsHasBeenSet() const { return m_stackSetAccountsHasBeenSet; }
    template<typename StackSetAccountsT = Aws::Vector<Aws::String>>
    void SetStackSetAccounts(StackSetAccountsT&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts = std::forward<StackSetAccountsT>(value); }
    template<typename StackSetAccountsT = Aws::Vector<Aws::String>>
    ProvisioningArtifactPreferences& WithStackSetAccounts(StackSetAccountsT&& value) { SetStackSetAccounts(std::forward<StackSetAccountsT>(value)); return *this;}
    template<typename StackSetAccountsT = Aws::String>
    ProvisioningArtifactPreferences& AddStackSetAccounts(StackSetAccountsT&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.emplace_back(std::forward<StackSetAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more Amazon Web Services Regions where stack instances are deployed
     * from the stack set. These Regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetRegions() const { return m_stackSetRegions; }
    inline bool StackSetRegionsHasBeenSet() const { return m_stackSetRegionsHasBeenSet; }
    template<typename StackSetRegionsT = Aws::Vector<Aws::String>>
    void SetStackSetRegions(StackSetRegionsT&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions = std::forward<StackSetRegionsT>(value); }
    template<typename StackSetRegionsT = Aws::Vector<Aws::String>>
    ProvisioningArtifactPreferences& WithStackSetRegions(StackSetRegionsT&& value) { SetStackSetRegions(std::forward<StackSetRegionsT>(value)); return *this;}
    template<typename StackSetRegionsT = Aws::String>
    ProvisioningArtifactPreferences& AddStackSetRegions(StackSetRegionsT&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.emplace_back(std::forward<StackSetRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_stackSetAccounts;
    bool m_stackSetAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_stackSetRegions;
    bool m_stackSetRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
