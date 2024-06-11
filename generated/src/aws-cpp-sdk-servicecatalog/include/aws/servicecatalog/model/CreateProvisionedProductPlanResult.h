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
    AWS_SERVICECATALOG_API CreateProvisionedProductPlanResult();
    AWS_SERVICECATALOG_API CreateProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CreateProvisionedProductPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the plan.</p>
     */
    inline const Aws::String& GetPlanName() const{ return m_planName; }
    inline void SetPlanName(const Aws::String& value) { m_planName = value; }
    inline void SetPlanName(Aws::String&& value) { m_planName = std::move(value); }
    inline void SetPlanName(const char* value) { m_planName.assign(value); }
    inline CreateProvisionedProductPlanResult& WithPlanName(const Aws::String& value) { SetPlanName(value); return *this;}
    inline CreateProvisionedProductPlanResult& WithPlanName(Aws::String&& value) { SetPlanName(std::move(value)); return *this;}
    inline CreateProvisionedProductPlanResult& WithPlanName(const char* value) { SetPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan identifier.</p>
     */
    inline const Aws::String& GetPlanId() const{ return m_planId; }
    inline void SetPlanId(const Aws::String& value) { m_planId = value; }
    inline void SetPlanId(Aws::String&& value) { m_planId = std::move(value); }
    inline void SetPlanId(const char* value) { m_planId.assign(value); }
    inline CreateProvisionedProductPlanResult& WithPlanId(const Aws::String& value) { SetPlanId(value); return *this;}
    inline CreateProvisionedProductPlanResult& WithPlanId(Aws::String&& value) { SetPlanId(std::move(value)); return *this;}
    inline CreateProvisionedProductPlanResult& WithPlanId(const char* value) { SetPlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const{ return m_provisionProductId; }
    inline void SetProvisionProductId(const Aws::String& value) { m_provisionProductId = value; }
    inline void SetProvisionProductId(Aws::String&& value) { m_provisionProductId = std::move(value); }
    inline void SetProvisionProductId(const char* value) { m_provisionProductId.assign(value); }
    inline CreateProvisionedProductPlanResult& WithProvisionProductId(const Aws::String& value) { SetProvisionProductId(value); return *this;}
    inline CreateProvisionedProductPlanResult& WithProvisionProductId(Aws::String&& value) { SetProvisionProductId(std::move(value)); return *this;}
    inline CreateProvisionedProductPlanResult& WithProvisionProductId(const char* value) { SetProvisionProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductName = value; }
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductName = std::move(value); }
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductName.assign(value); }
    inline CreateProvisionedProductPlanResult& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}
    inline CreateProvisionedProductPlanResult& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}
    inline CreateProvisionedProductPlanResult& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactId = value; }
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactId = std::move(value); }
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactId.assign(value); }
    inline CreateProvisionedProductPlanResult& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline CreateProvisionedProductPlanResult& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline CreateProvisionedProductPlanResult& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateProvisionedProductPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateProvisionedProductPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateProvisionedProductPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_planName;

    Aws::String m_planId;

    Aws::String m_provisionProductId;

    Aws::String m_provisionedProductName;

    Aws::String m_provisioningArtifactId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
