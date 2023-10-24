/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/ResourceType.h>
#include <aws/opensearchserverless/model/LifecyclePolicyType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Error information for an OpenSearch Serverless request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/EffectiveLifecyclePolicyDetail">AWS
   * API Reference</a></p>
   */
  class EffectiveLifecyclePolicyDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API EffectiveLifecyclePolicyDetail();
    AWS_OPENSEARCHSERVERLESS_API EffectiveLifecyclePolicyDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API EffectiveLifecyclePolicyDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of index retention days set. That is an optional param
     * that will return as <code>true</code> if the minimum number of days or hours is
     * not set to a index resource.</p>
     */
    inline bool GetNoMinRetentionPeriod() const{ return m_noMinRetentionPeriod; }

    /**
     * <p>The minimum number of index retention days set. That is an optional param
     * that will return as <code>true</code> if the minimum number of days or hours is
     * not set to a index resource.</p>
     */
    inline bool NoMinRetentionPeriodHasBeenSet() const { return m_noMinRetentionPeriodHasBeenSet; }

    /**
     * <p>The minimum number of index retention days set. That is an optional param
     * that will return as <code>true</code> if the minimum number of days or hours is
     * not set to a index resource.</p>
     */
    inline void SetNoMinRetentionPeriod(bool value) { m_noMinRetentionPeriodHasBeenSet = true; m_noMinRetentionPeriod = value; }

    /**
     * <p>The minimum number of index retention days set. That is an optional param
     * that will return as <code>true</code> if the minimum number of days or hours is
     * not set to a index resource.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithNoMinRetentionPeriod(bool value) { SetNoMinRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The name of the OpenSearch Serverless index resource.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The name of the OpenSearch Serverless index resource.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The name of the OpenSearch Serverless index resource.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The name of the OpenSearch Serverless index resource.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The name of the OpenSearch Serverless index resource.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The name of the OpenSearch Serverless index resource.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The name of the OpenSearch Serverless index resource.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The name of the OpenSearch Serverless index resource.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The type of OpenSearch Serverless resource. Currently, the only supported
     * resource is <code>index</code>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of OpenSearch Serverless resource. Currently, the only supported
     * resource is <code>index</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of OpenSearch Serverless resource. Currently, the only supported
     * resource is <code>index</code>.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of OpenSearch Serverless resource. Currently, the only supported
     * resource is <code>index</code>.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of OpenSearch Serverless resource. Currently, the only supported
     * resource is <code>index</code>.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of OpenSearch Serverless resource. Currently, the only supported
     * resource is <code>index</code>.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The minimum number of index retention in days or hours. This is an optional
     * parameter that will return only if it’s set.</p>
     */
    inline const Aws::String& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The minimum number of index retention in days or hours. This is an optional
     * parameter that will return only if it’s set.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The minimum number of index retention in days or hours. This is an optional
     * parameter that will return only if it’s set.</p>
     */
    inline void SetRetentionPeriod(const Aws::String& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The minimum number of index retention in days or hours. This is an optional
     * parameter that will return only if it’s set.</p>
     */
    inline void SetRetentionPeriod(Aws::String&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>The minimum number of index retention in days or hours. This is an optional
     * parameter that will return only if it’s set.</p>
     */
    inline void SetRetentionPeriod(const char* value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod.assign(value); }

    /**
     * <p>The minimum number of index retention in days or hours. This is an optional
     * parameter that will return only if it’s set.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithRetentionPeriod(const Aws::String& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>The minimum number of index retention in days or hours. This is an optional
     * parameter that will return only if it’s set.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithRetentionPeriod(Aws::String&& value) { SetRetentionPeriod(std::move(value)); return *this;}

    /**
     * <p>The minimum number of index retention in days or hours. This is an optional
     * parameter that will return only if it’s set.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithRetentionPeriod(const char* value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline const LifecyclePolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline void SetType(const LifecyclePolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline void SetType(LifecyclePolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithType(const LifecyclePolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline EffectiveLifecyclePolicyDetail& WithType(LifecyclePolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    bool m_noMinRetentionPeriod;
    bool m_noMinRetentionPeriodHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    LifecyclePolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
