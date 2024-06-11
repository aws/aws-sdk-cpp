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
    AWS_SECURITYHUB_API IpOrganizationDetails();
    AWS_SECURITYHUB_API IpOrganizationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API IpOrganizationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the internet provider</p>
     */
    inline int GetAsn() const{ return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }
    inline IpOrganizationDetails& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the organization that registered the ASN.</p>
     */
    inline const Aws::String& GetAsnOrg() const{ return m_asnOrg; }
    inline bool AsnOrgHasBeenSet() const { return m_asnOrgHasBeenSet; }
    inline void SetAsnOrg(const Aws::String& value) { m_asnOrgHasBeenSet = true; m_asnOrg = value; }
    inline void SetAsnOrg(Aws::String&& value) { m_asnOrgHasBeenSet = true; m_asnOrg = std::move(value); }
    inline void SetAsnOrg(const char* value) { m_asnOrgHasBeenSet = true; m_asnOrg.assign(value); }
    inline IpOrganizationDetails& WithAsnOrg(const Aws::String& value) { SetAsnOrg(value); return *this;}
    inline IpOrganizationDetails& WithAsnOrg(Aws::String&& value) { SetAsnOrg(std::move(value)); return *this;}
    inline IpOrganizationDetails& WithAsnOrg(const char* value) { SetAsnOrg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISP information for the internet provider.</p>
     */
    inline const Aws::String& GetIsp() const{ return m_isp; }
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }
    inline void SetIsp(const Aws::String& value) { m_ispHasBeenSet = true; m_isp = value; }
    inline void SetIsp(Aws::String&& value) { m_ispHasBeenSet = true; m_isp = std::move(value); }
    inline void SetIsp(const char* value) { m_ispHasBeenSet = true; m_isp.assign(value); }
    inline IpOrganizationDetails& WithIsp(const Aws::String& value) { SetIsp(value); return *this;}
    inline IpOrganizationDetails& WithIsp(Aws::String&& value) { SetIsp(std::move(value)); return *this;}
    inline IpOrganizationDetails& WithIsp(const char* value) { SetIsp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the internet provider.</p>
     */
    inline const Aws::String& GetOrg() const{ return m_org; }
    inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }
    inline void SetOrg(const Aws::String& value) { m_orgHasBeenSet = true; m_org = value; }
    inline void SetOrg(Aws::String&& value) { m_orgHasBeenSet = true; m_org = std::move(value); }
    inline void SetOrg(const char* value) { m_orgHasBeenSet = true; m_org.assign(value); }
    inline IpOrganizationDetails& WithOrg(const Aws::String& value) { SetOrg(value); return *this;}
    inline IpOrganizationDetails& WithOrg(Aws::String&& value) { SetOrg(std::move(value)); return *this;}
    inline IpOrganizationDetails& WithOrg(const char* value) { SetOrg(value); return *this;}
    ///@}
  private:

    int m_asn;
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
