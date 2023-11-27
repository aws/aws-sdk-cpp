/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Security Token Service temporary credential that S3
   * Access Grants vends to grantees and client applications. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Credentials">AWS
   * API Reference</a></p>
   */
  class Credentials
  {
  public:
    AWS_S3CONTROL_API Credentials();
    AWS_S3CONTROL_API Credentials(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Credentials& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The unique access key ID of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The unique access key ID of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The unique access key ID of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The unique access key ID of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The unique access key ID of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The unique access key ID of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline Credentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The unique access key ID of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline Credentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique access key ID of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline Credentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The secret access key of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>The secret access key of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    /**
     * <p>The secret access key of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>The secret access key of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p>The secret access key of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p>The secret access key of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline Credentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>The secret access key of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline Credentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p>The secret access key of the Amazon Web Services STS temporary credential
     * that S3 Access Grants vends to grantees and client applications. </p>
     */
    inline Credentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p>The Amazon Web Services STS temporary credential that S3 Access Grants vends
     * to grantees and client applications. </p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>The Amazon Web Services STS temporary credential that S3 Access Grants vends
     * to grantees and client applications. </p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>The Amazon Web Services STS temporary credential that S3 Access Grants vends
     * to grantees and client applications. </p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>The Amazon Web Services STS temporary credential that S3 Access Grants vends
     * to grantees and client applications. </p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>The Amazon Web Services STS temporary credential that S3 Access Grants vends
     * to grantees and client applications. </p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>The Amazon Web Services STS temporary credential that S3 Access Grants vends
     * to grantees and client applications. </p>
     */
    inline Credentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>The Amazon Web Services STS temporary credential that S3 Access Grants vends
     * to grantees and client applications. </p>
     */
    inline Credentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services STS temporary credential that S3 Access Grants vends
     * to grantees and client applications. </p>
     */
    inline Credentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}


    /**
     * <p>The expiration date and time of the temporary credential that S3 Access
     * Grants vends to grantees and client applications. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p>The expiration date and time of the temporary credential that S3 Access
     * Grants vends to grantees and client applications. </p>
     */
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }

    /**
     * <p>The expiration date and time of the temporary credential that S3 Access
     * Grants vends to grantees and client applications. </p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /**
     * <p>The expiration date and time of the temporary credential that S3 Access
     * Grants vends to grantees and client applications. </p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expirationHasBeenSet = true; m_expiration = std::move(value); }

    /**
     * <p>The expiration date and time of the temporary credential that S3 Access
     * Grants vends to grantees and client applications. </p>
     */
    inline Credentials& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p>The expiration date and time of the temporary credential that S3 Access
     * Grants vends to grantees and client applications. </p>
     */
    inline Credentials& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}

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
} // namespace S3Control
} // namespace Aws
