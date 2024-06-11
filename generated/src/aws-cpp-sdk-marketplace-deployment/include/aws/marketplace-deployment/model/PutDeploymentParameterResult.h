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
    AWS_MARKETPLACEDEPLOYMENT_API PutDeploymentParameterResult();
    AWS_MARKETPLACEDEPLOYMENT_API PutDeploymentParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEDEPLOYMENT_API PutDeploymentParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }
    inline void SetAgreementId(const Aws::String& value) { m_agreementId = value; }
    inline void SetAgreementId(Aws::String&& value) { m_agreementId = std::move(value); }
    inline void SetAgreementId(const char* value) { m_agreementId.assign(value); }
    inline PutDeploymentParameterResult& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}
    inline PutDeploymentParameterResult& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}
    inline PutDeploymentParameterResult& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the deployment parameter.</p>
     */
    inline const Aws::String& GetDeploymentParameterId() const{ return m_deploymentParameterId; }
    inline void SetDeploymentParameterId(const Aws::String& value) { m_deploymentParameterId = value; }
    inline void SetDeploymentParameterId(Aws::String&& value) { m_deploymentParameterId = std::move(value); }
    inline void SetDeploymentParameterId(const char* value) { m_deploymentParameterId.assign(value); }
    inline PutDeploymentParameterResult& WithDeploymentParameterId(const Aws::String& value) { SetDeploymentParameterId(value); return *this;}
    inline PutDeploymentParameterResult& WithDeploymentParameterId(Aws::String&& value) { SetDeploymentParameterId(std::move(value)); return *this;}
    inline PutDeploymentParameterResult& WithDeploymentParameterId(const char* value) { SetDeploymentParameterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the deployment parameter
     * resource you want to create or update.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline PutDeploymentParameterResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline PutDeploymentParameterResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline PutDeploymentParameterResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs, where each pair represents a tag saved to the
     * resource. Tags will only be applied for create operations, and they'll be
     * ignored if the resource already exists.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline PutDeploymentParameterResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PutDeploymentParameterResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PutDeploymentParameterResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline PutDeploymentParameterResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline PutDeploymentParameterResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline PutDeploymentParameterResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PutDeploymentParameterResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline PutDeploymentParameterResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline PutDeploymentParameterResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutDeploymentParameterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutDeploymentParameterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutDeploymentParameterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_agreementId;

    Aws::String m_deploymentParameterId;

    Aws::String m_resourceArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MarketplaceDeployment
} // namespace Aws
