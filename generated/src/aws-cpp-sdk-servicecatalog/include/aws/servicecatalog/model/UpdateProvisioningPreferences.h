﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/StackSetOperationType.h>
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
   * <p>The user-defined preferences that will be applied when updating a provisioned
   * product. Not all preferences are applicable to all provisioned product
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisioningPreferences">AWS
   * API Reference</a></p>
   */
  class UpdateProvisioningPreferences
  {
  public:
    AWS_SERVICECATALOG_API UpdateProvisioningPreferences() = default;
    AWS_SERVICECATALOG_API UpdateProvisioningPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API UpdateProvisioningPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more Amazon Web Services accounts that will have access to the
     * provisioned product.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>The Amazon Web Services accounts specified
     * should be within the list of accounts in the <code>STACKSET</code> constraint.
     * To get the list of accounts in the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetAccounts() const { return m_stackSetAccounts; }
    inline bool StackSetAccountsHasBeenSet() const { return m_stackSetAccountsHasBeenSet; }
    template<typename StackSetAccountsT = Aws::Vector<Aws::String>>
    void SetStackSetAccounts(StackSetAccountsT&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts = std::forward<StackSetAccountsT>(value); }
    template<typename StackSetAccountsT = Aws::Vector<Aws::String>>
    UpdateProvisioningPreferences& WithStackSetAccounts(StackSetAccountsT&& value) { SetStackSetAccounts(std::forward<StackSetAccountsT>(value)); return *this;}
    template<typename StackSetAccountsT = Aws::String>
    UpdateProvisioningPreferences& AddStackSetAccounts(StackSetAccountsT&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.emplace_back(std::forward<StackSetAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more Amazon Web Services Regions where the provisioned product will be
     * available.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The specified Regions should be within the list of Regions
     * from the <code>STACKSET</code> constraint. To get the list of Regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all Regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetRegions() const { return m_stackSetRegions; }
    inline bool StackSetRegionsHasBeenSet() const { return m_stackSetRegionsHasBeenSet; }
    template<typename StackSetRegionsT = Aws::Vector<Aws::String>>
    void SetStackSetRegions(StackSetRegionsT&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions = std::forward<StackSetRegionsT>(value); }
    template<typename StackSetRegionsT = Aws::Vector<Aws::String>>
    UpdateProvisioningPreferences& WithStackSetRegions(StackSetRegionsT&& value) { SetStackSetRegions(std::forward<StackSetRegionsT>(value)); return *this;}
    template<typename StackSetRegionsT = Aws::String>
    UpdateProvisioningPreferences& AddStackSetRegions(StackSetRegionsT&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.emplace_back(std::forward<StackSetRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of accounts, per Region, for which this operation can fail before
     * Service Catalog stops the operation in that Region. If the operation is stopped
     * in a Region, Service Catalog doesn't attempt the operation in any subsequent
     * Regions.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p> <p>The
     * default value is <code>0</code> if no value is specified.</p>
     */
    inline int GetStackSetFailureToleranceCount() const { return m_stackSetFailureToleranceCount; }
    inline bool StackSetFailureToleranceCountHasBeenSet() const { return m_stackSetFailureToleranceCountHasBeenSet; }
    inline void SetStackSetFailureToleranceCount(int value) { m_stackSetFailureToleranceCountHasBeenSet = true; m_stackSetFailureToleranceCount = value; }
    inline UpdateProvisioningPreferences& WithStackSetFailureToleranceCount(int value) { SetStackSetFailureToleranceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of accounts, per Region, for which this stack operation can
     * fail before Service Catalog stops the operation in that Region. If the operation
     * is stopped in a Region, Service Catalog doesn't attempt the operation in any
     * subsequent Regions.</p> <p>When calculating the number of accounts based on the
     * specified percentage, Service Catalog rounds down to the next whole number.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p>
     */
    inline int GetStackSetFailureTolerancePercentage() const { return m_stackSetFailureTolerancePercentage; }
    inline bool StackSetFailureTolerancePercentageHasBeenSet() const { return m_stackSetFailureTolerancePercentageHasBeenSet; }
    inline void SetStackSetFailureTolerancePercentage(int value) { m_stackSetFailureTolerancePercentageHasBeenSet = true; m_stackSetFailureTolerancePercentage = value; }
    inline UpdateProvisioningPreferences& WithStackSetFailureTolerancePercentage(int value) { SetStackSetFailureTolerancePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>StackSetFailureToleranceCount</code>.
     * <code>StackSetMaxConcurrentCount</code> is at most one more than the
     * <code>StackSetFailureToleranceCount</code>.</p> <p>Note that this setting lets
     * you specify the maximum for operations. For large deployments, under certain
     * circumstances the actual number of accounts acted upon concurrently may be lower
     * due to service throttling.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline int GetStackSetMaxConcurrencyCount() const { return m_stackSetMaxConcurrencyCount; }
    inline bool StackSetMaxConcurrencyCountHasBeenSet() const { return m_stackSetMaxConcurrencyCountHasBeenSet; }
    inline void SetStackSetMaxConcurrencyCount(int value) { m_stackSetMaxConcurrencyCountHasBeenSet = true; m_stackSetMaxConcurrencyCount = value; }
    inline UpdateProvisioningPreferences& WithStackSetMaxConcurrencyCount(int value) { SetStackSetMaxConcurrencyCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, Service Catalog rounds down to the next whole number. This is true
     * except in cases where rounding down would result is zero. In this case, Service
     * Catalog sets the number as <code>1</code> instead.</p> <p>Note that this setting
     * lets you specify the maximum for operations. For large deployments, under
     * certain circumstances the actual number of accounts acted upon concurrently may
     * be lower due to service throttling.</p> <p>Applicable only to a
     * <code>CFN_STACKSET</code> provisioned product type.</p> <p>Conditional: You must
     * specify either <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline int GetStackSetMaxConcurrencyPercentage() const { return m_stackSetMaxConcurrencyPercentage; }
    inline bool StackSetMaxConcurrencyPercentageHasBeenSet() const { return m_stackSetMaxConcurrencyPercentageHasBeenSet; }
    inline void SetStackSetMaxConcurrencyPercentage(int value) { m_stackSetMaxConcurrencyPercentageHasBeenSet = true; m_stackSetMaxConcurrencyPercentage = value; }
    inline UpdateProvisioningPreferences& WithStackSetMaxConcurrencyPercentage(int value) { SetStackSetMaxConcurrencyPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines what action Service Catalog performs to a stack set or a stack
     * instance represented by the provisioned product. The default value is
     * <code>UPDATE</code> if nothing is specified.</p> <p>Applicable only to a
     * <code>CFN_STACKSET</code> provisioned product type.</p> <dl> <dt>CREATE</dt>
     * <dd> <p>Creates a new stack instance in the stack set represented by the
     * provisioned product. In this case, only new stack instances are created based on
     * accounts and Regions; if new ProductId or ProvisioningArtifactID are passed,
     * they will be ignored.</p> </dd> <dt>UPDATE</dt> <dd> <p>Updates the stack set
     * represented by the provisioned product and also its stack instances.</p> </dd>
     * <dt>DELETE</dt> <dd> <p>Deletes a stack instance in the stack set represented by
     * the provisioned product.</p> </dd> </dl>
     */
    inline StackSetOperationType GetStackSetOperationType() const { return m_stackSetOperationType; }
    inline bool StackSetOperationTypeHasBeenSet() const { return m_stackSetOperationTypeHasBeenSet; }
    inline void SetStackSetOperationType(StackSetOperationType value) { m_stackSetOperationTypeHasBeenSet = true; m_stackSetOperationType = value; }
    inline UpdateProvisioningPreferences& WithStackSetOperationType(StackSetOperationType value) { SetStackSetOperationType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_stackSetAccounts;
    bool m_stackSetAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_stackSetRegions;
    bool m_stackSetRegionsHasBeenSet = false;

    int m_stackSetFailureToleranceCount{0};
    bool m_stackSetFailureToleranceCountHasBeenSet = false;

    int m_stackSetFailureTolerancePercentage{0};
    bool m_stackSetFailureTolerancePercentageHasBeenSet = false;

    int m_stackSetMaxConcurrencyCount{0};
    bool m_stackSetMaxConcurrencyCountHasBeenSet = false;

    int m_stackSetMaxConcurrencyPercentage{0};
    bool m_stackSetMaxConcurrencyPercentageHasBeenSet = false;

    StackSetOperationType m_stackSetOperationType{StackSetOperationType::NOT_SET};
    bool m_stackSetOperationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
