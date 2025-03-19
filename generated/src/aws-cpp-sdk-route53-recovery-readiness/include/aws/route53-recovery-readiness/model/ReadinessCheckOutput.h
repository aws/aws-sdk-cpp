/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>A readiness check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ReadinessCheckOutput">AWS
   * API Reference</a></p>
   */
  class ReadinessCheckOutput
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckOutput() = default;
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckArn() const { return m_readinessCheckArn; }
    inline bool ReadinessCheckArnHasBeenSet() const { return m_readinessCheckArnHasBeenSet; }
    template<typename ReadinessCheckArnT = Aws::String>
    void SetReadinessCheckArn(ReadinessCheckArnT&& value) { m_readinessCheckArnHasBeenSet = true; m_readinessCheckArn = std::forward<ReadinessCheckArnT>(value); }
    template<typename ReadinessCheckArnT = Aws::String>
    ReadinessCheckOutput& WithReadinessCheckArn(ReadinessCheckArnT&& value) { SetReadinessCheckArn(std::forward<ReadinessCheckArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const { return m_readinessCheckName; }
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }
    template<typename ReadinessCheckNameT = Aws::String>
    void SetReadinessCheckName(ReadinessCheckNameT&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::forward<ReadinessCheckNameT>(value); }
    template<typename ReadinessCheckNameT = Aws::String>
    ReadinessCheckOutput& WithReadinessCheckName(ReadinessCheckNameT&& value) { SetReadinessCheckName(std::forward<ReadinessCheckNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline const Aws::String& GetResourceSet() const { return m_resourceSet; }
    inline bool ResourceSetHasBeenSet() const { return m_resourceSetHasBeenSet; }
    template<typename ResourceSetT = Aws::String>
    void SetResourceSet(ResourceSetT&& value) { m_resourceSetHasBeenSet = true; m_resourceSet = std::forward<ResourceSetT>(value); }
    template<typename ResourceSetT = Aws::String>
    ReadinessCheckOutput& WithResourceSet(ResourceSetT&& value) { SetResourceSet(std::forward<ResourceSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ReadinessCheckOutput& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ReadinessCheckOutput& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_readinessCheckArn;
    bool m_readinessCheckArnHasBeenSet = false;

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;

    Aws::String m_resourceSet;
    bool m_resourceSetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
