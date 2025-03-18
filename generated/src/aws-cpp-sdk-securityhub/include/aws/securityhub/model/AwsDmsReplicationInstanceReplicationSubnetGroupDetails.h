/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about the replication subnet group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDmsReplicationInstanceReplicationSubnetGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsDmsReplicationInstanceReplicationSubnetGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceReplicationSubnetGroupDetails() = default;
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceReplicationSubnetGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceReplicationSubnetGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the replication subnet group. </p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const { return m_replicationSubnetGroupIdentifier; }
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }
    template<typename ReplicationSubnetGroupIdentifierT = Aws::String>
    void SetReplicationSubnetGroupIdentifier(ReplicationSubnetGroupIdentifierT&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::forward<ReplicationSubnetGroupIdentifierT>(value); }
    template<typename ReplicationSubnetGroupIdentifierT = Aws::String>
    AwsDmsReplicationInstanceReplicationSubnetGroupDetails& WithReplicationSubnetGroupIdentifier(ReplicationSubnetGroupIdentifierT&& value) { SetReplicationSubnetGroupIdentifier(std::forward<ReplicationSubnetGroupIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
