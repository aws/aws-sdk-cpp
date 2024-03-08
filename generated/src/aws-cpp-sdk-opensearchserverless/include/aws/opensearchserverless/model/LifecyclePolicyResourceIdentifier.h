/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The unique identifiers of policy types and resource names.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/LifecyclePolicyResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyResourceIdentifier
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyResourceIdentifier();
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline LifecyclePolicyResourceIdentifier& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline LifecyclePolicyResourceIdentifier& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline LifecyclePolicyResourceIdentifier& WithResource(const char* value) { SetResource(value); return *this;}


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
    inline LifecyclePolicyResourceIdentifier& WithType(const LifecyclePolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline LifecyclePolicyResourceIdentifier& WithType(LifecyclePolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    LifecyclePolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
