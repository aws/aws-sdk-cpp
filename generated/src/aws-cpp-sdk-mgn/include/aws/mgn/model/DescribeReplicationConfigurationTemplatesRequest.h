/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DescribeReplicationConfigurationTemplatesRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DescribeReplicationConfigurationTemplatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplicationConfigurationTemplates"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Request to describe Replication Configuration template by max results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeReplicationConfigurationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReplicationConfigurationTemplatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationConfigurationTemplateIDs() const { return m_replicationConfigurationTemplateIDs; }
    inline bool ReplicationConfigurationTemplateIDsHasBeenSet() const { return m_replicationConfigurationTemplateIDsHasBeenSet; }
    template<typename ReplicationConfigurationTemplateIDsT = Aws::Vector<Aws::String>>
    void SetReplicationConfigurationTemplateIDs(ReplicationConfigurationTemplateIDsT&& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs = std::forward<ReplicationConfigurationTemplateIDsT>(value); }
    template<typename ReplicationConfigurationTemplateIDsT = Aws::Vector<Aws::String>>
    DescribeReplicationConfigurationTemplatesRequest& WithReplicationConfigurationTemplateIDs(ReplicationConfigurationTemplateIDsT&& value) { SetReplicationConfigurationTemplateIDs(std::forward<ReplicationConfigurationTemplateIDsT>(value)); return *this;}
    template<typename ReplicationConfigurationTemplateIDsT = Aws::String>
    DescribeReplicationConfigurationTemplatesRequest& AddReplicationConfigurationTemplateIDs(ReplicationConfigurationTemplateIDsT&& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs.emplace_back(std::forward<ReplicationConfigurationTemplateIDsT>(value)); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationConfigurationTemplateIDs;
    bool m_replicationConfigurationTemplateIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
