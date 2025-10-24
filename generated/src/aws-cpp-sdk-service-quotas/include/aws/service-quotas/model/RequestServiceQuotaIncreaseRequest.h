﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ServiceQuotas {
namespace Model {

/**
 */
class RequestServiceQuotaIncreaseRequest : public ServiceQuotasRequest {
 public:
  AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseRequest() = default;

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
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  RequestServiceQuotaIncreaseRequest& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the quota identifier. To find the quota code for a specific quota,
   * use the <a>ListServiceQuotas</a> operation, and look for the
   * <code>QuotaCode</code> response in the output for the quota you want.</p>
   */
  inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
  inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
  template <typename QuotaCodeT = Aws::String>
  void SetQuotaCode(QuotaCodeT&& value) {
    m_quotaCodeHasBeenSet = true;
    m_quotaCode = std::forward<QuotaCodeT>(value);
  }
  template <typename QuotaCodeT = Aws::String>
  RequestServiceQuotaIncreaseRequest& WithQuotaCode(QuotaCodeT&& value) {
    SetQuotaCode(std::forward<QuotaCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the new, increased value for the quota.</p>
   */
  inline double GetDesiredValue() const { return m_desiredValue; }
  inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }
  inline void SetDesiredValue(double value) {
    m_desiredValueHasBeenSet = true;
    m_desiredValue = value;
  }
  inline RequestServiceQuotaIncreaseRequest& WithDesiredValue(double value) {
    SetDesiredValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the resource with an Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetContextId() const { return m_contextId; }
  inline bool ContextIdHasBeenSet() const { return m_contextIdHasBeenSet; }
  template <typename ContextIdT = Aws::String>
  void SetContextId(ContextIdT&& value) {
    m_contextIdHasBeenSet = true;
    m_contextId = std::forward<ContextIdT>(value);
  }
  template <typename ContextIdT = Aws::String>
  RequestServiceQuotaIncreaseRequest& WithContextId(ContextIdT&& value) {
    SetContextId(std::forward<ContextIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies if an Amazon Web Services Support case can be opened for the quota
   * increase request. This parameter is optional. </p> <p>By default, this flag is
   * set to <code>True</code> and Amazon Web Services may create a support case for
   * some quota increase requests. You can set this flag to <code>False</code> if you
   * do not want a support case created when you request a quota increase. If you set
   * the flag to <code>False</code>, Amazon Web Services does not open a support case
   * and updates the request status to <code>Not approved</code>. </p>
   */
  inline bool GetSupportCaseAllowed() const { return m_supportCaseAllowed; }
  inline bool SupportCaseAllowedHasBeenSet() const { return m_supportCaseAllowedHasBeenSet; }
  inline void SetSupportCaseAllowed(bool value) {
    m_supportCaseAllowedHasBeenSet = true;
    m_supportCaseAllowed = value;
  }
  inline RequestServiceQuotaIncreaseRequest& WithSupportCaseAllowed(bool value) {
    SetSupportCaseAllowed(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceCode;
  bool m_serviceCodeHasBeenSet = false;

  Aws::String m_quotaCode;
  bool m_quotaCodeHasBeenSet = false;

  double m_desiredValue{0.0};
  bool m_desiredValueHasBeenSet = false;

  Aws::String m_contextId;
  bool m_contextIdHasBeenSet = false;

  bool m_supportCaseAllowed{false};
  bool m_supportCaseAllowedHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
