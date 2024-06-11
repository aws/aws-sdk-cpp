/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
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
   * <p>The result of a successful Resource request, with status for an individual
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ResourceResult">AWS
   * API Reference</a></p>
   */
  class ResourceResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ResourceResult();
    AWS_ROUTE53RECOVERYREADINESS_API ResourceResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API ResourceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The component id of the resource.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }
    inline ResourceResult& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}
    inline ResourceResult& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}
    inline ResourceResult& WithComponentId(const char* value) { SetComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) that the resource was last checked for readiness, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckedTimestamp() const{ return m_lastCheckedTimestamp; }
    inline bool LastCheckedTimestampHasBeenSet() const { return m_lastCheckedTimestampHasBeenSet; }
    inline void SetLastCheckedTimestamp(const Aws::Utils::DateTime& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = value; }
    inline void SetLastCheckedTimestamp(Aws::Utils::DateTime&& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = std::move(value); }
    inline ResourceResult& WithLastCheckedTimestamp(const Aws::Utils::DateTime& value) { SetLastCheckedTimestamp(value); return *this;}
    inline ResourceResult& WithLastCheckedTimestamp(Aws::Utils::DateTime&& value) { SetLastCheckedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The readiness of a resource.</p>
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }
    inline bool ReadinessHasBeenSet() const { return m_readinessHasBeenSet; }
    inline void SetReadiness(const Readiness& value) { m_readinessHasBeenSet = true; m_readiness = value; }
    inline void SetReadiness(Readiness&& value) { m_readinessHasBeenSet = true; m_readiness = std::move(value); }
    inline ResourceResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}
    inline ResourceResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastCheckedTimestamp;
    bool m_lastCheckedTimestampHasBeenSet = false;

    Readiness m_readiness;
    bool m_readinessHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
