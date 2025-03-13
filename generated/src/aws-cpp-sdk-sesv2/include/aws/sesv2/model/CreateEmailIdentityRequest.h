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
    AWS_SESV2_API CreateEmailIdentityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEmailIdentity"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The email address or domain to verify.</p>
     */
    inline const Aws::String& GetEmailIdentity() const { return m_emailIdentity; }
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
    template<typename EmailIdentityT = Aws::String>
    void SetEmailIdentity(EmailIdentityT&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::forward<EmailIdentityT>(value); }
    template<typename EmailIdentityT = Aws::String>
    CreateEmailIdentityRequest& WithEmailIdentity(EmailIdentityT&& value) { SetEmailIdentity(std::forward<EmailIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the email identity.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateEmailIdentityRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateEmailIdentityRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If your request includes this object, Amazon SES configures the identity to
     * use Bring Your Own DKIM (BYODKIM) for DKIM authentication purposes, or,
     * configures the key length to be used for <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> <p>You can only specify this object if the email identity is a
     * domain, as opposed to an address.</p>
     */
    inline const DkimSigningAttributes& GetDkimSigningAttributes() const { return m_dkimSigningAttributes; }
    inline bool DkimSigningAttributesHasBeenSet() const { return m_dkimSigningAttributesHasBeenSet; }
    template<typename DkimSigningAttributesT = DkimSigningAttributes>
    void SetDkimSigningAttributes(DkimSigningAttributesT&& value) { m_dkimSigningAttributesHasBeenSet = true; m_dkimSigningAttributes = std::forward<DkimSigningAttributesT>(value); }
    template<typename DkimSigningAttributesT = DkimSigningAttributes>
    CreateEmailIdentityRequest& WithDkimSigningAttributes(DkimSigningAttributesT&& value) { SetDkimSigningAttributes(std::forward<DkimSigningAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration set to use by default when sending from this identity. Note
     * that any configuration set defined in the email sending request takes
     * precedence. </p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    CreateEmailIdentityRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}
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
