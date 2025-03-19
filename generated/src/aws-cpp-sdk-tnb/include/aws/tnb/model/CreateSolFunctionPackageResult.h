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
    AWS_TNB_API CreateSolFunctionPackageResult() = default;
    AWS_TNB_API CreateSolFunctionPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API CreateSolFunctionPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Function package ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateSolFunctionPackageResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the function package.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateSolFunctionPackageResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline OnboardingState GetOnboardingState() const { return m_onboardingState; }
    inline void SetOnboardingState(OnboardingState value) { m_onboardingStateHasBeenSet = true; m_onboardingState = value; }
    inline CreateSolFunctionPackageResult& WithOnboardingState(OnboardingState value) { SetOnboardingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operational state of the function package.</p>
     */
    inline OperationalState GetOperationalState() const { return m_operationalState; }
    inline void SetOperationalState(OperationalState value) { m_operationalStateHasBeenSet = true; m_operationalState = value; }
    inline CreateSolFunctionPackageResult& WithOperationalState(OperationalState value) { SetOperationalState(value); return *this;}
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
    CreateSolFunctionPackageResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSolFunctionPackageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Usage state of the function package.</p>
     */
    inline UsageState GetUsageState() const { return m_usageState; }
    inline void SetUsageState(UsageState value) { m_usageStateHasBeenSet = true; m_usageState = value; }
    inline CreateSolFunctionPackageResult& WithUsageState(UsageState value) { SetUsageState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSolFunctionPackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    OnboardingState m_onboardingState{OnboardingState::NOT_SET};
    bool m_onboardingStateHasBeenSet = false;

    OperationalState m_operationalState{OperationalState::NOT_SET};
    bool m_operationalStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    UsageState m_usageState{UsageState::NOT_SET};
    bool m_usageStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
