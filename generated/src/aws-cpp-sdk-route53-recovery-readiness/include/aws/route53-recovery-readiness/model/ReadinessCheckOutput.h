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
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckOutput();
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckArn() const{ return m_readinessCheckArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline bool ReadinessCheckArnHasBeenSet() const { return m_readinessCheckArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline void SetReadinessCheckArn(const Aws::String& value) { m_readinessCheckArnHasBeenSet = true; m_readinessCheckArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline void SetReadinessCheckArn(Aws::String&& value) { m_readinessCheckArnHasBeenSet = true; m_readinessCheckArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline void SetReadinessCheckArn(const char* value) { m_readinessCheckArnHasBeenSet = true; m_readinessCheckArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline ReadinessCheckOutput& WithReadinessCheckArn(const Aws::String& value) { SetReadinessCheckArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline ReadinessCheckOutput& WithReadinessCheckArn(Aws::String&& value) { SetReadinessCheckArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline ReadinessCheckOutput& WithReadinessCheckArn(const char* value) { SetReadinessCheckArn(value); return *this;}


    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = value; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::move(value); }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName.assign(value); }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline ReadinessCheckOutput& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}

    /**
     * <p>Name of a readiness check.</p>
     */
    inline ReadinessCheckOutput& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}

    /**
     * <p>Name of a readiness check.</p>
     */
    inline ReadinessCheckOutput& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}


    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline const Aws::String& GetResourceSet() const{ return m_resourceSet; }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline bool ResourceSetHasBeenSet() const { return m_resourceSetHasBeenSet; }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline void SetResourceSet(const Aws::String& value) { m_resourceSetHasBeenSet = true; m_resourceSet = value; }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline void SetResourceSet(Aws::String&& value) { m_resourceSetHasBeenSet = true; m_resourceSet = std::move(value); }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline void SetResourceSet(const char* value) { m_resourceSetHasBeenSet = true; m_resourceSet.assign(value); }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline ReadinessCheckOutput& WithResourceSet(const Aws::String& value) { SetResourceSet(value); return *this;}

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline ReadinessCheckOutput& WithResourceSet(Aws::String&& value) { SetResourceSet(std::move(value)); return *this;}

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline ReadinessCheckOutput& WithResourceSet(const char* value) { SetResourceSet(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline ReadinessCheckOutput& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline ReadinessCheckOutput& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline ReadinessCheckOutput& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline ReadinessCheckOutput& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline ReadinessCheckOutput& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline ReadinessCheckOutput& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline ReadinessCheckOutput& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline ReadinessCheckOutput& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline ReadinessCheckOutput& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
