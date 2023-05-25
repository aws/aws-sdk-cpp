/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/DkimSigningAttributes.h>
#include <aws/sesv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to begin the verification process for an email identity (an email
   * address or domain).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentityRequest">AWS
   * API Reference</a></p>
   */
  class CreateEmailIdentityRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateEmailIdentityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEmailIdentity"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The email address or domain to verify.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }

    /**
     * <p>The email address or domain to verify.</p>
     */
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }

    /**
     * <p>The email address or domain to verify.</p>
     */
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }

    /**
     * <p>The email address or domain to verify.</p>
     */
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }

    /**
     * <p>The email address or domain to verify.</p>
     */
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }

    /**
     * <p>The email address or domain to verify.</p>
     */
    inline CreateEmailIdentityRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}

    /**
     * <p>The email address or domain to verify.</p>
     */
    inline CreateEmailIdentityRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}

    /**
     * <p>The email address or domain to verify.</p>
     */
    inline CreateEmailIdentityRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}


    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline CreateEmailIdentityRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline CreateEmailIdentityRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline CreateEmailIdentityRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline CreateEmailIdentityRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>If your request includes this object, Amazon SES configures the identity to
     * use Bring Your Own DKIM (BYODKIM) for DKIM authentication purposes, or,
     * configures the key length to be used for <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> <p>You can only specify this object if the email identity is a
     * domain, as opposed to an address.</p>
     */
    inline const DkimSigningAttributes& GetDkimSigningAttributes() const{ return m_dkimSigningAttributes; }

    /**
     * <p>If your request includes this object, Amazon SES configures the identity to
     * use Bring Your Own DKIM (BYODKIM) for DKIM authentication purposes, or,
     * configures the key length to be used for <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> <p>You can only specify this object if the email identity is a
     * domain, as opposed to an address.</p>
     */
    inline bool DkimSigningAttributesHasBeenSet() const { return m_dkimSigningAttributesHasBeenSet; }

    /**
     * <p>If your request includes this object, Amazon SES configures the identity to
     * use Bring Your Own DKIM (BYODKIM) for DKIM authentication purposes, or,
     * configures the key length to be used for <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> <p>You can only specify this object if the email identity is a
     * domain, as opposed to an address.</p>
     */
    inline void SetDkimSigningAttributes(const DkimSigningAttributes& value) { m_dkimSigningAttributesHasBeenSet = true; m_dkimSigningAttributes = value; }

    /**
     * <p>If your request includes this object, Amazon SES configures the identity to
     * use Bring Your Own DKIM (BYODKIM) for DKIM authentication purposes, or,
     * configures the key length to be used for <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> <p>You can only specify this object if the email identity is a
     * domain, as opposed to an address.</p>
     */
    inline void SetDkimSigningAttributes(DkimSigningAttributes&& value) { m_dkimSigningAttributesHasBeenSet = true; m_dkimSigningAttributes = std::move(value); }

    /**
     * <p>If your request includes this object, Amazon SES configures the identity to
     * use Bring Your Own DKIM (BYODKIM) for DKIM authentication purposes, or,
     * configures the key length to be used for <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> <p>You can only specify this object if the email identity is a
     * domain, as opposed to an address.</p>
     */
    inline CreateEmailIdentityRequest& WithDkimSigningAttributes(const DkimSigningAttributes& value) { SetDkimSigningAttributes(value); return *this;}

    /**
     * <p>If your request includes this object, Amazon SES configures the identity to
     * use Bring Your Own DKIM (BYODKIM) for DKIM authentication purposes, or,
     * configures the key length to be used for <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> <p>You can only specify this object if the email identity is a
     * domain, as opposed to an address.</p>
     */
    inline CreateEmailIdentityRequest& WithDkimSigningAttributes(DkimSigningAttributes&& value) { SetDkimSigningAttributes(std::move(value)); return *this;}


    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline CreateEmailIdentityRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline CreateEmailIdentityRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline CreateEmailIdentityRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}

  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DkimSigningAttributes m_dkimSigningAttributes;
    bool m_dkimSigningAttributesHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
