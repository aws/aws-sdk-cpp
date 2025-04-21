/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/DocumentAclMembership.h>
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
   * <p>Represents the Access Control List (ACL) for a document, containing both
   * allowlist and denylist conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAcl">AWS
   * API Reference</a></p>
   */
  class DocumentAcl
  {
  public:
    AWS_QBUSINESS_API DocumentAcl() = default;
    AWS_QBUSINESS_API DocumentAcl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAcl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The allowlist conditions for the document. Users or groups matching these
     * conditions are granted access to the document.</p>
     */
    inline const DocumentAclMembership& GetAllowlist() const { return m_allowlist; }
    inline bool AllowlistHasBeenSet() const { return m_allowlistHasBeenSet; }
    template<typename AllowlistT = DocumentAclMembership>
    void SetAllowlist(AllowlistT&& value) { m_allowlistHasBeenSet = true; m_allowlist = std::forward<AllowlistT>(value); }
    template<typename AllowlistT = DocumentAclMembership>
    DocumentAcl& WithAllowlist(AllowlistT&& value) { SetAllowlist(std::forward<AllowlistT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The denylist conditions for the document. Users or groups matching these
     * conditions are denied access to the document, overriding allowlist
     * permissions.</p>
     */
    inline const DocumentAclMembership& GetDenyList() const { return m_denyList; }
    inline bool DenyListHasBeenSet() const { return m_denyListHasBeenSet; }
    template<typename DenyListT = DocumentAclMembership>
    void SetDenyList(DenyListT&& value) { m_denyListHasBeenSet = true; m_denyList = std::forward<DenyListT>(value); }
    template<typename DenyListT = DocumentAclMembership>
    DocumentAcl& WithDenyList(DenyListT&& value) { SetDenyList(std::forward<DenyListT>(value)); return *this;}
    ///@}
  private:

    DocumentAclMembership m_allowlist;
    bool m_allowlistHasBeenSet = false;

    DocumentAclMembership m_denyList;
    bool m_denyListHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
