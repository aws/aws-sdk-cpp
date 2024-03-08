/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ValidationSettings.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VerifiedPermissions
{
namespace Model
{
  class GetPolicyStoreResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreResult();
    AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the policy store;</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The ID of the policy store;</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreId = value; }

    /**
     * <p>The ID of the policy store;</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreId = std::move(value); }

    /**
     * <p>The ID of the policy store;</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreId.assign(value); }

    /**
     * <p>The ID of the policy store;</p>
     */
    inline GetPolicyStoreResult& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The ID of the policy store;</p>
     */
    inline GetPolicyStoreResult& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy store;</p>
     */
    inline GetPolicyStoreResult& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the policy store.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy store.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy store.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy store.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy store.</p>
     */
    inline GetPolicyStoreResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy store.</p>
     */
    inline GetPolicyStoreResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy store.</p>
     */
    inline GetPolicyStoreResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The current validation settings for the policy store.</p>
     */
    inline const ValidationSettings& GetValidationSettings() const{ return m_validationSettings; }

    /**
     * <p>The current validation settings for the policy store.</p>
     */
    inline void SetValidationSettings(const ValidationSettings& value) { m_validationSettings = value; }

    /**
     * <p>The current validation settings for the policy store.</p>
     */
    inline void SetValidationSettings(ValidationSettings&& value) { m_validationSettings = std::move(value); }

    /**
     * <p>The current validation settings for the policy store.</p>
     */
    inline GetPolicyStoreResult& WithValidationSettings(const ValidationSettings& value) { SetValidationSettings(value); return *this;}

    /**
     * <p>The current validation settings for the policy store.</p>
     */
    inline GetPolicyStoreResult& WithValidationSettings(ValidationSettings&& value) { SetValidationSettings(std::move(value)); return *this;}


    /**
     * <p>The date and time that the policy store was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the policy store was originally created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time that the policy store was originally created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date and time that the policy store was originally created.</p>
     */
    inline GetPolicyStoreResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that the policy store was originally created.</p>
     */
    inline GetPolicyStoreResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that the policy store was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time that the policy store was last updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time that the policy store was last updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time that the policy store was last updated.</p>
     */
    inline GetPolicyStoreResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time that the policy store was last updated.</p>
     */
    inline GetPolicyStoreResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline GetPolicyStoreResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline GetPolicyStoreResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline GetPolicyStoreResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPolicyStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPolicyStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPolicyStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policyStoreId;

    Aws::String m_arn;

    ValidationSettings m_validationSettings;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
