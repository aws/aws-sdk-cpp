/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class ListQualificationTypesRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API ListQualificationTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQualificationTypes"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline const Aws::String& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = Aws::String>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = Aws::String>
    ListQualificationTypesRequest& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that only Qualification types that a user can request through the
     * Amazon Mechanical Turk web site, such as by taking a Qualification test, are
     * returned as results of the search. Some Qualification types, such as those
     * assigned automatically by the system, cannot be requested directly by users. If
     * false, all Qualification types, including those managed by the system, are
     * considered. Valid values are True | False. </p>
     */
    inline bool GetMustBeRequestable() const { return m_mustBeRequestable; }
    inline bool MustBeRequestableHasBeenSet() const { return m_mustBeRequestableHasBeenSet; }
    inline void SetMustBeRequestable(bool value) { m_mustBeRequestableHasBeenSet = true; m_mustBeRequestable = value; }
    inline ListQualificationTypesRequest& WithMustBeRequestable(bool value) { SetMustBeRequestable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies that only Qualification types that the Requester created are
     * returned. If false, the operation returns all Qualification types. </p>
     */
    inline bool GetMustBeOwnedByCaller() const { return m_mustBeOwnedByCaller; }
    inline bool MustBeOwnedByCallerHasBeenSet() const { return m_mustBeOwnedByCallerHasBeenSet; }
    inline void SetMustBeOwnedByCaller(bool value) { m_mustBeOwnedByCallerHasBeenSet = true; m_mustBeOwnedByCaller = value; }
    inline ListQualificationTypesRequest& WithMustBeOwnedByCaller(bool value) { SetMustBeOwnedByCaller(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQualificationTypesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListQualificationTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    bool m_mustBeRequestable{false};
    bool m_mustBeRequestableHasBeenSet = false;

    bool m_mustBeOwnedByCaller{false};
    bool m_mustBeOwnedByCallerHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
