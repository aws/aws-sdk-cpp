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
    AWS_QBUSINESS_API AccessControl();
    AWS_QBUSINESS_API AccessControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AccessControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a list of principals, where a principal can be either a
     * <code>USER</code> or a <code>GROUP</code>. Each principal can be have the
     * following type of document access: <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const Aws::Vector<Principal>& GetPrincipals() const{ return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    inline void SetPrincipals(const Aws::Vector<Principal>& value) { m_principalsHasBeenSet = true; m_principals = value; }
    inline void SetPrincipals(Aws::Vector<Principal>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }
    inline AccessControl& WithPrincipals(const Aws::Vector<Principal>& value) { SetPrincipals(value); return *this;}
    inline AccessControl& WithPrincipals(Aws::Vector<Principal>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline AccessControl& AddPrincipals(const Principal& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    inline AccessControl& AddPrincipals(Principal&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the member relation within a principal list.</p>
     */
    inline const MemberRelation& GetMemberRelation() const{ return m_memberRelation; }
    inline bool MemberRelationHasBeenSet() const { return m_memberRelationHasBeenSet; }
    inline void SetMemberRelation(const MemberRelation& value) { m_memberRelationHasBeenSet = true; m_memberRelation = value; }
    inline void SetMemberRelation(MemberRelation&& value) { m_memberRelationHasBeenSet = true; m_memberRelation = std::move(value); }
    inline AccessControl& WithMemberRelation(const MemberRelation& value) { SetMemberRelation(value); return *this;}
    inline AccessControl& WithMemberRelation(MemberRelation&& value) { SetMemberRelation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Principal> m_principals;
    bool m_principalsHasBeenSet = false;

    MemberRelation m_memberRelation;
    bool m_memberRelationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
