/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ReadAccessType.h>
#include <aws/qbusiness/model/MembershipType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides information about a group associated with the
   * principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PrincipalGroup">AWS
   * API Reference</a></p>
   */
  class PrincipalGroup
  {
  public:
    AWS_QBUSINESS_API PrincipalGroup();
    AWS_QBUSINESS_API PrincipalGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PrincipalGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides information about whether to allow or deny access to the
     * principal.</p>
     */
    inline const ReadAccessType& GetAccess() const{ return m_access; }

    /**
     * <p>Provides information about whether to allow or deny access to the
     * principal.</p>
     */
    inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }

    /**
     * <p>Provides information about whether to allow or deny access to the
     * principal.</p>
     */
    inline void SetAccess(const ReadAccessType& value) { m_accessHasBeenSet = true; m_access = value; }

    /**
     * <p>Provides information about whether to allow or deny access to the
     * principal.</p>
     */
    inline void SetAccess(ReadAccessType&& value) { m_accessHasBeenSet = true; m_access = std::move(value); }

    /**
     * <p>Provides information about whether to allow or deny access to the
     * principal.</p>
     */
    inline PrincipalGroup& WithAccess(const ReadAccessType& value) { SetAccess(value); return *this;}

    /**
     * <p>Provides information about whether to allow or deny access to the
     * principal.</p>
     */
    inline PrincipalGroup& WithAccess(ReadAccessType&& value) { SetAccess(std::move(value)); return *this;}


    /**
     * <p>The type of group.</p>
     */
    inline const MembershipType& GetMembershipType() const{ return m_membershipType; }

    /**
     * <p>The type of group.</p>
     */
    inline bool MembershipTypeHasBeenSet() const { return m_membershipTypeHasBeenSet; }

    /**
     * <p>The type of group.</p>
     */
    inline void SetMembershipType(const MembershipType& value) { m_membershipTypeHasBeenSet = true; m_membershipType = value; }

    /**
     * <p>The type of group.</p>
     */
    inline void SetMembershipType(MembershipType&& value) { m_membershipTypeHasBeenSet = true; m_membershipType = std::move(value); }

    /**
     * <p>The type of group.</p>
     */
    inline PrincipalGroup& WithMembershipType(const MembershipType& value) { SetMembershipType(value); return *this;}

    /**
     * <p>The type of group.</p>
     */
    inline PrincipalGroup& WithMembershipType(MembershipType&& value) { SetMembershipType(std::move(value)); return *this;}


    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline PrincipalGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline PrincipalGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline PrincipalGroup& WithName(const char* value) { SetName(value); return *this;}

  private:

    ReadAccessType m_access;
    bool m_accessHasBeenSet = false;

    MembershipType m_membershipType;
    bool m_membershipTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
