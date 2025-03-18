/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the permissions for a connection alias. Connection aliases are used
   * for cross-Region redirection. For more information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
   * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ConnectionAliasPermission">AWS
   * API Reference</a></p>
   */
  class ConnectionAliasPermission
  {
  public:
    AWS_WORKSPACES_API ConnectionAliasPermission() = default;
    AWS_WORKSPACES_API ConnectionAliasPermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ConnectionAliasPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline const Aws::String& GetSharedAccountId() const { return m_sharedAccountId; }
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }
    template<typename SharedAccountIdT = Aws::String>
    void SetSharedAccountId(SharedAccountIdT&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::forward<SharedAccountIdT>(value); }
    template<typename SharedAccountIdT = Aws::String>
    ConnectionAliasPermission& WithSharedAccountId(SharedAccountIdT&& value) { SetSharedAccountId(std::forward<SharedAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the specified Amazon Web Services account is allowed to
     * associate the connection alias with a directory.</p>
     */
    inline bool GetAllowAssociation() const { return m_allowAssociation; }
    inline bool AllowAssociationHasBeenSet() const { return m_allowAssociationHasBeenSet; }
    inline void SetAllowAssociation(bool value) { m_allowAssociationHasBeenSet = true; m_allowAssociation = value; }
    inline ConnectionAliasPermission& WithAllowAssociation(bool value) { SetAllowAssociation(value); return *this;}
    ///@}
  private:

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;

    bool m_allowAssociation{false};
    bool m_allowAssociationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
