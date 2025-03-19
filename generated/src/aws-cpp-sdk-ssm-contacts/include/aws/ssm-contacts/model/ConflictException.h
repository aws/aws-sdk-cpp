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
    AWS_SSMCONTACTS_API ConflictException() = default;
    AWS_SSMCONTACTS_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ConflictException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Identifier of the resource in use
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ConflictException& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Type of the resource in use
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ConflictException& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * List of dependent entities containing information on relation type and
     * resourceArns linked to the resource in use
     */
    inline const Aws::Vector<DependentEntity>& GetDependentEntities() const { return m_dependentEntities; }
    inline bool DependentEntitiesHasBeenSet() const { return m_dependentEntitiesHasBeenSet; }
    template<typename DependentEntitiesT = Aws::Vector<DependentEntity>>
    void SetDependentEntities(DependentEntitiesT&& value) { m_dependentEntitiesHasBeenSet = true; m_dependentEntities = std::forward<DependentEntitiesT>(value); }
    template<typename DependentEntitiesT = Aws::Vector<DependentEntity>>
    ConflictException& WithDependentEntities(DependentEntitiesT&& value) { SetDependentEntities(std::forward<DependentEntitiesT>(value)); return *this;}
    template<typename DependentEntitiesT = DependentEntity>
    ConflictException& AddDependentEntities(DependentEntitiesT&& value) { m_dependentEntitiesHasBeenSet = true; m_dependentEntities.emplace_back(std::forward<DependentEntitiesT>(value)); return *this; }
    ///@}
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
