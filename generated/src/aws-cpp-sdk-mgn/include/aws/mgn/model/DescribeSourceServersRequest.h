/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/DescribeSourceServersRequestFilters.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DescribeSourceServersRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DescribeSourceServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSourceServers"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Request to filter Source Servers list by Accoun ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }
    inline DescribeSourceServersRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}
    inline DescribeSourceServersRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}
    inline DescribeSourceServersRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list.</p>
     */
    inline const DescribeSourceServersRequestFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const DescribeSourceServersRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(DescribeSourceServersRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeSourceServersRequest& WithFilters(const DescribeSourceServersRequestFilters& value) { SetFilters(value); return *this;}
    inline DescribeSourceServersRequest& WithFilters(DescribeSourceServersRequestFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by maximum results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSourceServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeSourceServersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSourceServersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSourceServersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    DescribeSourceServersRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
