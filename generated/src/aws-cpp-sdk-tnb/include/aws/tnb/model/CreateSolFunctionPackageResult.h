/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateSolFunctionPackageResult
  {
  public:
    AWS_TNB_API CreateSolFunctionPackageResult();
    AWS_TNB_API CreateSolFunctionPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API CreateSolFunctionPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateSolFunctionPackageResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Function package ARN.</p>
     */
    inline CreateSolFunctionPackageResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Function package ARN.</p>
     */
    inline CreateSolFunctionPackageResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>ID of the function package.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>ID of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>ID of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>ID of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline const OnboardingState& GetOnboardingState() const{ return m_onboardingState; }

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline void SetOnboardingState(const OnboardingState& value) { m_onboardingState = value; }

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline void SetOnboardingState(OnboardingState&& value) { m_onboardingState = std::move(value); }

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithOnboardingState(const OnboardingState& value) { SetOnboardingState(value); return *this;}

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithOnboardingState(OnboardingState&& value) { SetOnboardingState(std::move(value)); return *this;}


    /**
     * <p>Operational state of the function package.</p>
     */
    inline const OperationalState& GetOperationalState() const{ return m_operationalState; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline void SetOperationalState(const OperationalState& value) { m_operationalState = value; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline void SetOperationalState(OperationalState&& value) { m_operationalState = std::move(value); }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithOperationalState(const OperationalState& value) { SetOperationalState(value); return *this;}

    /**
     * <p>Operational state of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithOperationalState(OperationalState&& value) { SetOperationalState(std::move(value)); return *this;}


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
    inline CreateSolFunctionPackageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolFunctionPackageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolFunctionPackageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolFunctionPackageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolFunctionPackageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolFunctionPackageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolFunctionPackageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolFunctionPackageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolFunctionPackageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Usage state of the function package.</p>
     */
    inline const UsageState& GetUsageState() const{ return m_usageState; }

    /**
     * <p>Usage state of the function package.</p>
     */
    inline void SetUsageState(const UsageState& value) { m_usageState = value; }

    /**
     * <p>Usage state of the function package.</p>
     */
    inline void SetUsageState(UsageState&& value) { m_usageState = std::move(value); }

    /**
     * <p>Usage state of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithUsageState(const UsageState& value) { SetUsageState(value); return *this;}

    /**
     * <p>Usage state of the function package.</p>
     */
    inline CreateSolFunctionPackageResult& WithUsageState(UsageState&& value) { SetUsageState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSolFunctionPackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSolFunctionPackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSolFunctionPackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    OnboardingState m_onboardingState;

    OperationalState m_operationalState;

    Aws::Map<Aws::String, Aws::String> m_tags;

    UsageState m_usageState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
