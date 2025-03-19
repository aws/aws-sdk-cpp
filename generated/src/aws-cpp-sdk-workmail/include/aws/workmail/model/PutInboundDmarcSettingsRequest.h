/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class PutInboundDmarcSettingsRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API PutInboundDmarcSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInboundDmarcSettings"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the organization that you are applying the DMARC policy to.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    PutInboundDmarcSettingsRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enforces or suspends a policy after it's applied.</p>
     */
    inline bool GetEnforced() const { return m_enforced; }
    inline bool EnforcedHasBeenSet() const { return m_enforcedHasBeenSet; }
    inline void SetEnforced(bool value) { m_enforcedHasBeenSet = true; m_enforced = value; }
    inline PutInboundDmarcSettingsRequest& WithEnforced(bool value) { SetEnforced(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    bool m_enforced{false};
    bool m_enforcedHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
