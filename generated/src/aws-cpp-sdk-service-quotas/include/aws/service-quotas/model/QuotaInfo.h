/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>Information on your Service Quotas for <a
   * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/automatic-management.html">Service
   * Quotas Automatic Management</a>. Automatic Management monitors your Service
   * Quotas utilization and notifies you before you run out of your allocated
   * quotas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/QuotaInfo">AWS
   * API Reference</a></p>
   */
  class QuotaInfo
  {
  public:
    AWS_SERVICEQUOTAS_API QuotaInfo() = default;
    AWS_SERVICEQUOTAS_API QuotaInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API QuotaInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Service Quotas code for the Amazon Web Services service monitored with
     * Automatic Management.</p>
     */
    inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
    template<typename QuotaCodeT = Aws::String>
    void SetQuotaCode(QuotaCodeT&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::forward<QuotaCodeT>(value); }
    template<typename QuotaCodeT = Aws::String>
    QuotaInfo& WithQuotaCode(QuotaCodeT&& value) { SetQuotaCode(std::forward<QuotaCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Service Quotas name for the Amazon Web Services service monitored with
     * Automatic Management.</p>
     */
    inline const Aws::String& GetQuotaName() const { return m_quotaName; }
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }
    template<typename QuotaNameT = Aws::String>
    void SetQuotaName(QuotaNameT&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::forward<QuotaNameT>(value); }
    template<typename QuotaNameT = Aws::String>
    QuotaInfo& WithQuotaName(QuotaNameT&& value) { SetQuotaName(std::forward<QuotaNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
