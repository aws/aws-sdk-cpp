/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RetentionPolicy.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeleteDomainRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDomain"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DeleteDomainRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy for this domain, which specifies whether resources will
     * be retained after the Domain is deleted. By default, all resources are retained
     * (not automatically deleted). </p>
     */
    inline const RetentionPolicy& GetRetentionPolicy() const { return m_retentionPolicy; }
    inline bool RetentionPolicyHasBeenSet() const { return m_retentionPolicyHasBeenSet; }
    template<typename RetentionPolicyT = RetentionPolicy>
    void SetRetentionPolicy(RetentionPolicyT&& value) { m_retentionPolicyHasBeenSet = true; m_retentionPolicy = std::forward<RetentionPolicyT>(value); }
    template<typename RetentionPolicyT = RetentionPolicy>
    DeleteDomainRequest& WithRetentionPolicy(RetentionPolicyT&& value) { SetRetentionPolicy(std::forward<RetentionPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    RetentionPolicy m_retentionPolicy;
    bool m_retentionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
