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
   * <p>Provides information about an internet provider.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/IpOrganizationDetails">AWS
   * API Reference</a></p>
   */
  class IpOrganizationDetails
  {
  public:
    AWS_SECURITYHUB_API IpOrganizationDetails() = default;
    AWS_SECURITYHUB_API IpOrganizationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API IpOrganizationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the internet provider</p>
     */
    inline int GetAsn() const { return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }
    inline IpOrganizationDetails& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the organization that registered the ASN.</p>
     */
    inline const Aws::String& GetAsnOrg() const { return m_asnOrg; }
    inline bool AsnOrgHasBeenSet() const { return m_asnOrgHasBeenSet; }
    template<typename AsnOrgT = Aws::String>
    void SetAsnOrg(AsnOrgT&& value) { m_asnOrgHasBeenSet = true; m_asnOrg = std::forward<AsnOrgT>(value); }
    template<typename AsnOrgT = Aws::String>
    IpOrganizationDetails& WithAsnOrg(AsnOrgT&& value) { SetAsnOrg(std::forward<AsnOrgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISP information for the internet provider.</p>
     */
    inline const Aws::String& GetIsp() const { return m_isp; }
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }
    template<typename IspT = Aws::String>
    void SetIsp(IspT&& value) { m_ispHasBeenSet = true; m_isp = std::forward<IspT>(value); }
    template<typename IspT = Aws::String>
    IpOrganizationDetails& WithIsp(IspT&& value) { SetIsp(std::forward<IspT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the internet provider.</p>
     */
    inline const Aws::String& GetOrg() const { return m_org; }
    inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }
    template<typename OrgT = Aws::String>
    void SetOrg(OrgT&& value) { m_orgHasBeenSet = true; m_org = std::forward<OrgT>(value); }
    template<typename OrgT = Aws::String>
    IpOrganizationDetails& WithOrg(OrgT&& value) { SetOrg(std::forward<OrgT>(value)); return *this;}
    ///@}
  private:

    int m_asn{0};
    bool m_asnHasBeenSet = false;

    Aws::String m_asnOrg;
    bool m_asnOrgHasBeenSet = false;

    Aws::String m_isp;
    bool m_ispHasBeenSet = false;

    Aws::String m_org;
    bool m_orgHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
