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
    AWS_MGN_API DescribeReplicationConfigurationTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplicationConfigurationTemplates"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Request to describe Replication Configuration template by max results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Request to describe Replication Configuration template by max results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Request to describe Replication Configuration template by max results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Request to describe Replication Configuration template by max results.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationConfigurationTemplateIDs() const{ return m_replicationConfigurationTemplateIDs; }

    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline bool ReplicationConfigurationTemplateIDsHasBeenSet() const { return m_replicationConfigurationTemplateIDsHasBeenSet; }

    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline void SetReplicationConfigurationTemplateIDs(const Aws::Vector<Aws::String>& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs = value; }

    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline void SetReplicationConfigurationTemplateIDs(Aws::Vector<Aws::String>&& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs = std::move(value); }

    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithReplicationConfigurationTemplateIDs(const Aws::Vector<Aws::String>& value) { SetReplicationConfigurationTemplateIDs(value); return *this;}

    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithReplicationConfigurationTemplateIDs(Aws::Vector<Aws::String>&& value) { SetReplicationConfigurationTemplateIDs(std::move(value)); return *this;}

    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& AddReplicationConfigurationTemplateIDs(const Aws::String& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs.push_back(value); return *this; }

    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& AddReplicationConfigurationTemplateIDs(Aws::String&& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Request to describe Replication Configuration template by template IDs.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& AddReplicationConfigurationTemplateIDs(const char* value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs.push_back(value); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationConfigurationTemplateIDs;
    bool m_replicationConfigurationTemplateIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
