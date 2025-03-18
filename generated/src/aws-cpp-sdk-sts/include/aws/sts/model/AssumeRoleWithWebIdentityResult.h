/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Credentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/model/AssumedRoleUser.h>
#include <aws/sts/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace STS
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>AssumeRoleWithWebIdentity</a>
   * request, including temporary Amazon Web Services credentials that can be used to
   * make Amazon Web Services requests. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/AssumeRoleWithWebIdentityResponse">AWS
   * API Reference</a></p>
   */
  class AssumeRoleWithWebIdentityResult
  {
  public:
    AWS_STS_API AssumeRoleWithWebIdentityResult() = default;
    AWS_STS_API AssumeRoleWithWebIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_STS_API AssumeRoleWithWebIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security token.</p>  <p>The size of the security token
     * that STS API operations return is not fixed. We strongly recommend that you make
     * no assumptions about the maximum size.</p> 
     */
    inline const Credentials& GetCredentials() const { return m_credentials; }
    template<typename CredentialsT = Credentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Credentials>
    AssumeRoleWithWebIdentityResult& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique user identifier that is returned by the identity provider. This
     * identifier is associated with the <code>WebIdentityToken</code> that was
     * submitted with the <code>AssumeRoleWithWebIdentity</code> call. The identifier
     * is typically unique to the user and the application that acquired the
     * <code>WebIdentityToken</code> (pairwise identifier). For OpenID Connect ID
     * tokens, this field contains the value returned by the identity provider as the
     * token's <code>sub</code> (Subject) claim. </p>
     */
    inline const Aws::String& GetSubjectFromWebIdentityToken() const { return m_subjectFromWebIdentityToken; }
    template<typename SubjectFromWebIdentityTokenT = Aws::String>
    void SetSubjectFromWebIdentityToken(SubjectFromWebIdentityTokenT&& value) { m_subjectFromWebIdentityTokenHasBeenSet = true; m_subjectFromWebIdentityToken = std::forward<SubjectFromWebIdentityTokenT>(value); }
    template<typename SubjectFromWebIdentityTokenT = Aws::String>
    AssumeRoleWithWebIdentityResult& WithSubjectFromWebIdentityToken(SubjectFromWebIdentityTokenT&& value) { SetSubjectFromWebIdentityToken(std::forward<SubjectFromWebIdentityTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) and the assumed role ID, which are identifiers
     * that you can use to refer to the resulting temporary security credentials. For
     * example, you can reference these credentials as a principal in a resource-based
     * policy by using the ARN or assumed role ID. The ARN and ID include the
     * <code>RoleSessionName</code> that you specified when you called
     * <code>AssumeRole</code>. </p>
     */
    inline const AssumedRoleUser& GetAssumedRoleUser() const { return m_assumedRoleUser; }
    template<typename AssumedRoleUserT = AssumedRoleUser>
    void SetAssumedRoleUser(AssumedRoleUserT&& value) { m_assumedRoleUserHasBeenSet = true; m_assumedRoleUser = std::forward<AssumedRoleUserT>(value); }
    template<typename AssumedRoleUserT = AssumedRoleUser>
    AssumeRoleWithWebIdentityResult& WithAssumedRoleUser(AssumedRoleUserT&& value) { SetAssumedRoleUser(std::forward<AssumedRoleUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A percentage value that indicates the packed size of the session policies and
     * session tags combined passed in the request. The request fails if the packed
     * size is greater than 100 percent, which means the policies and tags exceeded the
     * allowed space.</p>
     */
    inline int GetPackedPolicySize() const { return m_packedPolicySize; }
    inline void SetPackedPolicySize(int value) { m_packedPolicySizeHasBeenSet = true; m_packedPolicySize = value; }
    inline AssumeRoleWithWebIdentityResult& WithPackedPolicySize(int value) { SetPackedPolicySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The issuing authority of the web identity token presented. For OpenID
     * Connect ID tokens, this contains the value of the <code>iss</code> field. For
     * OAuth 2.0 access tokens, this contains the value of the <code>ProviderId</code>
     * parameter that was passed in the <code>AssumeRoleWithWebIdentity</code>
     * request.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    AssumeRoleWithWebIdentityResult& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intended audience (also known as client ID) of the web identity token.
     * This is traditionally the client identifier issued to the application that
     * requested the web identity token.</p>
     */
    inline const Aws::String& GetAudience() const { return m_audience; }
    template<typename AudienceT = Aws::String>
    void SetAudience(AudienceT&& value) { m_audienceHasBeenSet = true; m_audience = std::forward<AudienceT>(value); }
    template<typename AudienceT = Aws::String>
    AssumeRoleWithWebIdentityResult& WithAudience(AudienceT&& value) { SetAudience(std::forward<AudienceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the source identity that is returned in the JSON web token (JWT)
     * from the identity provider.</p> <p>You can require users to set a source
     * identity value when they assume a role. You do this by using the
     * <code>sts:SourceIdentity</code> condition key in a role trust policy. That way,
     * actions that are taken with the role are associated with that user. After the
     * source identity is set, the value cannot be changed. It is present in the
     * request for all actions that are taken by the role and persists across <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html#id_roles_terms-and-concepts">chained
     * role</a> sessions. You can configure your identity provider to use an attribute
     * associated with your users, like user name or email, as the source identity when
     * calling <code>AssumeRoleWithWebIdentity</code>. You do this by adding a claim to
     * the JSON web token. To learn more about OIDC tokens and claims, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-using-tokens-with-identity-providers.html">Using
     * Tokens with User Pools</a> in the <i>Amazon Cognito Developer Guide</i>. For
     * more information about using source identity, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">Monitor
     * and control actions taken with assumed roles</a> in the <i>IAM User
     * Guide</i>.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@-</p>
     */
    inline const Aws::String& GetSourceIdentity() const { return m_sourceIdentity; }
    template<typename SourceIdentityT = Aws::String>
    void SetSourceIdentity(SourceIdentityT&& value) { m_sourceIdentityHasBeenSet = true; m_sourceIdentity = std::forward<SourceIdentityT>(value); }
    template<typename SourceIdentityT = Aws::String>
    AssumeRoleWithWebIdentityResult& WithSourceIdentity(SourceIdentityT&& value) { SetSourceIdentity(std::forward<SourceIdentityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssumeRoleWithWebIdentityResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_subjectFromWebIdentityToken;
    bool m_subjectFromWebIdentityTokenHasBeenSet = false;

    AssumedRoleUser m_assumedRoleUser;
    bool m_assumedRoleUserHasBeenSet = false;

    int m_packedPolicySize{0};
    bool m_packedPolicySizeHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_audience;
    bool m_audienceHasBeenSet = false;

    Aws::String m_sourceIdentity;
    bool m_sourceIdentityHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
