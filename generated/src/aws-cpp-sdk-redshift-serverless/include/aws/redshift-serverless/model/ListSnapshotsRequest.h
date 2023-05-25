/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class ListSnapshotsRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSnapshots"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The timestamp showing when the snapshot creation finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp showing when the snapshot creation finished.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp showing when the snapshot creation finished.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp showing when the snapshot creation finished.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp showing when the snapshot creation finished.</p>
     */
    inline ListSnapshotsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp showing when the snapshot creation finished.</p>
     */
    inline ListSnapshotsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to display the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to display the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to display the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to display the next page of results.</p>
     */
    inline ListSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the namespace from which to list all
     * snapshots.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace from which to list all
     * snapshots.</p>
     */
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace from which to list all
     * snapshots.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace from which to list all
     * snapshots.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace from which to list all
     * snapshots.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArnHasBeenSet = true; m_namespaceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace from which to list all
     * snapshots.</p>
     */
    inline ListSnapshotsRequest& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace from which to list all
     * snapshots.</p>
     */
    inline ListSnapshotsRequest& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace from which to list all
     * snapshots.</p>
     */
    inline ListSnapshotsRequest& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The namespace from which to list all snapshots.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The namespace from which to list all snapshots.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The namespace from which to list all snapshots.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The namespace from which to list all snapshots.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The namespace from which to list all snapshots.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The namespace from which to list all snapshots.</p>
     */
    inline ListSnapshotsRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The namespace from which to list all snapshots.</p>
     */
    inline ListSnapshotsRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The namespace from which to list all snapshots.</p>
     */
    inline ListSnapshotsRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The owner Amazon Web Services account of the snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The owner Amazon Web Services account of the snapshot.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The owner Amazon Web Services account of the snapshot.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The owner Amazon Web Services account of the snapshot.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The owner Amazon Web Services account of the snapshot.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The owner Amazon Web Services account of the snapshot.</p>
     */
    inline ListSnapshotsRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner Amazon Web Services account of the snapshot.</p>
     */
    inline ListSnapshotsRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The owner Amazon Web Services account of the snapshot.</p>
     */
    inline ListSnapshotsRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The time when the creation of the snapshot was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time when the creation of the snapshot was initiated.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time when the creation of the snapshot was initiated.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time when the creation of the snapshot was initiated.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time when the creation of the snapshot was initiated.</p>
     */
    inline ListSnapshotsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time when the creation of the snapshot was initiated.</p>
     */
    inline ListSnapshotsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
