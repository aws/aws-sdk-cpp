/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>The request caused one or more limits to be exceeded.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/LimitExceededException">AWS
   * API Reference</a></p>
   */
  class LimitExceededException
  {
  public:
    AWS_ROUTE53RESOLVER_API LimitExceededException();
    AWS_ROUTE53RESOLVER_API LimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API LimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline LimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline LimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline LimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>For a <code>LimitExceededException</code> error, the type of resource that
     * exceeded the current limit.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>For a <code>LimitExceededException</code> error, the type of resource that
     * exceeded the current limit.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>For a <code>LimitExceededException</code> error, the type of resource that
     * exceeded the current limit.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>For a <code>LimitExceededException</code> error, the type of resource that
     * exceeded the current limit.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>For a <code>LimitExceededException</code> error, the type of resource that
     * exceeded the current limit.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>For a <code>LimitExceededException</code> error, the type of resource that
     * exceeded the current limit.</p>
     */
    inline LimitExceededException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>For a <code>LimitExceededException</code> error, the type of resource that
     * exceeded the current limit.</p>
     */
    inline LimitExceededException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>For a <code>LimitExceededException</code> error, the type of resource that
     * exceeded the current limit.</p>
     */
    inline LimitExceededException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
