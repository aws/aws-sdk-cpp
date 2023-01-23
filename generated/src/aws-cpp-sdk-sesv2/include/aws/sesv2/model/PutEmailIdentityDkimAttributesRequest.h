/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to enable or disable DKIM signing of email that you send from an
   * email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityDkimAttributesRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutEmailIdentityDkimAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityDkimAttributes"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The email identity.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }

    /**
     * <p>The email identity.</p>
     */
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }

    /**
     * <p>The email identity.</p>
     */
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }

    /**
     * <p>The email identity.</p>
     */
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }

    /**
     * <p>The email identity.</p>
     */
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }

    /**
     * <p>The email identity.</p>
     */
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}

    /**
     * <p>The email identity.</p>
     */
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}

    /**
     * <p>The email identity.</p>
     */
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}


    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that are sent from the identity
     * are signed using DKIM. If you set this value to <code>false</code>, your
     * messages are sent without DKIM signing.</p>
     */
    inline bool GetSigningEnabled() const{ return m_signingEnabled; }

    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that are sent from the identity
     * are signed using DKIM. If you set this value to <code>false</code>, your
     * messages are sent without DKIM signing.</p>
     */
    inline bool SigningEnabledHasBeenSet() const { return m_signingEnabledHasBeenSet; }

    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that are sent from the identity
     * are signed using DKIM. If you set this value to <code>false</code>, your
     * messages are sent without DKIM signing.</p>
     */
    inline void SetSigningEnabled(bool value) { m_signingEnabledHasBeenSet = true; m_signingEnabled = value; }

    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that are sent from the identity
     * are signed using DKIM. If you set this value to <code>false</code>, your
     * messages are sent without DKIM signing.</p>
     */
    inline PutEmailIdentityDkimAttributesRequest& WithSigningEnabled(bool value) { SetSigningEnabled(value); return *this;}

  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    bool m_signingEnabled;
    bool m_signingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
