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
    AWS_SAGEMAKER_API DeleteDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDomain"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The domain ID.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline DeleteDomainRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline DeleteDomainRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline DeleteDomainRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The retention policy for this domain, which specifies whether resources will
     * be retained after the Domain is deleted. By default, all resources are retained
     * (not automatically deleted). </p>
     */
    inline const RetentionPolicy& GetRetentionPolicy() const{ return m_retentionPolicy; }

    /**
     * <p>The retention policy for this domain, which specifies whether resources will
     * be retained after the Domain is deleted. By default, all resources are retained
     * (not automatically deleted). </p>
     */
    inline bool RetentionPolicyHasBeenSet() const { return m_retentionPolicyHasBeenSet; }

    /**
     * <p>The retention policy for this domain, which specifies whether resources will
     * be retained after the Domain is deleted. By default, all resources are retained
     * (not automatically deleted). </p>
     */
    inline void SetRetentionPolicy(const RetentionPolicy& value) { m_retentionPolicyHasBeenSet = true; m_retentionPolicy = value; }

    /**
     * <p>The retention policy for this domain, which specifies whether resources will
     * be retained after the Domain is deleted. By default, all resources are retained
     * (not automatically deleted). </p>
     */
    inline void SetRetentionPolicy(RetentionPolicy&& value) { m_retentionPolicyHasBeenSet = true; m_retentionPolicy = std::move(value); }

    /**
     * <p>The retention policy for this domain, which specifies whether resources will
     * be retained after the Domain is deleted. By default, all resources are retained
     * (not automatically deleted). </p>
     */
    inline DeleteDomainRequest& WithRetentionPolicy(const RetentionPolicy& value) { SetRetentionPolicy(value); return *this;}

    /**
     * <p>The retention policy for this domain, which specifies whether resources will
     * be retained after the Domain is deleted. By default, all resources are retained
     * (not automatically deleted). </p>
     */
    inline DeleteDomainRequest& WithRetentionPolicy(RetentionPolicy&& value) { SetRetentionPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    RetentionPolicy m_retentionPolicy;
    bool m_retentionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
