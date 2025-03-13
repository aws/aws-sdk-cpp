/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>The established temporary security credentials of the session.</p>  <p>
   * <b>Directory buckets</b> - These session credentials are only supported for the
   * authentication and authorization of Zonal endpoint API operations on directory
   * buckets.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/SessionCredentials">AWS
   * API Reference</a></p>
   */
  class SessionCredentials
  {
  public:
    AWS_S3_API SessionCredentials() = default;
    AWS_S3_API SessionCredentials(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API SessionCredentials& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    SessionCredentials& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
    template<typename SecretAccessKeyT = Aws::String>
    void SetSecretAccessKey(SecretAccessKeyT&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::forward<SecretAccessKeyT>(value); }
    template<typename SecretAccessKeyT = Aws::String>
    SessionCredentials& WithSecretAccessKey(SecretAccessKeyT&& value) { SetSecretAccessKey(std::forward<SecretAccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    template<typename SessionTokenT = Aws::String>
    void SetSessionToken(SessionTokenT&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::forward<SessionTokenT>(value); }
    template<typename SessionTokenT = Aws::String>
    SessionCredentials& WithSessionToken(SessionTokenT&& value) { SetSessionToken(std::forward<SessionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Temporary security credentials expire after a specified interval. After
     * temporary credentials expire, any calls that you make with those credentials
     * will fail. So you must generate a new set of temporary credentials. Temporary
     * credentials cannot be extended or refreshed beyond the original specified
     * interval.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    SessionCredentials& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
