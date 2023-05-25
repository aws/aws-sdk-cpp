/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the secret managed by RDS in Amazon Web Services Secrets Manager for
   * the master user password.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
   * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
   * User Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
   * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
   * User Guide.</i> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/MasterUserSecret">AWS
   * API Reference</a></p>
   */
  class MasterUserSecret
  {
  public:
    AWS_RDS_API MasterUserSecret();
    AWS_RDS_API MasterUserSecret(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API MasterUserSecret& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline MasterUserSecret& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline MasterUserSecret& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline MasterUserSecret& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p> <code>creating</code> - The secret is being
     * created.</p> </li> <li> <p> <code>active</code> - The secret is available for
     * normal use and rotation.</p> </li> <li> <p> <code>rotating</code> - The secret
     * is being rotated.</p> </li> <li> <p> <code>impaired</code> - The secret can be
     * used to access database credentials, but it can't be rotated. A secret might
     * have this status if, for example, permissions are changed so that RDS can no
     * longer access either the secret or the KMS key for the secret.</p> <p>When a
     * secret has this status, you can correct the condition that caused the status.
     * Alternatively, modify the DB instance to turn off automatic management of
     * database credentials, and then modify the DB instance again to turn on automatic
     * management of database credentials.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretStatus() const{ return m_secretStatus; }

    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p> <code>creating</code> - The secret is being
     * created.</p> </li> <li> <p> <code>active</code> - The secret is available for
     * normal use and rotation.</p> </li> <li> <p> <code>rotating</code> - The secret
     * is being rotated.</p> </li> <li> <p> <code>impaired</code> - The secret can be
     * used to access database credentials, but it can't be rotated. A secret might
     * have this status if, for example, permissions are changed so that RDS can no
     * longer access either the secret or the KMS key for the secret.</p> <p>When a
     * secret has this status, you can correct the condition that caused the status.
     * Alternatively, modify the DB instance to turn off automatic management of
     * database credentials, and then modify the DB instance again to turn on automatic
     * management of database credentials.</p> </li> </ul>
     */
    inline bool SecretStatusHasBeenSet() const { return m_secretStatusHasBeenSet; }

    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p> <code>creating</code> - The secret is being
     * created.</p> </li> <li> <p> <code>active</code> - The secret is available for
     * normal use and rotation.</p> </li> <li> <p> <code>rotating</code> - The secret
     * is being rotated.</p> </li> <li> <p> <code>impaired</code> - The secret can be
     * used to access database credentials, but it can't be rotated. A secret might
     * have this status if, for example, permissions are changed so that RDS can no
     * longer access either the secret or the KMS key for the secret.</p> <p>When a
     * secret has this status, you can correct the condition that caused the status.
     * Alternatively, modify the DB instance to turn off automatic management of
     * database credentials, and then modify the DB instance again to turn on automatic
     * management of database credentials.</p> </li> </ul>
     */
    inline void SetSecretStatus(const Aws::String& value) { m_secretStatusHasBeenSet = true; m_secretStatus = value; }

    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p> <code>creating</code> - The secret is being
     * created.</p> </li> <li> <p> <code>active</code> - The secret is available for
     * normal use and rotation.</p> </li> <li> <p> <code>rotating</code> - The secret
     * is being rotated.</p> </li> <li> <p> <code>impaired</code> - The secret can be
     * used to access database credentials, but it can't be rotated. A secret might
     * have this status if, for example, permissions are changed so that RDS can no
     * longer access either the secret or the KMS key for the secret.</p> <p>When a
     * secret has this status, you can correct the condition that caused the status.
     * Alternatively, modify the DB instance to turn off automatic management of
     * database credentials, and then modify the DB instance again to turn on automatic
     * management of database credentials.</p> </li> </ul>
     */
    inline void SetSecretStatus(Aws::String&& value) { m_secretStatusHasBeenSet = true; m_secretStatus = std::move(value); }

    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p> <code>creating</code> - The secret is being
     * created.</p> </li> <li> <p> <code>active</code> - The secret is available for
     * normal use and rotation.</p> </li> <li> <p> <code>rotating</code> - The secret
     * is being rotated.</p> </li> <li> <p> <code>impaired</code> - The secret can be
     * used to access database credentials, but it can't be rotated. A secret might
     * have this status if, for example, permissions are changed so that RDS can no
     * longer access either the secret or the KMS key for the secret.</p> <p>When a
     * secret has this status, you can correct the condition that caused the status.
     * Alternatively, modify the DB instance to turn off automatic management of
     * database credentials, and then modify the DB instance again to turn on automatic
     * management of database credentials.</p> </li> </ul>
     */
    inline void SetSecretStatus(const char* value) { m_secretStatusHasBeenSet = true; m_secretStatus.assign(value); }

    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p> <code>creating</code> - The secret is being
     * created.</p> </li> <li> <p> <code>active</code> - The secret is available for
     * normal use and rotation.</p> </li> <li> <p> <code>rotating</code> - The secret
     * is being rotated.</p> </li> <li> <p> <code>impaired</code> - The secret can be
     * used to access database credentials, but it can't be rotated. A secret might
     * have this status if, for example, permissions are changed so that RDS can no
     * longer access either the secret or the KMS key for the secret.</p> <p>When a
     * secret has this status, you can correct the condition that caused the status.
     * Alternatively, modify the DB instance to turn off automatic management of
     * database credentials, and then modify the DB instance again to turn on automatic
     * management of database credentials.</p> </li> </ul>
     */
    inline MasterUserSecret& WithSecretStatus(const Aws::String& value) { SetSecretStatus(value); return *this;}

    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p> <code>creating</code> - The secret is being
     * created.</p> </li> <li> <p> <code>active</code> - The secret is available for
     * normal use and rotation.</p> </li> <li> <p> <code>rotating</code> - The secret
     * is being rotated.</p> </li> <li> <p> <code>impaired</code> - The secret can be
     * used to access database credentials, but it can't be rotated. A secret might
     * have this status if, for example, permissions are changed so that RDS can no
     * longer access either the secret or the KMS key for the secret.</p> <p>When a
     * secret has this status, you can correct the condition that caused the status.
     * Alternatively, modify the DB instance to turn off automatic management of
     * database credentials, and then modify the DB instance again to turn on automatic
     * management of database credentials.</p> </li> </ul>
     */
    inline MasterUserSecret& WithSecretStatus(Aws::String&& value) { SetSecretStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p> <code>creating</code> - The secret is being
     * created.</p> </li> <li> <p> <code>active</code> - The secret is available for
     * normal use and rotation.</p> </li> <li> <p> <code>rotating</code> - The secret
     * is being rotated.</p> </li> <li> <p> <code>impaired</code> - The secret can be
     * used to access database credentials, but it can't be rotated. A secret might
     * have this status if, for example, permissions are changed so that RDS can no
     * longer access either the secret or the KMS key for the secret.</p> <p>When a
     * secret has this status, you can correct the condition that caused the status.
     * Alternatively, modify the DB instance to turn off automatic management of
     * database credentials, and then modify the DB instance again to turn on automatic
     * management of database credentials.</p> </li> </ul>
     */
    inline MasterUserSecret& WithSecretStatus(const char* value) { SetSecretStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline MasterUserSecret& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline MasterUserSecret& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline MasterUserSecret& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_secretStatus;
    bool m_secretStatusHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
