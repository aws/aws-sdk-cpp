/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ConnectionAliasState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ConnectionAliasAssociation.h>
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
   * <p>Describes a connection alias. Connection aliases are used for cross-Region
   * redirection. For more information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
   * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ConnectionAlias">AWS
   * API Reference</a></p>
   */
  class ConnectionAlias
  {
  public:
    AWS_WORKSPACES_API ConnectionAlias();
    AWS_WORKSPACES_API ConnectionAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ConnectionAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The connection string specified for the connection alias. The connection
     * string must be in the form of a fully qualified domain name (FQDN), such as
     * <code>www.example.com</code>.</p>
     */
    inline const Aws::String& GetConnectionString() const{ return m_connectionString; }

    /**
     * <p>The connection string specified for the connection alias. The connection
     * string must be in the form of a fully qualified domain name (FQDN), such as
     * <code>www.example.com</code>.</p>
     */
    inline bool ConnectionStringHasBeenSet() const { return m_connectionStringHasBeenSet; }

    /**
     * <p>The connection string specified for the connection alias. The connection
     * string must be in the form of a fully qualified domain name (FQDN), such as
     * <code>www.example.com</code>.</p>
     */
    inline void SetConnectionString(const Aws::String& value) { m_connectionStringHasBeenSet = true; m_connectionString = value; }

    /**
     * <p>The connection string specified for the connection alias. The connection
     * string must be in the form of a fully qualified domain name (FQDN), such as
     * <code>www.example.com</code>.</p>
     */
    inline void SetConnectionString(Aws::String&& value) { m_connectionStringHasBeenSet = true; m_connectionString = std::move(value); }

    /**
     * <p>The connection string specified for the connection alias. The connection
     * string must be in the form of a fully qualified domain name (FQDN), such as
     * <code>www.example.com</code>.</p>
     */
    inline void SetConnectionString(const char* value) { m_connectionStringHasBeenSet = true; m_connectionString.assign(value); }

    /**
     * <p>The connection string specified for the connection alias. The connection
     * string must be in the form of a fully qualified domain name (FQDN), such as
     * <code>www.example.com</code>.</p>
     */
    inline ConnectionAlias& WithConnectionString(const Aws::String& value) { SetConnectionString(value); return *this;}

    /**
     * <p>The connection string specified for the connection alias. The connection
     * string must be in the form of a fully qualified domain name (FQDN), such as
     * <code>www.example.com</code>.</p>
     */
    inline ConnectionAlias& WithConnectionString(Aws::String&& value) { SetConnectionString(std::move(value)); return *this;}

    /**
     * <p>The connection string specified for the connection alias. The connection
     * string must be in the form of a fully qualified domain name (FQDN), such as
     * <code>www.example.com</code>.</p>
     */
    inline ConnectionAlias& WithConnectionString(const char* value) { SetConnectionString(value); return *this;}


    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline ConnectionAlias& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline ConnectionAlias& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline ConnectionAlias& WithAliasId(const char* value) { SetAliasId(value); return *this;}


    /**
     * <p>The current state of the connection alias.</p>
     */
    inline const ConnectionAliasState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the connection alias.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the connection alias.</p>
     */
    inline void SetState(const ConnectionAliasState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the connection alias.</p>
     */
    inline void SetState(ConnectionAliasState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the connection alias.</p>
     */
    inline ConnectionAlias& WithState(const ConnectionAliasState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the connection alias.</p>
     */
    inline ConnectionAlias& WithState(ConnectionAliasState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account that owns the connection
     * alias.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the connection
     * alias.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the connection
     * alias.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the connection
     * alias.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the connection
     * alias.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the connection
     * alias.</p>
     */
    inline ConnectionAlias& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that owns the connection
     * alias.</p>
     */
    inline ConnectionAlias& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that owns the connection
     * alias.</p>
     */
    inline ConnectionAlias& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The association status of the connection alias.</p>
     */
    inline const Aws::Vector<ConnectionAliasAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline void SetAssociations(const Aws::Vector<ConnectionAliasAssociation>& value) { m_associationsHasBeenSet = true; m_associations = value; }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline void SetAssociations(Aws::Vector<ConnectionAliasAssociation>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline ConnectionAlias& WithAssociations(const Aws::Vector<ConnectionAliasAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline ConnectionAlias& WithAssociations(Aws::Vector<ConnectionAliasAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline ConnectionAlias& AddAssociations(const ConnectionAliasAssociation& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }

    /**
     * <p>The association status of the connection alias.</p>
     */
    inline ConnectionAlias& AddAssociations(ConnectionAliasAssociation&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_connectionString;
    bool m_connectionStringHasBeenSet = false;

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    ConnectionAliasState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::Vector<ConnectionAliasAssociation> m_associations;
    bool m_associationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
