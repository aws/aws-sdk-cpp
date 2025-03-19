/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>An Active Directory Domain membership record associated with a DB
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DomainMembership">AWS
   * API Reference</a></p>
   */
  class DomainMembership
  {
  public:
    AWS_NEPTUNE_API DomainMembership() = default;
    AWS_NEPTUNE_API DomainMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DomainMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DomainMembership& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DomainMembership& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline const Aws::String& GetFQDN() const { return m_fQDN; }
    inline bool FQDNHasBeenSet() const { return m_fQDNHasBeenSet; }
    template<typename FQDNT = Aws::String>
    void SetFQDN(FQDNT&& value) { m_fQDNHasBeenSet = true; m_fQDN = std::forward<FQDNT>(value); }
    template<typename FQDNT = Aws::String>
    DomainMembership& WithFQDN(FQDNT&& value) { SetFQDN(std::forward<FQDNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline const Aws::String& GetIAMRoleName() const { return m_iAMRoleName; }
    inline bool IAMRoleNameHasBeenSet() const { return m_iAMRoleNameHasBeenSet; }
    template<typename IAMRoleNameT = Aws::String>
    void SetIAMRoleName(IAMRoleNameT&& value) { m_iAMRoleNameHasBeenSet = true; m_iAMRoleName = std::forward<IAMRoleNameT>(value); }
    template<typename IAMRoleNameT = Aws::String>
    DomainMembership& WithIAMRoleName(IAMRoleNameT&& value) { SetIAMRoleName(std::forward<IAMRoleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_fQDN;
    bool m_fQDNHasBeenSet = false;

    Aws::String m_iAMRoleName;
    bool m_iAMRoleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
