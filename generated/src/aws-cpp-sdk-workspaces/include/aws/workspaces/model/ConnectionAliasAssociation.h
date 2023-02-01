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
    AWS_WORKSPACES_API ConnectionAliasAssociation();
    AWS_WORKSPACES_API ConnectionAliasAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ConnectionAliasAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The association status of the connection alias.</p>
     */
    inline const AssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline void SetAssociationStatus(const AssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline void SetAssociationStatus(AssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline ConnectionAliasAssociation& WithAssociationStatus(const AssociationStatus& value) { SetAssociationStatus(value); return *this;}

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline ConnectionAliasAssociation& WithAssociationStatus(AssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline const Aws::String& GetAssociatedAccountId() const{ return m_associatedAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline bool AssociatedAccountIdHasBeenSet() const { return m_associatedAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline void SetAssociatedAccountId(const Aws::String& value) { m_associatedAccountIdHasBeenSet = true; m_associatedAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline void SetAssociatedAccountId(Aws::String&& value) { m_associatedAccountIdHasBeenSet = true; m_associatedAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline void SetAssociatedAccountId(const char* value) { m_associatedAccountIdHasBeenSet = true; m_associatedAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline ConnectionAliasAssociation& WithAssociatedAccountId(const Aws::String& value) { SetAssociatedAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline ConnectionAliasAssociation& WithAssociatedAccountId(Aws::String&& value) { SetAssociatedAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that associated the
     * connection alias with a directory.</p>
     */
    inline ConnectionAliasAssociation& WithAssociatedAccountId(const char* value) { SetAssociatedAccountId(value); return *this;}


    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline ConnectionAliasAssociation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline ConnectionAliasAssociation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory associated with a connection alias.</p>
     */
    inline ConnectionAliasAssociation& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline const Aws::String& GetConnectionIdentifier() const{ return m_connectionIdentifier; }

    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline bool ConnectionIdentifierHasBeenSet() const { return m_connectionIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline void SetConnectionIdentifier(const Aws::String& value) { m_connectionIdentifierHasBeenSet = true; m_connectionIdentifier = value; }

    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline void SetConnectionIdentifier(Aws::String&& value) { m_connectionIdentifierHasBeenSet = true; m_connectionIdentifier = std::move(value); }

    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline void SetConnectionIdentifier(const char* value) { m_connectionIdentifierHasBeenSet = true; m_connectionIdentifier.assign(value); }

    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline ConnectionAliasAssociation& WithConnectionIdentifier(const Aws::String& value) { SetConnectionIdentifier(value); return *this;}

    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline ConnectionAliasAssociation& WithConnectionIdentifier(Aws::String&& value) { SetConnectionIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies.</p>
     */
    inline ConnectionAliasAssociation& WithConnectionIdentifier(const char* value) { SetConnectionIdentifier(value); return *this;}

  private:

    AssociationStatus m_associationStatus;
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
