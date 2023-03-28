/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/DependentEntity.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Updating or deleting a resource causes an inconsistent state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_SSMCONTACTS_API ConflictException();
    AWS_SSMCONTACTS_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * Identifier of the resource in use
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * Identifier of the resource in use
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * Identifier of the resource in use
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * Identifier of the resource in use
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * Identifier of the resource in use
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * Identifier of the resource in use
     */
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * Identifier of the resource in use
     */
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * Identifier of the resource in use
     */
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * Type of the resource in use
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * Type of the resource in use
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * Type of the resource in use
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * Type of the resource in use
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * Type of the resource in use
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * Type of the resource in use
     */
    inline ConflictException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * Type of the resource in use
     */
    inline ConflictException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * Type of the resource in use
     */
    inline ConflictException& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline const Aws::Vector<DependentEntity>& GetDependentEntities() const{ return m_dependentEntities; }

    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline bool DependentEntitiesHasBeenSet() const { return m_dependentEntitiesHasBeenSet; }

    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline void SetDependentEntities(const Aws::Vector<DependentEntity>& value) { m_dependentEntitiesHasBeenSet = true; m_dependentEntities = value; }

    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline void SetDependentEntities(Aws::Vector<DependentEntity>&& value) { m_dependentEntitiesHasBeenSet = true; m_dependentEntities = std::move(value); }

    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline ConflictException& WithDependentEntities(const Aws::Vector<DependentEntity>& value) { SetDependentEntities(value); return *this;}

    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline ConflictException& WithDependentEntities(Aws::Vector<DependentEntity>&& value) { SetDependentEntities(std::move(value)); return *this;}

    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline ConflictException& AddDependentEntities(const DependentEntity& value) { m_dependentEntitiesHasBeenSet = true; m_dependentEntities.push_back(value); return *this; }

    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline ConflictException& AddDependentEntities(DependentEntity&& value) { m_dependentEntitiesHasBeenSet = true; m_dependentEntities.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<DependentEntity> m_dependentEntities;
    bool m_dependentEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
