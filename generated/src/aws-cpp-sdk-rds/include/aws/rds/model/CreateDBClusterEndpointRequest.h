/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateDBClusterEndpointRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBClusterEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBClusterEndpoint"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    CreateDBClusterEndpointRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const { return m_dBClusterEndpointIdentifier; }
    inline bool DBClusterEndpointIdentifierHasBeenSet() const { return m_dBClusterEndpointIdentifierHasBeenSet; }
    template<typename DBClusterEndpointIdentifierT = Aws::String>
    void SetDBClusterEndpointIdentifier(DBClusterEndpointIdentifierT&& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = std::forward<DBClusterEndpointIdentifierT>(value); }
    template<typename DBClusterEndpointIdentifierT = Aws::String>
    CreateDBClusterEndpointRequest& WithDBClusterEndpointIdentifier(DBClusterEndpointIdentifierT&& value) { SetDBClusterEndpointIdentifier(std::forward<DBClusterEndpointIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the endpoint, one of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline const Aws::String& GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    template<typename EndpointTypeT = Aws::String>
    void SetEndpointType(EndpointTypeT&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::forward<EndpointTypeT>(value); }
    template<typename EndpointTypeT = Aws::String>
    CreateDBClusterEndpointRequest& WithEndpointType(EndpointTypeT&& value) { SetEndpointType(std::forward<EndpointTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticMembers() const { return m_staticMembers; }
    inline bool StaticMembersHasBeenSet() const { return m_staticMembersHasBeenSet; }
    template<typename StaticMembersT = Aws::Vector<Aws::String>>
    void SetStaticMembers(StaticMembersT&& value) { m_staticMembersHasBeenSet = true; m_staticMembers = std::forward<StaticMembersT>(value); }
    template<typename StaticMembersT = Aws::Vector<Aws::String>>
    CreateDBClusterEndpointRequest& WithStaticMembers(StaticMembersT&& value) { SetStaticMembers(std::forward<StaticMembersT>(value)); return *this;}
    template<typename StaticMembersT = Aws::String>
    CreateDBClusterEndpointRequest& AddStaticMembers(StaticMembersT&& value) { m_staticMembersHasBeenSet = true; m_staticMembers.emplace_back(std::forward<StaticMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * This parameter is relevant only if the list of static members is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedMembers() const { return m_excludedMembers; }
    inline bool ExcludedMembersHasBeenSet() const { return m_excludedMembersHasBeenSet; }
    template<typename ExcludedMembersT = Aws::Vector<Aws::String>>
    void SetExcludedMembers(ExcludedMembersT&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers = std::forward<ExcludedMembersT>(value); }
    template<typename ExcludedMembersT = Aws::Vector<Aws::String>>
    CreateDBClusterEndpointRequest& WithExcludedMembers(ExcludedMembersT&& value) { SetExcludedMembers(std::forward<ExcludedMembersT>(value)); return *this;}
    template<typename ExcludedMembersT = Aws::String>
    CreateDBClusterEndpointRequest& AddExcludedMembers(ExcludedMembersT&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.emplace_back(std::forward<ExcludedMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the Amazon RDS resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDBClusterEndpointRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDBClusterEndpointRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_dBClusterEndpointIdentifier;
    bool m_dBClusterEndpointIdentifierHasBeenSet = false;

    Aws::String m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_staticMembers;
    bool m_staticMembersHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedMembers;
    bool m_excludedMembersHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
