/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/MembershipAccountRelationshipStatus.h>
#include <aws/security-ir/model/MembershipAccountRelationshipType.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/GetMembershipAccountDetailItem">AWS
   * API Reference</a></p>
   */
  class GetMembershipAccountDetailItem
  {
  public:
    AWS_SECURITYIR_API GetMembershipAccountDetailItem();
    AWS_SECURITYIR_API GetMembershipAccountDetailItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API GetMembershipAccountDetailItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline GetMembershipAccountDetailItem& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline GetMembershipAccountDetailItem& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline GetMembershipAccountDetailItem& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const MembershipAccountRelationshipStatus& GetRelationshipStatus() const{ return m_relationshipStatus; }
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }
    inline void SetRelationshipStatus(const MembershipAccountRelationshipStatus& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }
    inline void SetRelationshipStatus(MembershipAccountRelationshipStatus&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }
    inline GetMembershipAccountDetailItem& WithRelationshipStatus(const MembershipAccountRelationshipStatus& value) { SetRelationshipStatus(value); return *this;}
    inline GetMembershipAccountDetailItem& WithRelationshipStatus(MembershipAccountRelationshipStatus&& value) { SetRelationshipStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const MembershipAccountRelationshipType& GetRelationshipType() const{ return m_relationshipType; }
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }
    inline void SetRelationshipType(const MembershipAccountRelationshipType& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }
    inline void SetRelationshipType(MembershipAccountRelationshipType&& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = std::move(value); }
    inline GetMembershipAccountDetailItem& WithRelationshipType(const MembershipAccountRelationshipType& value) { SetRelationshipType(value); return *this;}
    inline GetMembershipAccountDetailItem& WithRelationshipType(MembershipAccountRelationshipType&& value) { SetRelationshipType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    MembershipAccountRelationshipStatus m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet = false;

    MembershipAccountRelationshipType m_relationshipType;
    bool m_relationshipTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
