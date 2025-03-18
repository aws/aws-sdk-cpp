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
    AWS_ROUTE53_API CreateKeySigningKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKeySigningKey"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique string that identifies the request.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    CreateKeySigningKeyRequest& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string (ID) used to identify a hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    CreateKeySigningKeyRequest& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetKeyManagementServiceArn() const { return m_keyManagementServiceArn; }
    inline bool KeyManagementServiceArnHasBeenSet() const { return m_keyManagementServiceArnHasBeenSet; }
    template<typename KeyManagementServiceArnT = Aws::String>
    void SetKeyManagementServiceArn(KeyManagementServiceArnT&& value) { m_keyManagementServiceArnHasBeenSet = true; m_keyManagementServiceArn = std::forward<KeyManagementServiceArnT>(value); }
    template<typename KeyManagementServiceArnT = Aws::String>
    CreateKeySigningKeyRequest& WithKeyManagementServiceArn(KeyManagementServiceArnT&& value) { SetKeyManagementServiceArn(std::forward<KeyManagementServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateKeySigningKeyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string specifying the initial status of the key-signing key (KSK). You can
     * set the value to <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CreateKeySigningKeyRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
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
