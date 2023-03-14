/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/NsdOnboardingState.h>
#include <aws/tnb/model/NsdOperationalState.h>
#include <aws/tnb/model/NsdUsageState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateSolNetworkPackageResult
  {
  public:
    AWS_TNB_API CreateSolNetworkPackageResult();
    AWS_TNB_API CreateSolNetworkPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API CreateSolNetworkPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Network package ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Network package ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Network package ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Network package ARN.</p>
     */
    inline CreateSolNetworkPackageResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network package ARN.</p>
     */
    inline CreateSolNetworkPackageResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network package ARN.</p>
     */
    inline CreateSolNetworkPackageResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>ID of the network package.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>ID of the network package.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>ID of the network package.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>ID of the network package.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>ID of the network package.</p>
     */
    inline CreateSolNetworkPackageResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>ID of the network package.</p>
     */
    inline CreateSolNetworkPackageResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>ID of the network package.</p>
     */
    inline CreateSolNetworkPackageResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Onboarding state of the network service descriptor in the network
     * package.</p>
     */
    inline const NsdOnboardingState& GetNsdOnboardingState() const{ return m_nsdOnboardingState; }

    /**
     * <p>Onboarding state of the network service descriptor in the network
     * package.</p>
     */
    inline void SetNsdOnboardingState(const NsdOnboardingState& value) { m_nsdOnboardingState = value; }

    /**
     * <p>Onboarding state of the network service descriptor in the network
     * package.</p>
     */
    inline void SetNsdOnboardingState(NsdOnboardingState&& value) { m_nsdOnboardingState = std::move(value); }

    /**
     * <p>Onboarding state of the network service descriptor in the network
     * package.</p>
     */
    inline CreateSolNetworkPackageResult& WithNsdOnboardingState(const NsdOnboardingState& value) { SetNsdOnboardingState(value); return *this;}

    /**
     * <p>Onboarding state of the network service descriptor in the network
     * package.</p>
     */
    inline CreateSolNetworkPackageResult& WithNsdOnboardingState(NsdOnboardingState&& value) { SetNsdOnboardingState(std::move(value)); return *this;}


    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline const NsdOperationalState& GetNsdOperationalState() const{ return m_nsdOperationalState; }

    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline void SetNsdOperationalState(const NsdOperationalState& value) { m_nsdOperationalState = value; }

    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline void SetNsdOperationalState(NsdOperationalState&& value) { m_nsdOperationalState = std::move(value); }

    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline CreateSolNetworkPackageResult& WithNsdOperationalState(const NsdOperationalState& value) { SetNsdOperationalState(value); return *this;}

    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline CreateSolNetworkPackageResult& WithNsdOperationalState(NsdOperationalState&& value) { SetNsdOperationalState(std::move(value)); return *this;}


    /**
     * <p>Usage state of the network service descriptor in the network package.</p>
     */
    inline const NsdUsageState& GetNsdUsageState() const{ return m_nsdUsageState; }

    /**
     * <p>Usage state of the network service descriptor in the network package.</p>
     */
    inline void SetNsdUsageState(const NsdUsageState& value) { m_nsdUsageState = value; }

    /**
     * <p>Usage state of the network service descriptor in the network package.</p>
     */
    inline void SetNsdUsageState(NsdUsageState&& value) { m_nsdUsageState = std::move(value); }

    /**
     * <p>Usage state of the network service descriptor in the network package.</p>
     */
    inline CreateSolNetworkPackageResult& WithNsdUsageState(const NsdUsageState& value) { SetNsdUsageState(value); return *this;}

    /**
     * <p>Usage state of the network service descriptor in the network package.</p>
     */
    inline CreateSolNetworkPackageResult& WithNsdUsageState(NsdUsageState&& value) { SetNsdUsageState(std::move(value)); return *this;}


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
    inline CreateSolNetworkPackageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkPackageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkPackageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkPackageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkPackageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkPackageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkPackageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkPackageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkPackageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSolNetworkPackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSolNetworkPackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSolNetworkPackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    NsdOnboardingState m_nsdOnboardingState;

    NsdOperationalState m_nsdOperationalState;

    NsdUsageState m_nsdUsageState;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
