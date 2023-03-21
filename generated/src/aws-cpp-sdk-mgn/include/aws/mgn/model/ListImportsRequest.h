/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/ListImportsRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   * <p>List imports request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListImportsRequest">AWS
   * API Reference</a></p>
   */
  class ListImportsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API ListImportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImports"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>List imports request filters.</p>
     */
    inline const ListImportsRequestFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>List imports request filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>List imports request filters.</p>
     */
    inline void SetFilters(const ListImportsRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>List imports request filters.</p>
     */
    inline void SetFilters(ListImportsRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>List imports request filters.</p>
     */
    inline ListImportsRequest& WithFilters(const ListImportsRequestFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>List imports request filters.</p>
     */
    inline ListImportsRequest& WithFilters(ListImportsRequestFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>List imports request max results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>List imports request max results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>List imports request max results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>List imports request max results.</p>
     */
    inline ListImportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>List imports request next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List imports request next token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>List imports request next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>List imports request next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>List imports request next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>List imports request next token.</p>
     */
    inline ListImportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List imports request next token.</p>
     */
    inline ListImportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List imports request next token.</p>
     */
    inline ListImportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ListImportsRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
