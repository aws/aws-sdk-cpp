/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ResourceType.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Updating or deleting a resource causes an inconsistent state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_SSMINCIDENTS_API ConflictException();
    AWS_SSMINCIDENTS_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The identifier of the requested resource</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier of the requested resource</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the requested resource</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The identifier of the requested resource</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the requested resource</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the requested resource</p>
     */
    inline ConflictException& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the requested resource</p>
     */
    inline ConflictException& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the requested resource</p>
     */
    inline ConflictException& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The resource type</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type</p>
     */
    inline ConflictException& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type</p>
     */
    inline ConflictException& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>If present in the output, the operation can be retried after this time</p>
     */
    inline const Aws::Utils::DateTime& GetRetryAfter() const{ return m_retryAfter; }

    /**
     * <p>If present in the output, the operation can be retried after this time</p>
     */
    inline bool RetryAfterHasBeenSet() const { return m_retryAfterHasBeenSet; }

    /**
     * <p>If present in the output, the operation can be retried after this time</p>
     */
    inline void SetRetryAfter(const Aws::Utils::DateTime& value) { m_retryAfterHasBeenSet = true; m_retryAfter = value; }

    /**
     * <p>If present in the output, the operation can be retried after this time</p>
     */
    inline void SetRetryAfter(Aws::Utils::DateTime&& value) { m_retryAfterHasBeenSet = true; m_retryAfter = std::move(value); }

    /**
     * <p>If present in the output, the operation can be retried after this time</p>
     */
    inline ConflictException& WithRetryAfter(const Aws::Utils::DateTime& value) { SetRetryAfter(value); return *this;}

    /**
     * <p>If present in the output, the operation can be retried after this time</p>
     */
    inline ConflictException& WithRetryAfter(Aws::Utils::DateTime&& value) { SetRetryAfter(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_retryAfter;
    bool m_retryAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
