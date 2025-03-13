/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon Web Services service for which the
   * account is a delegated administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DelegatedService">AWS
   * API Reference</a></p>
   */
  class DelegatedService
  {
  public:
    AWS_ORGANIZATIONS_API DelegatedService() = default;
    AWS_ORGANIZATIONS_API DelegatedService(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API DelegatedService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetServicePrincipal() const { return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    template<typename ServicePrincipalT = Aws::String>
    void SetServicePrincipal(ServicePrincipalT&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::forward<ServicePrincipalT>(value); }
    template<typename ServicePrincipalT = Aws::String>
    DelegatedService& WithServicePrincipal(ServicePrincipalT&& value) { SetServicePrincipal(std::forward<ServicePrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the account became a delegated administrator for this service.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetDelegationEnabledDate() const { return m_delegationEnabledDate; }
    inline bool DelegationEnabledDateHasBeenSet() const { return m_delegationEnabledDateHasBeenSet; }
    template<typename DelegationEnabledDateT = Aws::Utils::DateTime>
    void SetDelegationEnabledDate(DelegationEnabledDateT&& value) { m_delegationEnabledDateHasBeenSet = true; m_delegationEnabledDate = std::forward<DelegationEnabledDateT>(value); }
    template<typename DelegationEnabledDateT = Aws::Utils::DateTime>
    DelegatedService& WithDelegationEnabledDate(DelegationEnabledDateT&& value) { SetDelegationEnabledDate(std::forward<DelegationEnabledDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;

    Aws::Utils::DateTime m_delegationEnabledDate{};
    bool m_delegationEnabledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
