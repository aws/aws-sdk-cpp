/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ReadAccessType.h>
#include <aws/qbusiness/model/MembershipType.h>
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
    AWS_QBUSINESS_API PrincipalGroup() = default;
    AWS_QBUSINESS_API PrincipalGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PrincipalGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PrincipalGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about whether to allow or deny access to the
     * principal.</p>
     */
    inline ReadAccessType GetAccess() const { return m_access; }
    inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }
    inline void SetAccess(ReadAccessType value) { m_accessHasBeenSet = true; m_access = value; }
    inline PrincipalGroup& WithAccess(ReadAccessType value) { SetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of group.</p>
     */
    inline MembershipType GetMembershipType() const { return m_membershipType; }
    inline bool MembershipTypeHasBeenSet() const { return m_membershipTypeHasBeenSet; }
    inline void SetMembershipType(MembershipType value) { m_membershipTypeHasBeenSet = true; m_membershipType = value; }
    inline PrincipalGroup& WithMembershipType(MembershipType value) { SetMembershipType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReadAccessType m_access{ReadAccessType::NOT_SET};
    bool m_accessHasBeenSet = false;

    MembershipType m_membershipType{MembershipType::NOT_SET};
    bool m_membershipTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
