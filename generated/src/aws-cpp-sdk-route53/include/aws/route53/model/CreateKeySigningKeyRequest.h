/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   */
  class CreateKeySigningKeyRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API CreateKeySigningKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKeySigningKey"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline CreateKeySigningKeyRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline CreateKeySigningKeyRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline CreateKeySigningKeyRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline CreateKeySigningKeyRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline CreateKeySigningKeyRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline CreateKeySigningKeyRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) for a customer managed key in Key Management
     * Service (KMS). The <code>KeyManagementServiceArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone. To see an example of
     * <code>KeyManagementServiceArn</code> that grants the correct permissions for
     * DNSSEC, scroll down to <b>Example</b>. </p> <p>You must configure the customer
     * managed customer managed key as follows:</p> <dl> <dt>Status</dt> <dd>
     * <p>Enabled</p> </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key
     * usage</dt> <dd> <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key
     * policy must give permission for the following actions:</p> <ul> <li>
     * <p>DescribeKey</p> </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li>
     * </ul> <p>The key policy must also include the Amazon Route 53 service in the
     * principal for your account. Specify the following:</p> <ul> <li> <p>
     * <code>"Service": "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd>
     * </dl> <p>For more information about working with a customer managed key in KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline const Aws::String& GetKeyManagementServiceArn() const{ return m_keyManagementServiceArn; }

    /**
     * <p>The Amazon resource name (ARN) for a customer managed key in Key Management
     * Service (KMS). The <code>KeyManagementServiceArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone. To see an example of
     * <code>KeyManagementServiceArn</code> that grants the correct permissions for
     * DNSSEC, scroll down to <b>Example</b>. </p> <p>You must configure the customer
     * managed customer managed key as follows:</p> <dl> <dt>Status</dt> <dd>
     * <p>Enabled</p> </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key
     * usage</dt> <dd> <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key
     * policy must give permission for the following actions:</p> <ul> <li>
     * <p>DescribeKey</p> </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li>
     * </ul> <p>The key policy must also include the Amazon Route 53 service in the
     * principal for your account. Specify the following:</p> <ul> <li> <p>
     * <code>"Service": "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd>
     * </dl> <p>For more information about working with a customer managed key in KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline bool KeyManagementServiceArnHasBeenSet() const { return m_keyManagementServiceArnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) for a customer managed key in Key Management
     * Service (KMS). The <code>KeyManagementServiceArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone. To see an example of
     * <code>KeyManagementServiceArn</code> that grants the correct permissions for
     * DNSSEC, scroll down to <b>Example</b>. </p> <p>You must configure the customer
     * managed customer managed key as follows:</p> <dl> <dt>Status</dt> <dd>
     * <p>Enabled</p> </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key
     * usage</dt> <dd> <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key
     * policy must give permission for the following actions:</p> <ul> <li>
     * <p>DescribeKey</p> </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li>
     * </ul> <p>The key policy must also include the Amazon Route 53 service in the
     * principal for your account. Specify the following:</p> <ul> <li> <p>
     * <code>"Service": "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd>
     * </dl> <p>For more information about working with a customer managed key in KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline void SetKeyManagementServiceArn(const Aws::String& value) { m_keyManagementServiceArnHasBeenSet = true; m_keyManagementServiceArn = value; }

    /**
     * <p>The Amazon resource name (ARN) for a customer managed key in Key Management
     * Service (KMS). The <code>KeyManagementServiceArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone. To see an example of
     * <code>KeyManagementServiceArn</code> that grants the correct permissions for
     * DNSSEC, scroll down to <b>Example</b>. </p> <p>You must configure the customer
     * managed customer managed key as follows:</p> <dl> <dt>Status</dt> <dd>
     * <p>Enabled</p> </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key
     * usage</dt> <dd> <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key
     * policy must give permission for the following actions:</p> <ul> <li>
     * <p>DescribeKey</p> </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li>
     * </ul> <p>The key policy must also include the Amazon Route 53 service in the
     * principal for your account. Specify the following:</p> <ul> <li> <p>
     * <code>"Service": "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd>
     * </dl> <p>For more information about working with a customer managed key in KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline void SetKeyManagementServiceArn(Aws::String&& value) { m_keyManagementServiceArnHasBeenSet = true; m_keyManagementServiceArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) for a customer managed key in Key Management
     * Service (KMS). The <code>KeyManagementServiceArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone. To see an example of
     * <code>KeyManagementServiceArn</code> that grants the correct permissions for
     * DNSSEC, scroll down to <b>Example</b>. </p> <p>You must configure the customer
     * managed customer managed key as follows:</p> <dl> <dt>Status</dt> <dd>
     * <p>Enabled</p> </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key
     * usage</dt> <dd> <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key
     * policy must give permission for the following actions:</p> <ul> <li>
     * <p>DescribeKey</p> </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li>
     * </ul> <p>The key policy must also include the Amazon Route 53 service in the
     * principal for your account. Specify the following:</p> <ul> <li> <p>
     * <code>"Service": "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd>
     * </dl> <p>For more information about working with a customer managed key in KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline void SetKeyManagementServiceArn(const char* value) { m_keyManagementServiceArnHasBeenSet = true; m_keyManagementServiceArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) for a customer managed key in Key Management
     * Service (KMS). The <code>KeyManagementServiceArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone. To see an example of
     * <code>KeyManagementServiceArn</code> that grants the correct permissions for
     * DNSSEC, scroll down to <b>Example</b>. </p> <p>You must configure the customer
     * managed customer managed key as follows:</p> <dl> <dt>Status</dt> <dd>
     * <p>Enabled</p> </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key
     * usage</dt> <dd> <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key
     * policy must give permission for the following actions:</p> <ul> <li>
     * <p>DescribeKey</p> </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li>
     * </ul> <p>The key policy must also include the Amazon Route 53 service in the
     * principal for your account. Specify the following:</p> <ul> <li> <p>
     * <code>"Service": "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd>
     * </dl> <p>For more information about working with a customer managed key in KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline CreateKeySigningKeyRequest& WithKeyManagementServiceArn(const Aws::String& value) { SetKeyManagementServiceArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) for a customer managed key in Key Management
     * Service (KMS). The <code>KeyManagementServiceArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone. To see an example of
     * <code>KeyManagementServiceArn</code> that grants the correct permissions for
     * DNSSEC, scroll down to <b>Example</b>. </p> <p>You must configure the customer
     * managed customer managed key as follows:</p> <dl> <dt>Status</dt> <dd>
     * <p>Enabled</p> </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key
     * usage</dt> <dd> <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key
     * policy must give permission for the following actions:</p> <ul> <li>
     * <p>DescribeKey</p> </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li>
     * </ul> <p>The key policy must also include the Amazon Route 53 service in the
     * principal for your account. Specify the following:</p> <ul> <li> <p>
     * <code>"Service": "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd>
     * </dl> <p>For more information about working with a customer managed key in KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline CreateKeySigningKeyRequest& WithKeyManagementServiceArn(Aws::String&& value) { SetKeyManagementServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) for a customer managed key in Key Management
     * Service (KMS). The <code>KeyManagementServiceArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone. To see an example of
     * <code>KeyManagementServiceArn</code> that grants the correct permissions for
     * DNSSEC, scroll down to <b>Example</b>. </p> <p>You must configure the customer
     * managed customer managed key as follows:</p> <dl> <dt>Status</dt> <dd>
     * <p>Enabled</p> </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key
     * usage</dt> <dd> <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key
     * policy must give permission for the following actions:</p> <ul> <li>
     * <p>DescribeKey</p> </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li>
     * </ul> <p>The key policy must also include the Amazon Route 53 service in the
     * principal for your account. Specify the following:</p> <ul> <li> <p>
     * <code>"Service": "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd>
     * </dl> <p>For more information about working with a customer managed key in KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline CreateKeySigningKeyRequest& WithKeyManagementServiceArn(const char* value) { SetKeyManagementServiceArn(value); return *this;}


    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline CreateKeySigningKeyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline CreateKeySigningKeyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline CreateKeySigningKeyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline CreateKeySigningKeyRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline CreateKeySigningKeyRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline CreateKeySigningKeyRequest& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_keyManagementServiceArn;
    bool m_keyManagementServiceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
