/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/MemberRelation.h>
#include <aws/qbusiness/model/Principal.h>
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
   * <p>A list of principals. Each principal can be either a <code>USER</code> or a
   * <code>GROUP</code> and can be designated document access permissions of either
   * <code>ALLOW</code> or <code>DENY</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AccessControl">AWS
   * API Reference</a></p>
   */
  class AccessControl
  {
  public:
    AWS_QBUSINESS_API AccessControl() = default;
    AWS_QBUSINESS_API AccessControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AccessControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a list of principals, where a principal can be either a
     * <code>USER</code> or a <code>GROUP</code>. Each principal can be have the
     * following type of document access: <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const Aws::Vector<Principal>& GetPrincipals() const { return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    template<typename PrincipalsT = Aws::Vector<Principal>>
    void SetPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals = std::forward<PrincipalsT>(value); }
    template<typename PrincipalsT = Aws::Vector<Principal>>
    AccessControl& WithPrincipals(PrincipalsT&& value) { SetPrincipals(std::forward<PrincipalsT>(value)); return *this;}
    template<typename PrincipalsT = Principal>
    AccessControl& AddPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals.emplace_back(std::forward<PrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the member relation within a principal list.</p>
     */
    inline MemberRelation GetMemberRelation() const { return m_memberRelation; }
    inline bool MemberRelationHasBeenSet() const { return m_memberRelationHasBeenSet; }
    inline void SetMemberRelation(MemberRelation value) { m_memberRelationHasBeenSet = true; m_memberRelation = value; }
    inline AccessControl& WithMemberRelation(MemberRelation value) { SetMemberRelation(value); return *this;}
    ///@}
  private:

    Aws::Vector<Principal> m_principals;
    bool m_principalsHasBeenSet = false;

    MemberRelation m_memberRelation{MemberRelation::NOT_SET};
    bool m_memberRelationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
