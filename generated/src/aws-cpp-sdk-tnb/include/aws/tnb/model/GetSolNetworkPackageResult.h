/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/GetSolNetworkPackageMetadata.h>
#include <aws/tnb/model/NsdOnboardingState.h>
#include <aws/tnb/model/NsdOperationalState.h>
#include <aws/tnb/model/NsdUsageState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetSolNetworkPackageResult
  {
  public:
    AWS_TNB_API GetSolNetworkPackageResult();
    AWS_TNB_API GetSolNetworkPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolNetworkPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetSolNetworkPackageResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network package ARN.</p>
     */
    inline GetSolNetworkPackageResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network package ARN.</p>
     */
    inline GetSolNetworkPackageResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Network package ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Network package ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Network package ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Network package ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Network package ID.</p>
     */
    inline GetSolNetworkPackageResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Network package ID.</p>
     */
    inline GetSolNetworkPackageResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Network package ID.</p>
     */
    inline GetSolNetworkPackageResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const GetSolNetworkPackageMetadata& GetMetadata() const{ return m_metadata; }

    
    inline void SetMetadata(const GetSolNetworkPackageMetadata& value) { m_metadata = value; }

    
    inline void SetMetadata(GetSolNetworkPackageMetadata&& value) { m_metadata = std::move(value); }

    
    inline GetSolNetworkPackageResult& WithMetadata(const GetSolNetworkPackageMetadata& value) { SetMetadata(value); return *this;}

    
    inline GetSolNetworkPackageResult& WithMetadata(GetSolNetworkPackageMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdId() const{ return m_nsdId; }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(const Aws::String& value) { m_nsdId = value; }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(Aws::String&& value) { m_nsdId = std::move(value); }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(const char* value) { m_nsdId.assign(value); }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdId(const Aws::String& value) { SetNsdId(value); return *this;}

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdId(Aws::String&& value) { SetNsdId(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdId(const char* value) { SetNsdId(value); return *this;}


    /**
     * <p>Network service descriptor name.</p>
     */
    inline const Aws::String& GetNsdName() const{ return m_nsdName; }

    /**
     * <p>Network service descriptor name.</p>
     */
    inline void SetNsdName(const Aws::String& value) { m_nsdName = value; }

    /**
     * <p>Network service descriptor name.</p>
     */
    inline void SetNsdName(Aws::String&& value) { m_nsdName = std::move(value); }

    /**
     * <p>Network service descriptor name.</p>
     */
    inline void SetNsdName(const char* value) { m_nsdName.assign(value); }

    /**
     * <p>Network service descriptor name.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdName(const Aws::String& value) { SetNsdName(value); return *this;}

    /**
     * <p>Network service descriptor name.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdName(Aws::String&& value) { SetNsdName(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor name.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdName(const char* value) { SetNsdName(value); return *this;}


    /**
     * <p>Network service descriptor onboarding state.</p>
     */
    inline const NsdOnboardingState& GetNsdOnboardingState() const{ return m_nsdOnboardingState; }

    /**
     * <p>Network service descriptor onboarding state.</p>
     */
    inline void SetNsdOnboardingState(const NsdOnboardingState& value) { m_nsdOnboardingState = value; }

    /**
     * <p>Network service descriptor onboarding state.</p>
     */
    inline void SetNsdOnboardingState(NsdOnboardingState&& value) { m_nsdOnboardingState = std::move(value); }

    /**
     * <p>Network service descriptor onboarding state.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdOnboardingState(const NsdOnboardingState& value) { SetNsdOnboardingState(value); return *this;}

    /**
     * <p>Network service descriptor onboarding state.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdOnboardingState(NsdOnboardingState&& value) { SetNsdOnboardingState(std::move(value)); return *this;}


    /**
     * <p>Network service descriptor operational state.</p>
     */
    inline const NsdOperationalState& GetNsdOperationalState() const{ return m_nsdOperationalState; }

    /**
     * <p>Network service descriptor operational state.</p>
     */
    inline void SetNsdOperationalState(const NsdOperationalState& value) { m_nsdOperationalState = value; }

    /**
     * <p>Network service descriptor operational state.</p>
     */
    inline void SetNsdOperationalState(NsdOperationalState&& value) { m_nsdOperationalState = std::move(value); }

    /**
     * <p>Network service descriptor operational state.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdOperationalState(const NsdOperationalState& value) { SetNsdOperationalState(value); return *this;}

    /**
     * <p>Network service descriptor operational state.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdOperationalState(NsdOperationalState&& value) { SetNsdOperationalState(std::move(value)); return *this;}


    /**
     * <p>Network service descriptor usage state.</p>
     */
    inline const NsdUsageState& GetNsdUsageState() const{ return m_nsdUsageState; }

    /**
     * <p>Network service descriptor usage state.</p>
     */
    inline void SetNsdUsageState(const NsdUsageState& value) { m_nsdUsageState = value; }

    /**
     * <p>Network service descriptor usage state.</p>
     */
    inline void SetNsdUsageState(NsdUsageState&& value) { m_nsdUsageState = std::move(value); }

    /**
     * <p>Network service descriptor usage state.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdUsageState(const NsdUsageState& value) { SetNsdUsageState(value); return *this;}

    /**
     * <p>Network service descriptor usage state.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdUsageState(NsdUsageState&& value) { SetNsdUsageState(std::move(value)); return *this;}


    /**
     * <p>Network service descriptor version.</p>
     */
    inline const Aws::String& GetNsdVersion() const{ return m_nsdVersion; }

    /**
     * <p>Network service descriptor version.</p>
     */
    inline void SetNsdVersion(const Aws::String& value) { m_nsdVersion = value; }

    /**
     * <p>Network service descriptor version.</p>
     */
    inline void SetNsdVersion(Aws::String&& value) { m_nsdVersion = std::move(value); }

    /**
     * <p>Network service descriptor version.</p>
     */
    inline void SetNsdVersion(const char* value) { m_nsdVersion.assign(value); }

    /**
     * <p>Network service descriptor version.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdVersion(const Aws::String& value) { SetNsdVersion(value); return *this;}

    /**
     * <p>Network service descriptor version.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdVersion(Aws::String&& value) { SetNsdVersion(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor version.</p>
     */
    inline GetSolNetworkPackageResult& WithNsdVersion(const char* value) { SetNsdVersion(value); return *this;}


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
    inline GetSolNetworkPackageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkPackageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkPackageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkPackageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkPackageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkPackageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkPackageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkPackageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkPackageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVnfPkgIds() const{ return m_vnfPkgIds; }

    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline void SetVnfPkgIds(const Aws::Vector<Aws::String>& value) { m_vnfPkgIds = value; }

    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline void SetVnfPkgIds(Aws::Vector<Aws::String>&& value) { m_vnfPkgIds = std::move(value); }

    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline GetSolNetworkPackageResult& WithVnfPkgIds(const Aws::Vector<Aws::String>& value) { SetVnfPkgIds(value); return *this;}

    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline GetSolNetworkPackageResult& WithVnfPkgIds(Aws::Vector<Aws::String>&& value) { SetVnfPkgIds(std::move(value)); return *this;}

    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline GetSolNetworkPackageResult& AddVnfPkgIds(const Aws::String& value) { m_vnfPkgIds.push_back(value); return *this; }

    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline GetSolNetworkPackageResult& AddVnfPkgIds(Aws::String&& value) { m_vnfPkgIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline GetSolNetworkPackageResult& AddVnfPkgIds(const char* value) { m_vnfPkgIds.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSolNetworkPackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSolNetworkPackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSolNetworkPackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    GetSolNetworkPackageMetadata m_metadata;

    Aws::String m_nsdId;

    Aws::String m_nsdName;

    NsdOnboardingState m_nsdOnboardingState;

    NsdOperationalState m_nsdOperationalState;

    NsdUsageState m_nsdUsageState;

    Aws::String m_nsdVersion;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<Aws::String> m_vnfPkgIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
