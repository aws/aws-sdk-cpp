/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Active Directory domain membership record associated
   * with the DB instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbDomainMembership">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbDomainMembership
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbDomainMembership() = default;
    AWS_SECURITYHUB_API AwsRdsDbDomainMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbDomainMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    AwsRdsDbDomainMembership& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRdsDbDomainMembership& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline const Aws::String& GetFqdn() const { return m_fqdn; }
    inline bool FqdnHasBeenSet() const { return m_fqdnHasBeenSet; }
    template<typename FqdnT = Aws::String>
    void SetFqdn(FqdnT&& value) { m_fqdnHasBeenSet = true; m_fqdn = std::forward<FqdnT>(value); }
    template<typename FqdnT = Aws::String>
    AwsRdsDbDomainMembership& WithFqdn(FqdnT&& value) { SetFqdn(std::forward<FqdnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline const Aws::String& GetIamRoleName() const { return m_iamRoleName; }
    inline bool IamRoleNameHasBeenSet() const { return m_iamRoleNameHasBeenSet; }
    template<typename IamRoleNameT = Aws::String>
    void SetIamRoleName(IamRoleNameT&& value) { m_iamRoleNameHasBeenSet = true; m_iamRoleName = std::forward<IamRoleNameT>(value); }
    template<typename IamRoleNameT = Aws::String>
    AwsRdsDbDomainMembership& WithIamRoleName(IamRoleNameT&& value) { SetIamRoleName(std::forward<IamRoleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_fqdn;
    bool m_fqdnHasBeenSet = false;

    Aws::String m_iamRoleName;
    bool m_iamRoleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
