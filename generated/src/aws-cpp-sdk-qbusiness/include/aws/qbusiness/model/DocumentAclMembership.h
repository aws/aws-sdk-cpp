/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/MemberRelation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DocumentAclCondition.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Represents membership rules in the document's ACL, defining how users or
   * groups are associated with access permissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAclMembership">AWS
   * API Reference</a></p>
   */
  class DocumentAclMembership
  {
  public:
    AWS_QBUSINESS_API DocumentAclMembership() = default;
    AWS_QBUSINESS_API DocumentAclMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAclMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical relation between members in the membership rule, determining how
     * multiple conditions are combined.</p>
     */
    inline MemberRelation GetMemberRelation() const { return m_memberRelation; }
    inline bool MemberRelationHasBeenSet() const { return m_memberRelationHasBeenSet; }
    inline void SetMemberRelation(MemberRelation value) { m_memberRelationHasBeenSet = true; m_memberRelation = value; }
    inline DocumentAclMembership& WithMemberRelation(MemberRelation value) { SetMemberRelation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of conditions that define the membership rules. Each condition
     * specifies criteria for users or groups to be included in this membership.</p>
     */
    inline const Aws::Vector<DocumentAclCondition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<DocumentAclCondition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<DocumentAclCondition>>
    DocumentAclMembership& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = DocumentAclCondition>
    DocumentAclMembership& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}
  private:

    MemberRelation m_memberRelation{MemberRelation::NOT_SET};
    bool m_memberRelationHasBeenSet = false;

    Aws::Vector<DocumentAclCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
