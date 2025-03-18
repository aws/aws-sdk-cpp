/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Credentials.h>
#include <aws/sts/model/AssumedRoleUser.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the response to a successful <a>AssumeRoleWithSAML</a> request,
   * including temporary Amazon Web Services credentials that can be used to make
   * Amazon Web Services requests. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/AssumeRoleWithSAMLResponse">AWS
   * API Reference</a></p>
   */
  class AssumeRoleWithSAMLResult
  {
  public:
    AWS_STS_API AssumeRoleWithSAMLResult() = default;
    AWS_STS_API AssumeRoleWithSAMLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_STS_API AssumeRoleWithSAMLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p>  <p>The size of the
     * security token that STS API operations return is not fixed. We strongly
     * recommend that you make no assumptions about the maximum size.</p> 
     */
    inline const Credentials& GetCredentials() const { return m_credentials; }
    template<typename CredentialsT = Credentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Credentials>
    AssumeRoleWithSAMLResult& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers for the temporary security credentials that the operation
     * returns.</p>
     */
    inline const AssumedRoleUser& GetAssumedRoleUser() const { return m_assumedRoleUser; }
    template<typename AssumedRoleUserT = AssumedRoleUser>
    void SetAssumedRoleUser(AssumedRoleUserT&& value) { m_assumedRoleUserHasBeenSet = true; m_assumedRoleUser = std::forward<AssumedRoleUserT>(value); }
    template<typename AssumedRoleUserT = AssumedRoleUser>
    AssumeRoleWithSAMLResult& WithAssumedRoleUser(AssumedRoleUserT&& value) { SetAssumedRoleUser(std::forward<AssumedRoleUserT>(value)); return *this;}
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
    inline AssumeRoleWithSAMLResult& WithPackedPolicySize(int value) { SetPackedPolicySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>NameID</code> element in the <code>Subject</code>
     * element of the SAML assertion.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    AssumeRoleWithSAMLResult& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the name ID, as defined by the <code>Format</code> attribute
     * in the <code>NameID</code> element of the SAML assertion. Typical examples of
     * the format are <code>transient</code> or <code>persistent</code>. </p> <p> If
     * the format includes the prefix
     * <code>urn:oasis:names:tc:SAML:2.0:nameid-format</code>, that prefix is removed.
     * For example, <code>urn:oasis:names:tc:SAML:2.0:nameid-format:transient</code> is
     * returned as <code>transient</code>. If the format includes any other prefix, the
     * format is returned with no modifications.</p>
     */
    inline const Aws::String& GetSubjectType() const { return m_subjectType; }
    template<typename SubjectTypeT = Aws::String>
    void SetSubjectType(SubjectTypeT&& value) { m_subjectTypeHasBeenSet = true; m_subjectType = std::forward<SubjectTypeT>(value); }
    template<typename SubjectTypeT = Aws::String>
    AssumeRoleWithSAMLResult& WithSubjectType(SubjectTypeT&& value) { SetSubjectType(std::forward<SubjectTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>Issuer</code> element of the SAML assertion.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    AssumeRoleWithSAMLResult& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the <code>Recipient</code> attribute of the
     * <code>SubjectConfirmationData</code> element of the SAML assertion. </p>
     */
    inline const Aws::String& GetAudience() const { return m_audience; }
    template<typename AudienceT = Aws::String>
    void SetAudience(AudienceT&& value) { m_audienceHasBeenSet = true; m_audience = std::forward<AudienceT>(value); }
    template<typename AudienceT = Aws::String>
    AssumeRoleWithSAMLResult& WithAudience(AudienceT&& value) { SetAudience(std::forward<AudienceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A hash value based on the concatenation of the following:</p> <ul> <li>
     * <p>The <code>Issuer</code> response value.</p> </li> <li> <p>The Amazon Web
     * Services account ID.</p> </li> <li> <p>The friendly name (the last part of the
     * ARN) of the SAML provider in IAM.</p> </li> </ul> <p>The combination of
     * <code>NameQualifier</code> and <code>Subject</code> can be used to uniquely
     * identify a user.</p> <p>The following pseudocode shows how the hash value is
     * calculated:</p> <p> <code>BASE64 ( SHA1 ( "https://example.com/saml" +
     * "123456789012" + "/MySAMLIdP" ) )</code> </p>
     */
    inline const Aws::String& GetNameQualifier() const { return m_nameQualifier; }
    template<typename NameQualifierT = Aws::String>
    void SetNameQualifier(NameQualifierT&& value) { m_nameQualifierHasBeenSet = true; m_nameQualifier = std::forward<NameQualifierT>(value); }
    template<typename NameQualifierT = Aws::String>
    AssumeRoleWithSAMLResult& WithNameQualifier(NameQualifierT&& value) { SetNameQualifier(std::forward<NameQualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value in the <code>SourceIdentity</code> attribute in the SAML assertion.
     * The source identity value persists across <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html#iam-term-role-chaining">chained
     * role</a> sessions.</p> <p>You can require users to set a source identity value
     * when they assume a role. You do this by using the
     * <code>sts:SourceIdentity</code> condition key in a role trust policy. That way,
     * actions that are taken with the role are associated with that user. After the
     * source identity is set, the value cannot be changed. It is present in the
     * request for all actions that are taken by the role and persists across <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html#id_roles_terms-and-concepts">chained
     * role</a> sessions. You can configure your SAML identity provider to use an
     * attribute associated with your users, like user name or email, as the source
     * identity when calling <code>AssumeRoleWithSAML</code>. You do this by adding an
     * attribute to the SAML assertion. For more information about using source
     * identity, see <a
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
    AssumeRoleWithSAMLResult& WithSourceIdentity(SourceIdentityT&& value) { SetSourceIdentity(std::forward<SourceIdentityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssumeRoleWithSAMLResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    AssumedRoleUser m_assumedRoleUser;
    bool m_assumedRoleUserHasBeenSet = false;

    int m_packedPolicySize{0};
    bool m_packedPolicySizeHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_subjectType;
    bool m_subjectTypeHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_audience;
    bool m_audienceHasBeenSet = false;

    Aws::String m_nameQualifier;
    bool m_nameQualifierHasBeenSet = false;

    Aws::String m_sourceIdentity;
    bool m_sourceIdentityHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
