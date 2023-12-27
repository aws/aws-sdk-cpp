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
   * authentication and authorization of Zonal endpoint APIs on directory
   * buckets.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/SessionCredentials">AWS
   * API Reference</a></p>
   */
  class SessionCredentials
  {
  public:
    AWS_S3_API SessionCredentials();
    AWS_S3_API SessionCredentials(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API SessionCredentials& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline SessionCredentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline SessionCredentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that's associated with a secret access key. The access
     * key ID and the secret access key are used together to sign programmatic Amazon
     * Web Services requests cryptographically. </p>
     */
    inline SessionCredentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline SessionCredentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline SessionCredentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p>A key that's used with the access key ID to cryptographically sign
     * programmatic Amazon Web Services requests. Signing a request identifies the
     * sender and prevents the request from being altered. </p>
     */
    inline SessionCredentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline SessionCredentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline SessionCredentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>A part of the temporary security credentials. The session token is used to
     * validate the temporary security credentials. </p>
     */
    inline SessionCredentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}


    /**
     * <p>Temporary security credentials expire after a specified interval. After
     * temporary credentials expire, any calls that you make with those credentials
     * will fail. So you must generate a new set of temporary credentials. Temporary
     * credentials cannot be extended or refreshed beyond the original specified
     * interval.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p>Temporary security credentials expire after a specified interval. After
     * temporary credentials expire, any calls that you make with those credentials
     * will fail. So you must generate a new set of temporary credentials. Temporary
     * credentials cannot be extended or refreshed beyond the original specified
     * interval.</p>
     */
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }

    /**
     * <p>Temporary security credentials expire after a specified interval. After
     * temporary credentials expire, any calls that you make with those credentials
     * will fail. So you must generate a new set of temporary credentials. Temporary
     * credentials cannot be extended or refreshed beyond the original specified
     * interval.</p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /**
     * <p>Temporary security credentials expire after a specified interval. After
     * temporary credentials expire, any calls that you make with those credentials
     * will fail. So you must generate a new set of temporary credentials. Temporary
     * credentials cannot be extended or refreshed beyond the original specified
     * interval.</p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expirationHasBeenSet = true; m_expiration = std::move(value); }

    /**
     * <p>Temporary security credentials expire after a specified interval. After
     * temporary credentials expire, any calls that you make with those credentials
     * will fail. So you must generate a new set of temporary credentials. Temporary
     * credentials cannot be extended or refreshed beyond the original specified
     * interval.</p>
     */
    inline SessionCredentials& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p>Temporary security credentials expire after a specified interval. After
     * temporary credentials expire, any calls that you make with those credentials
     * will fail. So you must generate a new set of temporary credentials. Temporary
     * credentials cannot be extended or refreshed beyond the original specified
     * interval.</p>
     */
    inline SessionCredentials& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiration;
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
