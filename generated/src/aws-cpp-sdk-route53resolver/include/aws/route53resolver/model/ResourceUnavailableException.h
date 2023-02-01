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
   * <p>The specified resource isn't available.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResourceUnavailableException">AWS
   * API Reference</a></p>
   */
  class ResourceUnavailableException
  {
  public:
    AWS_ROUTE53RESOLVER_API ResourceUnavailableException();
    AWS_ROUTE53RESOLVER_API ResourceUnavailableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResourceUnavailableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceUnavailableException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceUnavailableException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceUnavailableException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>For a <code>ResourceUnavailableException</code> error, the type of resource
     * that isn't available.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>For a <code>ResourceUnavailableException</code> error, the type of resource
     * that isn't available.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>For a <code>ResourceUnavailableException</code> error, the type of resource
     * that isn't available.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>For a <code>ResourceUnavailableException</code> error, the type of resource
     * that isn't available.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>For a <code>ResourceUnavailableException</code> error, the type of resource
     * that isn't available.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>For a <code>ResourceUnavailableException</code> error, the type of resource
     * that isn't available.</p>
     */
    inline ResourceUnavailableException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>For a <code>ResourceUnavailableException</code> error, the type of resource
     * that isn't available.</p>
     */
    inline ResourceUnavailableException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>For a <code>ResourceUnavailableException</code> error, the type of resource
     * that isn't available.</p>
     */
    inline ResourceUnavailableException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
