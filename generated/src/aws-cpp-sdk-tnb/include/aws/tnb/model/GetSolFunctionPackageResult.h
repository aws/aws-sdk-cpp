/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/GetSolFunctionPackageMetadata.h>
#include <aws/tnb/model/OnboardingState.h>
#include <aws/tnb/model/OperationalState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/tnb/model/UsageState.h>
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
namespace tnb
{
namespace Model
{
  class GetSolFunctionPackageResult
  {
  public:
    AWS_TNB_API GetSolFunctionPackageResult();
    AWS_TNB_API GetSolFunctionPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolFunctionPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Function package ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Function package ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Function package ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Function package ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Function package ARN.</p>
     */
    inline GetSolFunctionPackageResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Function package ARN.</p>
     */
    inline GetSolFunctionPackageResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Function package ARN.</p>
     */
    inline GetSolFunctionPackageResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Function package ID.</p>
     */
    inline GetSolFunctionPackageResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Function package ID.</p>
     */
    inline GetSolFunctionPackageResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Function package ID.</p>
     */
    inline GetSolFunctionPackageResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const GetSolFunctionPackageMetadata& GetMetadata() const{ return m_metadata; }

    
    inline void SetMetadata(const GetSolFunctionPackageMetadata& value) { m_metadata = value; }

    
    inline void SetMetadata(GetSolFunctionPackageMetadata&& value) { m_metadata = std::move(value); }

    
    inline GetSolFunctionPackageResult& WithMetadata(const GetSolFunctionPackageMetadata& value) { SetMetadata(value); return *this;}

    
    inline GetSolFunctionPackageResult& WithMetadata(GetSolFunctionPackageMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Function package onboarding state.</p>
     */
    inline const OnboardingState& GetOnboardingState() const{ return m_onboardingState; }

    /**
     * <p>Function package onboarding state.</p>
     */
    inline void SetOnboardingState(const OnboardingState& value) { m_onboardingState = value; }

    /**
     * <p>Function package onboarding state.</p>
     */
    inline void SetOnboardingState(OnboardingState&& value) { m_onboardingState = std::move(value); }

    /**
     * <p>Function package onboarding state.</p>
     */
    inline GetSolFunctionPackageResult& WithOnboardingState(const OnboardingState& value) { SetOnboardingState(value); return *this;}

    /**
     * <p>Function package onboarding state.</p>
     */
    inline GetSolFunctionPackageResult& WithOnboardingState(OnboardingState&& value) { SetOnboardingState(std::move(value)); return *this;}


    /**
     * <p>Function package operational state.</p>
     */
    inline const OperationalState& GetOperationalState() const{ return m_operationalState; }

    /**
     * <p>Function package operational state.</p>
     */
    inline void SetOperationalState(const OperationalState& value) { m_operationalState = value; }

    /**
     * <p>Function package operational state.</p>
     */
    inline void SetOperationalState(OperationalState&& value) { m_operationalState = std::move(value); }

    /**
     * <p>Function package operational state.</p>
     */
    inline GetSolFunctionPackageResult& WithOperationalState(const OperationalState& value) { SetOperationalState(value); return *this;}

    /**
     * <p>Function package operational state.</p>
     */
    inline GetSolFunctionPackageResult& WithOperationalState(OperationalState&& value) { SetOperationalState(std::move(value)); return *this;}


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionPackageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Function package usage state.</p>
     */
    inline const UsageState& GetUsageState() const{ return m_usageState; }

    /**
     * <p>Function package usage state.</p>
     */
    inline void SetUsageState(const UsageState& value) { m_usageState = value; }

    /**
     * <p>Function package usage state.</p>
     */
    inline void SetUsageState(UsageState&& value) { m_usageState = std::move(value); }

    /**
     * <p>Function package usage state.</p>
     */
    inline GetSolFunctionPackageResult& WithUsageState(const UsageState& value) { SetUsageState(value); return *this;}

    /**
     * <p>Function package usage state.</p>
     */
    inline GetSolFunctionPackageResult& WithUsageState(UsageState&& value) { SetUsageState(std::move(value)); return *this;}


    /**
     * <p>Network function product name.</p>
     */
    inline const Aws::String& GetVnfProductName() const{ return m_vnfProductName; }

    /**
     * <p>Network function product name.</p>
     */
    inline void SetVnfProductName(const Aws::String& value) { m_vnfProductName = value; }

    /**
     * <p>Network function product name.</p>
     */
    inline void SetVnfProductName(Aws::String&& value) { m_vnfProductName = std::move(value); }

    /**
     * <p>Network function product name.</p>
     */
    inline void SetVnfProductName(const char* value) { m_vnfProductName.assign(value); }

    /**
     * <p>Network function product name.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfProductName(const Aws::String& value) { SetVnfProductName(value); return *this;}

    /**
     * <p>Network function product name.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfProductName(Aws::String&& value) { SetVnfProductName(std::move(value)); return *this;}

    /**
     * <p>Network function product name.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfProductName(const char* value) { SetVnfProductName(value); return *this;}


    /**
     * <p>Network function provider.</p>
     */
    inline const Aws::String& GetVnfProvider() const{ return m_vnfProvider; }

    /**
     * <p>Network function provider.</p>
     */
    inline void SetVnfProvider(const Aws::String& value) { m_vnfProvider = value; }

    /**
     * <p>Network function provider.</p>
     */
    inline void SetVnfProvider(Aws::String&& value) { m_vnfProvider = std::move(value); }

    /**
     * <p>Network function provider.</p>
     */
    inline void SetVnfProvider(const char* value) { m_vnfProvider.assign(value); }

    /**
     * <p>Network function provider.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfProvider(const Aws::String& value) { SetVnfProvider(value); return *this;}

    /**
     * <p>Network function provider.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfProvider(Aws::String&& value) { SetVnfProvider(std::move(value)); return *this;}

    /**
     * <p>Network function provider.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfProvider(const char* value) { SetVnfProvider(value); return *this;}


    /**
     * <p>Function package descriptor ID.</p>
     */
    inline const Aws::String& GetVnfdId() const{ return m_vnfdId; }

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline void SetVnfdId(const Aws::String& value) { m_vnfdId = value; }

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline void SetVnfdId(Aws::String&& value) { m_vnfdId = std::move(value); }

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline void SetVnfdId(const char* value) { m_vnfdId.assign(value); }

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfdId(const Aws::String& value) { SetVnfdId(value); return *this;}

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfdId(Aws::String&& value) { SetVnfdId(std::move(value)); return *this;}

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfdId(const char* value) { SetVnfdId(value); return *this;}


    /**
     * <p>Function package descriptor version.</p>
     */
    inline const Aws::String& GetVnfdVersion() const{ return m_vnfdVersion; }

    /**
     * <p>Function package descriptor version.</p>
     */
    inline void SetVnfdVersion(const Aws::String& value) { m_vnfdVersion = value; }

    /**
     * <p>Function package descriptor version.</p>
     */
    inline void SetVnfdVersion(Aws::String&& value) { m_vnfdVersion = std::move(value); }

    /**
     * <p>Function package descriptor version.</p>
     */
    inline void SetVnfdVersion(const char* value) { m_vnfdVersion.assign(value); }

    /**
     * <p>Function package descriptor version.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfdVersion(const Aws::String& value) { SetVnfdVersion(value); return *this;}

    /**
     * <p>Function package descriptor version.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfdVersion(Aws::String&& value) { SetVnfdVersion(std::move(value)); return *this;}

    /**
     * <p>Function package descriptor version.</p>
     */
    inline GetSolFunctionPackageResult& WithVnfdVersion(const char* value) { SetVnfdVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSolFunctionPackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSolFunctionPackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSolFunctionPackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    GetSolFunctionPackageMetadata m_metadata;

    OnboardingState m_onboardingState;

    OperationalState m_operationalState;

    Aws::Map<Aws::String, Aws::String> m_tags;

    UsageState m_usageState;

    Aws::String m_vnfProductName;

    Aws::String m_vnfProvider;

    Aws::String m_vnfdId;

    Aws::String m_vnfdVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
