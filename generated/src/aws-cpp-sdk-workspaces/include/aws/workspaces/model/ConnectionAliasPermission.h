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
    AWS_WORKSPACES_API ConnectionAliasPermission();
    AWS_WORKSPACES_API ConnectionAliasPermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ConnectionAliasPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline const Aws::String& GetSharedAccountId() const{ return m_sharedAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline void SetSharedAccountId(const Aws::String& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline void SetSharedAccountId(Aws::String&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline void SetSharedAccountId(const char* value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline ConnectionAliasPermission& WithSharedAccountId(const Aws::String& value) { SetSharedAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline ConnectionAliasPermission& WithSharedAccountId(Aws::String&& value) { SetSharedAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that the connection alias
     * is shared with.</p>
     */
    inline ConnectionAliasPermission& WithSharedAccountId(const char* value) { SetSharedAccountId(value); return *this;}


    /**
     * <p>Indicates whether the specified Amazon Web Services account is allowed to
     * associate the connection alias with a directory.</p>
     */
    inline bool GetAllowAssociation() const{ return m_allowAssociation; }

    /**
     * <p>Indicates whether the specified Amazon Web Services account is allowed to
     * associate the connection alias with a directory.</p>
     */
    inline bool AllowAssociationHasBeenSet() const { return m_allowAssociationHasBeenSet; }

    /**
     * <p>Indicates whether the specified Amazon Web Services account is allowed to
     * associate the connection alias with a directory.</p>
     */
    inline void SetAllowAssociation(bool value) { m_allowAssociationHasBeenSet = true; m_allowAssociation = value; }

    /**
     * <p>Indicates whether the specified Amazon Web Services account is allowed to
     * associate the connection alias with a directory.</p>
     */
    inline ConnectionAliasPermission& WithAllowAssociation(bool value) { SetAllowAssociation(value); return *this;}

  private:

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;

    bool m_allowAssociation;
    bool m_allowAssociationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
