/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AssociationStatus.h>
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
   * <p>Describes a connection alias association that is used for cross-Region
   * redirection. For more information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
   * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ConnectionAliasAssociation">AWS
   * API Reference</a></p>
   */
  class ConnectionAliasAssociation
  {
  public:
    AWS_WORKSPACES_API ConnectionAliasAssociation() = default;
    AWS_WORKSPACES_API ConnectionAliasAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ConnectionAliasAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association status of the connection alias.</p>
     */
    inline AssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(AssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline ConnectionAliasAssociation& WithAssociationStatus(AssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline const Aws::String& GetAssociatedAccountId() const { return m_associatedAccountId; }
    inline bool AssociatedAccountIdHasBeenSet() const { return m_associatedAccountIdHasBeenSet; }
    template<typename AssociatedAccountIdT = Aws::String>
    void SetAssociatedAccountId(AssociatedAccountIdT&& value) { m_associatedAccountIdHasBeenSet = true; m_associatedAccountId = std::forward<AssociatedAccountIdT>(value); }
    template<typename AssociatedAccountIdT = Aws::String>
    ConnectionAliasAssociation& WithAssociatedAccountId(AssociatedAccountIdT&& value) { SetAssociatedAccountId(std::forward<AssociatedAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ConnectionAliasAssociation& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline const Aws::String& GetConnectionIdentifier() const { return m_connectionIdentifier; }
    inline bool ConnectionIdentifierHasBeenSet() const { return m_connectionIdentifierHasBeenSet; }
    template<typename ConnectionIdentifierT = Aws::String>
    void SetConnectionIdentifier(ConnectionIdentifierT&& value) { m_connectionIdentifierHasBeenSet = true; m_connectionIdentifier = std::forward<ConnectionIdentifierT>(value); }
    template<typename ConnectionIdentifierT = Aws::String>
    ConnectionAliasAssociation& WithConnectionIdentifier(ConnectionIdentifierT&& value) { SetConnectionIdentifier(std::forward<ConnectionIdentifierT>(value)); return *this;}
    ///@}
  private:

    AssociationStatus m_associationStatus{AssociationStatus::NOT_SET};
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_associatedAccountId;
    bool m_associatedAccountIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_connectionIdentifier;
    bool m_connectionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
