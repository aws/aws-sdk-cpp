/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Information about a delegation signer (DS) record that was created in the
   * registry by <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DnssecSigningAttributes">AWS
   * API Reference</a></p>
   */
  class DnssecSigningAttributes
  {
  public:
    AWS_ROUTE53DOMAINS_API DnssecSigningAttributes();
    AWS_ROUTE53DOMAINS_API DnssecSigningAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DnssecSigningAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Algorithm which was used to generate the digest from the public key. </p>
     */
    inline int GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p> Algorithm which was used to generate the digest from the public key. </p>
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * <p> Algorithm which was used to generate the digest from the public key. </p>
     */
    inline void SetAlgorithm(int value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p> Algorithm which was used to generate the digest from the public key. </p>
     */
    inline DnssecSigningAttributes& WithAlgorithm(int value) { SetAlgorithm(value); return *this;}


    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline int GetFlags() const{ return m_flags; }

    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }

    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline void SetFlags(int value) { m_flagsHasBeenSet = true; m_flags = value; }

    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline DnssecSigningAttributes& WithFlags(int value) { SetFlags(value); return *this;}


    /**
     * <p> The base64-encoded public key part of the key pair that is passed to the
     * registry. </p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p> The base64-encoded public key part of the key pair that is passed to the
     * registry. </p>
     */
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }

    /**
     * <p> The base64-encoded public key part of the key pair that is passed to the
     * registry. </p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p> The base64-encoded public key part of the key pair that is passed to the
     * registry. </p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p> The base64-encoded public key part of the key pair that is passed to the
     * registry. </p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p> The base64-encoded public key part of the key pair that is passed to the
     * registry. </p>
     */
    inline DnssecSigningAttributes& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p> The base64-encoded public key part of the key pair that is passed to the
     * registry. </p>
     */
    inline DnssecSigningAttributes& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p> The base64-encoded public key part of the key pair that is passed to the
     * registry. </p>
     */
    inline DnssecSigningAttributes& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}

  private:

    int m_algorithm;
    bool m_algorithmHasBeenSet = false;

    int m_flags;
    bool m_flagsHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
