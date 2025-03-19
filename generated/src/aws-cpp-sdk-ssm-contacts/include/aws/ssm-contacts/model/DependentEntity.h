/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about a resource that another resource is related to or depends
   * on.</p> <p>For example, if a contact is a member of a rotation, the rotation is
   * a dependent entity of the contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DependentEntity">AWS
   * API Reference</a></p>
   */
  class DependentEntity
  {
  public:
    AWS_SSMCONTACTS_API DependentEntity() = default;
    AWS_SSMCONTACTS_API DependentEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API DependentEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline const Aws::String& GetRelationType() const { return m_relationType; }
    inline bool RelationTypeHasBeenSet() const { return m_relationTypeHasBeenSet; }
    template<typename RelationTypeT = Aws::String>
    void SetRelationType(RelationTypeT&& value) { m_relationTypeHasBeenSet = true; m_relationType = std::forward<RelationTypeT>(value); }
    template<typename RelationTypeT = Aws::String>
    DependentEntity& WithRelationType(RelationTypeT&& value) { SetRelationType(std::forward<RelationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependentResourceIds() const { return m_dependentResourceIds; }
    inline bool DependentResourceIdsHasBeenSet() const { return m_dependentResourceIdsHasBeenSet; }
    template<typename DependentResourceIdsT = Aws::Vector<Aws::String>>
    void SetDependentResourceIds(DependentResourceIdsT&& value) { m_dependentResourceIdsHasBeenSet = true; m_dependentResourceIds = std::forward<DependentResourceIdsT>(value); }
    template<typename DependentResourceIdsT = Aws::Vector<Aws::String>>
    DependentEntity& WithDependentResourceIds(DependentResourceIdsT&& value) { SetDependentResourceIds(std::forward<DependentResourceIdsT>(value)); return *this;}
    template<typename DependentResourceIdsT = Aws::String>
    DependentEntity& AddDependentResourceIds(DependentResourceIdsT&& value) { m_dependentResourceIdsHasBeenSet = true; m_dependentResourceIds.emplace_back(std::forward<DependentResourceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_relationType;
    bool m_relationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependentResourceIds;
    bool m_dependentResourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
