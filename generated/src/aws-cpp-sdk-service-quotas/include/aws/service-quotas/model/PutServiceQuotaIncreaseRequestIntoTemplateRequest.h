/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

  /**
   */
  class PutServiceQuotaIncreaseRequestIntoTemplateRequest : public ServiceQuotasRequest
  {
  public:
    AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutServiceQuotaIncreaseRequestIntoTemplate"; }

    AWS_SERVICEQUOTAS_API Aws::String SerializePayload() const override;

    AWS_SERVICEQUOTAS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services Region to which the template applies.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the new, increased value for the quota.</p>
     */
    inline double GetDesiredValue() const{ return m_desiredValue; }
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}
    ///@}
  private:

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    double m_desiredValue;
    bool m_desiredValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
