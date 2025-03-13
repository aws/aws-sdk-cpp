/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanType.h>
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
   * <p>Summary information about a plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionedProductPlanSummary">AWS
   * API Reference</a></p>
   */
  class ProvisionedProductPlanSummary
  {
  public:
    AWS_SERVICECATALOG_API ProvisionedProductPlanSummary() = default;
    AWS_SERVICECATALOG_API ProvisionedProductPlanSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisionedProductPlanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the plan.</p>
     */
    inline const Aws::String& GetPlanName() const { return m_planName; }
    inline bool PlanNameHasBeenSet() const { return m_planNameHasBeenSet; }
    template<typename PlanNameT = Aws::String>
    void SetPlanName(PlanNameT&& value) { m_planNameHasBeenSet = true; m_planName = std::forward<PlanNameT>(value); }
    template<typename PlanNameT = Aws::String>
    ProvisionedProductPlanSummary& WithPlanName(PlanNameT&& value) { SetPlanName(std::forward<PlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan identifier.</p>
     */
    inline const Aws::String& GetPlanId() const { return m_planId; }
    inline bool PlanIdHasBeenSet() const { return m_planIdHasBeenSet; }
    template<typename PlanIdT = Aws::String>
    void SetPlanId(PlanIdT&& value) { m_planIdHasBeenSet = true; m_planId = std::forward<PlanIdT>(value); }
    template<typename PlanIdT = Aws::String>
    ProvisionedProductPlanSummary& WithPlanId(PlanIdT&& value) { SetPlanId(std::forward<PlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const { return m_provisionProductId; }
    inline bool ProvisionProductIdHasBeenSet() const { return m_provisionProductIdHasBeenSet; }
    template<typename ProvisionProductIdT = Aws::String>
    void SetProvisionProductId(ProvisionProductIdT&& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = std::forward<ProvisionProductIdT>(value); }
    template<typename ProvisionProductIdT = Aws::String>
    ProvisionedProductPlanSummary& WithProvisionProductId(ProvisionProductIdT&& value) { SetProvisionProductId(std::forward<ProvisionProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionProductName() const { return m_provisionProductName; }
    inline bool ProvisionProductNameHasBeenSet() const { return m_provisionProductNameHasBeenSet; }
    template<typename ProvisionProductNameT = Aws::String>
    void SetProvisionProductName(ProvisionProductNameT&& value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName = std::forward<ProvisionProductNameT>(value); }
    template<typename ProvisionProductNameT = Aws::String>
    ProvisionedProductPlanSummary& WithProvisionProductName(ProvisionProductNameT&& value) { SetProvisionProductName(std::forward<ProvisionProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline ProvisionedProductPlanType GetPlanType() const { return m_planType; }
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }
    inline void SetPlanType(ProvisionedProductPlanType value) { m_planTypeHasBeenSet = true; m_planType = value; }
    inline ProvisionedProductPlanSummary& WithPlanType(ProvisionedProductPlanType value) { SetPlanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    ProvisionedProductPlanSummary& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_planName;
    bool m_planNameHasBeenSet = false;

    Aws::String m_planId;
    bool m_planIdHasBeenSet = false;

    Aws::String m_provisionProductId;
    bool m_provisionProductIdHasBeenSet = false;

    Aws::String m_provisionProductName;
    bool m_provisionProductNameHasBeenSet = false;

    ProvisionedProductPlanType m_planType{ProvisionedProductPlanType::NOT_SET};
    bool m_planTypeHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
