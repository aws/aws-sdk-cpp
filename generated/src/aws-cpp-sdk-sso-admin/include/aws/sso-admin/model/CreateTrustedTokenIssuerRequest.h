/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/TrustedTokenIssuerType.h>
#include <aws/sso-admin/model/TrustedTokenIssuerConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-admin/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class CreateTrustedTokenIssuerRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API CreateTrustedTokenIssuerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrustedTokenIssuer"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the instance of IAM Identity Center to contain the new
     * trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    CreateTrustedTokenIssuerRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the new trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTrustedTokenIssuerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the new trusted token issuer.</p>
     */
    inline TrustedTokenIssuerType GetTrustedTokenIssuerType() const { return m_trustedTokenIssuerType; }
    inline bool TrustedTokenIssuerTypeHasBeenSet() const { return m_trustedTokenIssuerTypeHasBeenSet; }
    inline void SetTrustedTokenIssuerType(TrustedTokenIssuerType value) { m_trustedTokenIssuerTypeHasBeenSet = true; m_trustedTokenIssuerType = value; }
    inline CreateTrustedTokenIssuerRequest& WithTrustedTokenIssuerType(TrustedTokenIssuerType value) { SetTrustedTokenIssuerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies settings that apply to the new trusted token issuer configuration.
     * The settings that are available depend on what
     * <code>TrustedTokenIssuerType</code> you specify.</p>
     */
    inline const TrustedTokenIssuerConfiguration& GetTrustedTokenIssuerConfiguration() const { return m_trustedTokenIssuerConfiguration; }
    inline bool TrustedTokenIssuerConfigurationHasBeenSet() const { return m_trustedTokenIssuerConfigurationHasBeenSet; }
    template<typename TrustedTokenIssuerConfigurationT = TrustedTokenIssuerConfiguration>
    void SetTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfigurationT&& value) { m_trustedTokenIssuerConfigurationHasBeenSet = true; m_trustedTokenIssuerConfiguration = std::forward<TrustedTokenIssuerConfigurationT>(value); }
    template<typename TrustedTokenIssuerConfigurationT = TrustedTokenIssuerConfiguration>
    CreateTrustedTokenIssuerRequest& WithTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfigurationT&& value) { SetTrustedTokenIssuerConfiguration(std::forward<TrustedTokenIssuerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTrustedTokenIssuerRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies tags to be attached to the new trusted token issuer
     * configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTrustedTokenIssuerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTrustedTokenIssuerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TrustedTokenIssuerType m_trustedTokenIssuerType{TrustedTokenIssuerType::NOT_SET};
    bool m_trustedTokenIssuerTypeHasBeenSet = false;

    TrustedTokenIssuerConfiguration m_trustedTokenIssuerConfiguration;
    bool m_trustedTokenIssuerConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
