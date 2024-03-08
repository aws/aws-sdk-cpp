/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/LogSourceResource.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class ListLogSourcesRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API ListLogSourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLogSources"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline ListLogSourcesRequest& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline ListLogSourcesRequest& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline ListLogSourcesRequest& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline ListLogSourcesRequest& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Web Services accounts for which log sources are
     * displayed.</p>
     */
    inline ListLogSourcesRequest& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }


    /**
     * <p>The maximum number of accounts for which the log sources are displayed.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of accounts for which the log sources are displayed.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of accounts for which the log sources are displayed.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of accounts for which the log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Regions for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    /**
     * <p>The list of sources for which log sources are displayed.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const{ return m_sources; }

    /**
     * <p>The list of sources for which log sources are displayed.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The list of sources for which log sources are displayed.</p>
     */
    inline void SetSources(const Aws::Vector<LogSourceResource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The list of sources for which log sources are displayed.</p>
     */
    inline void SetSources(Aws::Vector<LogSourceResource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The list of sources for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& WithSources(const Aws::Vector<LogSourceResource>& value) { SetSources(value); return *this;}

    /**
     * <p>The list of sources for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& WithSources(Aws::Vector<LogSourceResource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The list of sources for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& AddSources(const LogSourceResource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The list of sources for which log sources are displayed.</p>
     */
    inline ListLogSourcesRequest& AddSources(LogSourceResource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::Vector<LogSourceResource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
