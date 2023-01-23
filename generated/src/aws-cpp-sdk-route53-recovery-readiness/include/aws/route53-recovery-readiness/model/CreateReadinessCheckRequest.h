/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class CreateReadinessCheckRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateReadinessCheckRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReadinessCheck"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }

    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }

    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = value; }

    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::move(value); }

    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName.assign(value); }

    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline CreateReadinessCheckRequest& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}

    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline CreateReadinessCheckRequest& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}

    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline CreateReadinessCheckRequest& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}


    /**
     * <p>The name of the resource set to check.</p>
     */
    inline const Aws::String& GetResourceSetName() const{ return m_resourceSetName; }

    /**
     * <p>The name of the resource set to check.</p>
     */
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }

    /**
     * <p>The name of the resource set to check.</p>
     */
    inline void SetResourceSetName(const Aws::String& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = value; }

    /**
     * <p>The name of the resource set to check.</p>
     */
    inline void SetResourceSetName(Aws::String&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::move(value); }

    /**
     * <p>The name of the resource set to check.</p>
     */
    inline void SetResourceSetName(const char* value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName.assign(value); }

    /**
     * <p>The name of the resource set to check.</p>
     */
    inline CreateReadinessCheckRequest& WithResourceSetName(const Aws::String& value) { SetResourceSetName(value); return *this;}

    /**
     * <p>The name of the resource set to check.</p>
     */
    inline CreateReadinessCheckRequest& WithResourceSetName(Aws::String&& value) { SetResourceSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource set to check.</p>
     */
    inline CreateReadinessCheckRequest& WithResourceSetName(const char* value) { SetResourceSetName(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateReadinessCheckRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateReadinessCheckRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateReadinessCheckRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreateReadinessCheckRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateReadinessCheckRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateReadinessCheckRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateReadinessCheckRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateReadinessCheckRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateReadinessCheckRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
