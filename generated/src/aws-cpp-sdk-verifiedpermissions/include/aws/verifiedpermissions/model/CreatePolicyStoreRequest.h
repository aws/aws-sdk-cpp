/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ValidationSettings.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class CreatePolicyStoreRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicyStore"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

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
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

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
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

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
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

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
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

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
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline CreatePolicyStoreRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

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
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline CreatePolicyStoreRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline CreatePolicyStoreRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies the validation setting for this policy store.</p> <p>Currently, the
     * only valid and required value is <code>Mode</code>.</p>  <p>We
     * recommend that you turn on <code>STRICT</code> mode only after you define a
     * schema. If a schema doesn't exist, then <code>STRICT</code> mode causes any
     * policy to fail validation, and Verified Permissions rejects the policy. You can
     * turn off validation by using the <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>.
     * Then, when you have a schema defined, use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>
     * again to turn validation back on.</p> 
     */
    inline const ValidationSettings& GetValidationSettings() const{ return m_validationSettings; }

    /**
     * <p>Specifies the validation setting for this policy store.</p> <p>Currently, the
     * only valid and required value is <code>Mode</code>.</p>  <p>We
     * recommend that you turn on <code>STRICT</code> mode only after you define a
     * schema. If a schema doesn't exist, then <code>STRICT</code> mode causes any
     * policy to fail validation, and Verified Permissions rejects the policy. You can
     * turn off validation by using the <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>.
     * Then, when you have a schema defined, use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>
     * again to turn validation back on.</p> 
     */
    inline bool ValidationSettingsHasBeenSet() const { return m_validationSettingsHasBeenSet; }

    /**
     * <p>Specifies the validation setting for this policy store.</p> <p>Currently, the
     * only valid and required value is <code>Mode</code>.</p>  <p>We
     * recommend that you turn on <code>STRICT</code> mode only after you define a
     * schema. If a schema doesn't exist, then <code>STRICT</code> mode causes any
     * policy to fail validation, and Verified Permissions rejects the policy. You can
     * turn off validation by using the <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>.
     * Then, when you have a schema defined, use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>
     * again to turn validation back on.</p> 
     */
    inline void SetValidationSettings(const ValidationSettings& value) { m_validationSettingsHasBeenSet = true; m_validationSettings = value; }

    /**
     * <p>Specifies the validation setting for this policy store.</p> <p>Currently, the
     * only valid and required value is <code>Mode</code>.</p>  <p>We
     * recommend that you turn on <code>STRICT</code> mode only after you define a
     * schema. If a schema doesn't exist, then <code>STRICT</code> mode causes any
     * policy to fail validation, and Verified Permissions rejects the policy. You can
     * turn off validation by using the <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>.
     * Then, when you have a schema defined, use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>
     * again to turn validation back on.</p> 
     */
    inline void SetValidationSettings(ValidationSettings&& value) { m_validationSettingsHasBeenSet = true; m_validationSettings = std::move(value); }

    /**
     * <p>Specifies the validation setting for this policy store.</p> <p>Currently, the
     * only valid and required value is <code>Mode</code>.</p>  <p>We
     * recommend that you turn on <code>STRICT</code> mode only after you define a
     * schema. If a schema doesn't exist, then <code>STRICT</code> mode causes any
     * policy to fail validation, and Verified Permissions rejects the policy. You can
     * turn off validation by using the <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>.
     * Then, when you have a schema defined, use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>
     * again to turn validation back on.</p> 
     */
    inline CreatePolicyStoreRequest& WithValidationSettings(const ValidationSettings& value) { SetValidationSettings(value); return *this;}

    /**
     * <p>Specifies the validation setting for this policy store.</p> <p>Currently, the
     * only valid and required value is <code>Mode</code>.</p>  <p>We
     * recommend that you turn on <code>STRICT</code> mode only after you define a
     * schema. If a schema doesn't exist, then <code>STRICT</code> mode causes any
     * policy to fail validation, and Verified Permissions rejects the policy. You can
     * turn off validation by using the <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>.
     * Then, when you have a schema defined, use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>
     * again to turn validation back on.</p> 
     */
    inline CreatePolicyStoreRequest& WithValidationSettings(ValidationSettings&& value) { SetValidationSettings(std::move(value)); return *this;}


    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline CreatePolicyStoreRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline CreatePolicyStoreRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline CreatePolicyStoreRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ValidationSettings m_validationSettings;
    bool m_validationSettingsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
