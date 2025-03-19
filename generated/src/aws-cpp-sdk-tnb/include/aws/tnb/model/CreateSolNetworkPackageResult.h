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
    AWS_TNB_API CreateSolNetworkPackageResult() = default;
    AWS_TNB_API CreateSolNetworkPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API CreateSolNetworkPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateSolNetworkPackageResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network package.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateSolNetworkPackageResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Onboarding state of the network service descriptor in the network
     * package.</p>
     */
    inline NsdOnboardingState GetNsdOnboardingState() const { return m_nsdOnboardingState; }
    inline void SetNsdOnboardingState(NsdOnboardingState value) { m_nsdOnboardingStateHasBeenSet = true; m_nsdOnboardingState = value; }
    inline CreateSolNetworkPackageResult& WithNsdOnboardingState(NsdOnboardingState value) { SetNsdOnboardingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline NsdOperationalState GetNsdOperationalState() const { return m_nsdOperationalState; }
    inline void SetNsdOperationalState(NsdOperationalState value) { m_nsdOperationalStateHasBeenSet = true; m_nsdOperationalState = value; }
    inline CreateSolNetworkPackageResult& WithNsdOperationalState(NsdOperationalState value) { SetNsdOperationalState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usage state of the network service descriptor in the network package.</p>
     */
    inline NsdUsageState GetNsdUsageState() const { return m_nsdUsageState; }
    inline void SetNsdUsageState(NsdUsageState value) { m_nsdUsageStateHasBeenSet = true; m_nsdUsageState = value; }
    inline CreateSolNetworkPackageResult& WithNsdUsageState(NsdUsageState value) { SetNsdUsageState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSolNetworkPackageResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSolNetworkPackageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSolNetworkPackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    NsdOnboardingState m_nsdOnboardingState{NsdOnboardingState::NOT_SET};
    bool m_nsdOnboardingStateHasBeenSet = false;

    NsdOperationalState m_nsdOperationalState{NsdOperationalState::NOT_SET};
    bool m_nsdOperationalStateHasBeenSet = false;

    NsdUsageState m_nsdUsageState{NsdUsageState::NOT_SET};
    bool m_nsdUsageStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
