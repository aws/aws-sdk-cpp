/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DkimSigningAttributesOrigin.h>
#include <aws/sesv2/model/DkimSigningAttributes.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to change the DKIM attributes for an email identity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimSigningAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityDkimSigningAttributesRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutEmailIdentityDkimSigningAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityDkimSigningAttributes"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The email identity.</p>
     */
    inline const Aws::String& GetEmailIdentity() const { return m_emailIdentity; }
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
    template<typename EmailIdentityT = Aws::String>
    void SetEmailIdentity(EmailIdentityT&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::forward<EmailIdentityT>(value); }
    template<typename EmailIdentityT = Aws::String>
    PutEmailIdentityDkimSigningAttributesRequest& WithEmailIdentity(EmailIdentityT&& value) { SetEmailIdentity(std::forward<EmailIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use to configure DKIM for the identity. There are the following
     * possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Configure DKIM for the
     * identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Configure DKIM for the
     * identity by using Bring Your Own DKIM (BYODKIM).</p> </li> </ul>
     */
    inline DkimSigningAttributesOrigin GetSigningAttributesOrigin() const { return m_signingAttributesOrigin; }
    inline bool SigningAttributesOriginHasBeenSet() const { return m_signingAttributesOriginHasBeenSet; }
    inline void SetSigningAttributesOrigin(DkimSigningAttributesOrigin value) { m_signingAttributesOriginHasBeenSet = true; m_signingAttributesOrigin = value; }
    inline PutEmailIdentityDkimSigningAttributesRequest& WithSigningAttributesOrigin(DkimSigningAttributesOrigin value) { SetSigningAttributesOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the private key and selector that
     * you want to use to configure DKIM for the identity for Bring Your Own DKIM
     * (BYODKIM) for the identity, or, configures the key length to be used for <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p>
     */
    inline const DkimSigningAttributes& GetSigningAttributes() const { return m_signingAttributes; }
    inline bool SigningAttributesHasBeenSet() const { return m_signingAttributesHasBeenSet; }
    template<typename SigningAttributesT = DkimSigningAttributes>
    void SetSigningAttributes(SigningAttributesT&& value) { m_signingAttributesHasBeenSet = true; m_signingAttributes = std::forward<SigningAttributesT>(value); }
    template<typename SigningAttributesT = DkimSigningAttributes>
    PutEmailIdentityDkimSigningAttributesRequest& WithSigningAttributes(SigningAttributesT&& value) { SetSigningAttributes(std::forward<SigningAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    DkimSigningAttributesOrigin m_signingAttributesOrigin{DkimSigningAttributesOrigin::NOT_SET};
    bool m_signingAttributesOriginHasBeenSet = false;

    DkimSigningAttributes m_signingAttributes;
    bool m_signingAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
