﻿/**
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
  class RequestServiceQuotaIncreaseRequest : public ServiceQuotasRequest
  {
  public:
    AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestServiceQuotaIncrease"; }

    AWS_SERVICEQUOTAS_API Aws::String SerializePayload() const override;

    AWS_SERVICEQUOTAS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline RequestServiceQuotaIncreaseRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline RequestServiceQuotaIncreaseRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline RequestServiceQuotaIncreaseRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

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
    inline RequestServiceQuotaIncreaseRequest& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}
    inline RequestServiceQuotaIncreaseRequest& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}
    inline RequestServiceQuotaIncreaseRequest& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the new, increased value for the quota.</p>
     */
    inline double GetDesiredValue() const{ return m_desiredValue; }
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }
    inline RequestServiceQuotaIncreaseRequest& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline const Aws::String& GetContextId() const{ return m_contextId; }
    inline bool ContextIdHasBeenSet() const { return m_contextIdHasBeenSet; }
    inline void SetContextId(const Aws::String& value) { m_contextIdHasBeenSet = true; m_contextId = value; }
    inline void SetContextId(Aws::String&& value) { m_contextIdHasBeenSet = true; m_contextId = std::move(value); }
    inline void SetContextId(const char* value) { m_contextIdHasBeenSet = true; m_contextId.assign(value); }
    inline RequestServiceQuotaIncreaseRequest& WithContextId(const Aws::String& value) { SetContextId(value); return *this;}
    inline RequestServiceQuotaIncreaseRequest& WithContextId(Aws::String&& value) { SetContextId(std::move(value)); return *this;}
    inline RequestServiceQuotaIncreaseRequest& WithContextId(const char* value) { SetContextId(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    double m_desiredValue;
    bool m_desiredValueHasBeenSet = false;

    Aws::String m_contextId;
    bool m_contextIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
