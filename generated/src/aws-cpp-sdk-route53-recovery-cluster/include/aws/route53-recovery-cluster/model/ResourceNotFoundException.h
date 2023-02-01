/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
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
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   * <p>The request references a routing control or control panel that was not
   * found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API ResourceNotFoundException();
    AWS_ROUTE53RECOVERYCLUSTER_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * Hypothetical resource identifier that was not found
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * Hypothetical resource identifier that was not found
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * Hypothetical resource identifier that was not found
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * Hypothetical resource identifier that was not found
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * Hypothetical resource identifier that was not found
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * Hypothetical resource identifier that was not found
     */
    inline ResourceNotFoundException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * Hypothetical resource identifier that was not found
     */
    inline ResourceNotFoundException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * Hypothetical resource identifier that was not found
     */
    inline ResourceNotFoundException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * Hypothetical resource type that was not found
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * Hypothetical resource type that was not found
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * Hypothetical resource type that was not found
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * Hypothetical resource type that was not found
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * Hypothetical resource type that was not found
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * Hypothetical resource type that was not found
     */
    inline ResourceNotFoundException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * Hypothetical resource type that was not found
     */
    inline ResourceNotFoundException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * Hypothetical resource type that was not found
     */
    inline ResourceNotFoundException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
