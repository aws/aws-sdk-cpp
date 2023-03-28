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
    AWS_SSMCONTACTS_API DependentEntity();
    AWS_SSMCONTACTS_API DependentEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API DependentEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline const Aws::String& GetRelationType() const{ return m_relationType; }

    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline bool RelationTypeHasBeenSet() const { return m_relationTypeHasBeenSet; }

    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline void SetRelationType(const Aws::String& value) { m_relationTypeHasBeenSet = true; m_relationType = value; }

    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline void SetRelationType(Aws::String&& value) { m_relationTypeHasBeenSet = true; m_relationType = std::move(value); }

    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline void SetRelationType(const char* value) { m_relationTypeHasBeenSet = true; m_relationType.assign(value); }

    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline DependentEntity& WithRelationType(const Aws::String& value) { SetRelationType(value); return *this;}

    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline DependentEntity& WithRelationType(Aws::String&& value) { SetRelationType(std::move(value)); return *this;}

    /**
     * <p>The type of relationship between one resource and the other resource that it
     * is related to or depends on.</p>
     */
    inline DependentEntity& WithRelationType(const char* value) { SetRelationType(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependentResourceIds() const{ return m_dependentResourceIds; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline bool DependentResourceIdsHasBeenSet() const { return m_dependentResourceIdsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline void SetDependentResourceIds(const Aws::Vector<Aws::String>& value) { m_dependentResourceIdsHasBeenSet = true; m_dependentResourceIds = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline void SetDependentResourceIds(Aws::Vector<Aws::String>&& value) { m_dependentResourceIdsHasBeenSet = true; m_dependentResourceIds = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline DependentEntity& WithDependentResourceIds(const Aws::Vector<Aws::String>& value) { SetDependentResourceIds(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline DependentEntity& WithDependentResourceIds(Aws::Vector<Aws::String>&& value) { SetDependentResourceIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline DependentEntity& AddDependentResourceIds(const Aws::String& value) { m_dependentResourceIdsHasBeenSet = true; m_dependentResourceIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline DependentEntity& AddDependentResourceIds(Aws::String&& value) { m_dependentResourceIdsHasBeenSet = true; m_dependentResourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the dependent resources.</p>
     */
    inline DependentEntity& AddDependentResourceIds(const char* value) { m_dependentResourceIdsHasBeenSet = true; m_dependentResourceIds.push_back(value); return *this; }

  private:

    Aws::String m_relationType;
    bool m_relationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependentResourceIds;
    bool m_dependentResourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
