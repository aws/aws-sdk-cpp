/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class GetTemplateGroupAccessControlEntryRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API GetTemplateGroupAccessControlEntryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplateGroupAccessControlEntry"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline const Aws::String& GetGroupSecurityIdentifier() const{ return m_groupSecurityIdentifier; }
    inline bool GroupSecurityIdentifierHasBeenSet() const { return m_groupSecurityIdentifierHasBeenSet; }
    inline void SetGroupSecurityIdentifier(const Aws::String& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = value; }
    inline void SetGroupSecurityIdentifier(Aws::String&& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = std::move(value); }
    inline void SetGroupSecurityIdentifier(const char* value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier.assign(value); }
    inline GetTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(const Aws::String& value) { SetGroupSecurityIdentifier(value); return *this;}
    inline GetTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(Aws::String&& value) { SetGroupSecurityIdentifier(std::move(value)); return *this;}
    inline GetTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(const char* value) { SetGroupSecurityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline GetTemplateGroupAccessControlEntryRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline GetTemplateGroupAccessControlEntryRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline GetTemplateGroupAccessControlEntryRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}
  private:

    Aws::String m_groupSecurityIdentifier;
    bool m_groupSecurityIdentifierHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
