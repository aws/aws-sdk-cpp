/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/LifecyclePolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyResourceIdentifier() = default;
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline LifecyclePolicyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LifecyclePolicyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LifecyclePolicyResourceIdentifier& WithType(LifecyclePolicyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OpenSearch Serverless ilndex resource.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    LifecyclePolicyResourceIdentifier& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}
  private:

    LifecyclePolicyType m_type{LifecyclePolicyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
