/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MarketplaceDeployment
{
namespace Model
{
  class PutDeploymentParameterResult
  {
  public:
    AWS_MARKETPLACEDEPLOYMENT_API PutDeploymentParameterResult() = default;
    AWS_MARKETPLACEDEPLOYMENT_API PutDeploymentParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEDEPLOYMENT_API PutDeploymentParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const { return m_agreementId; }
    template<typename AgreementIdT = Aws::String>
    void SetAgreementId(AgreementIdT&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::forward<AgreementIdT>(value); }
    template<typename AgreementIdT = Aws::String>
    PutDeploymentParameterResult& WithAgreementId(AgreementIdT&& value) { SetAgreementId(std::forward<AgreementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the deployment parameter.</p>
     */
    inline const Aws::String& GetDeploymentParameterId() const { return m_deploymentParameterId; }
    template<typename DeploymentParameterIdT = Aws::String>
    void SetDeploymentParameterId(DeploymentParameterIdT&& value) { m_deploymentParameterIdHasBeenSet = true; m_deploymentParameterId = std::forward<DeploymentParameterIdT>(value); }
    template<typename DeploymentParameterIdT = Aws::String>
    PutDeploymentParameterResult& WithDeploymentParameterId(DeploymentParameterIdT&& value) { SetDeploymentParameterId(std::forward<DeploymentParameterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the deployment parameter
     * resource you want to create or update.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PutDeploymentParameterResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs, where each pair represents a tag saved to the
     * resource. Tags will only be applied for create operations, and they'll be
     * ignored if the resource already exists.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PutDeploymentParameterResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PutDeploymentParameterResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutDeploymentParameterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_deploymentParameterId;
    bool m_deploymentParameterIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceDeployment
} // namespace Aws
