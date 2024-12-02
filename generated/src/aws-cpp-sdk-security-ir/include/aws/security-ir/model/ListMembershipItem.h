/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/AwsRegion.h>
#include <aws/security-ir/model/MembershipStatus.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ListMembershipItem">AWS
   * API Reference</a></p>
   */
  class ListMembershipItem
  {
  public:
    AWS_SECURITYIR_API ListMembershipItem();
    AWS_SECURITYIR_API ListMembershipItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API ListMembershipItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline ListMembershipItem& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline ListMembershipItem& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline ListMembershipItem& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ListMembershipItem& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ListMembershipItem& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ListMembershipItem& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const AwsRegion& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const AwsRegion& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(AwsRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline ListMembershipItem& WithRegion(const AwsRegion& value) { SetRegion(value); return *this;}
    inline ListMembershipItem& WithRegion(AwsRegion&& value) { SetRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }
    inline ListMembershipItem& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline ListMembershipItem& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline ListMembershipItem& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const MembershipStatus& GetMembershipStatus() const{ return m_membershipStatus; }
    inline bool MembershipStatusHasBeenSet() const { return m_membershipStatusHasBeenSet; }
    inline void SetMembershipStatus(const MembershipStatus& value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = value; }
    inline void SetMembershipStatus(MembershipStatus&& value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = std::move(value); }
    inline ListMembershipItem& WithMembershipStatus(const MembershipStatus& value) { SetMembershipStatus(value); return *this;}
    inline ListMembershipItem& WithMembershipStatus(MembershipStatus&& value) { SetMembershipStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AwsRegion m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    MembershipStatus m_membershipStatus;
    bool m_membershipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
