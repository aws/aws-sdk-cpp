/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class CreateProvisionedProductPlanResult
  {
  public:
    AWS_SERVICECATALOG_API CreateProvisionedProductPlanResult() = default;
    AWS_SERVICECATALOG_API CreateProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CreateProvisionedProductPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the plan.</p>
     */
    inline const Aws::String& GetPlanName() const { return m_planName; }
    template<typename PlanNameT = Aws::String>
    void SetPlanName(PlanNameT&& value) { m_planNameHasBeenSet = true; m_planName = std::forward<PlanNameT>(value); }
    template<typename PlanNameT = Aws::String>
    CreateProvisionedProductPlanResult& WithPlanName(PlanNameT&& value) { SetPlanName(std::forward<PlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan identifier.</p>
     */
    inline const Aws::String& GetPlanId() const { return m_planId; }
    template<typename PlanIdT = Aws::String>
    void SetPlanId(PlanIdT&& value) { m_planIdHasBeenSet = true; m_planId = std::forward<PlanIdT>(value); }
    template<typename PlanIdT = Aws::String>
    CreateProvisionedProductPlanResult& WithPlanId(PlanIdT&& value) { SetPlanId(std::forward<PlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const { return m_provisionProductId; }
    template<typename ProvisionProductIdT = Aws::String>
    void SetProvisionProductId(ProvisionProductIdT&& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = std::forward<ProvisionProductIdT>(value); }
    template<typename ProvisionProductIdT = Aws::String>
    CreateProvisionedProductPlanResult& WithProvisionProductId(ProvisionProductIdT&& value) { SetProvisionProductId(std::forward<ProvisionProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const { return m_provisionedProductName; }
    template<typename ProvisionedProductNameT = Aws::String>
    void SetProvisionedProductName(ProvisionedProductNameT&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::forward<ProvisionedProductNameT>(value); }
    template<typename ProvisionedProductNameT = Aws::String>
    CreateProvisionedProductPlanResult& WithProvisionedProductName(ProvisionedProductNameT&& value) { SetProvisionedProductName(std::forward<ProvisionedProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    CreateProvisionedProductPlanResult& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProvisionedProductPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_planName;
    bool m_planNameHasBeenSet = false;

    Aws::String m_planId;
    bool m_planIdHasBeenSet = false;

    Aws::String m_provisionProductId;
    bool m_provisionProductIdHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
