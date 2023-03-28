/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class ListRotationsRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ListRotationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRotations"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter to include rotations in list results based on their common prefix.
     * For example, entering prod returns a list of all rotation names that begin with
     * <code>prod</code>, such as <code>production</code> and <code>prod-1</code>.</p>
     */
    inline const Aws::String& GetRotationNamePrefix() const{ return m_rotationNamePrefix; }

    /**
     * <p>A filter to include rotations in list results based on their common prefix.
     * For example, entering prod returns a list of all rotation names that begin with
     * <code>prod</code>, such as <code>production</code> and <code>prod-1</code>.</p>
     */
    inline bool RotationNamePrefixHasBeenSet() const { return m_rotationNamePrefixHasBeenSet; }

    /**
     * <p>A filter to include rotations in list results based on their common prefix.
     * For example, entering prod returns a list of all rotation names that begin with
     * <code>prod</code>, such as <code>production</code> and <code>prod-1</code>.</p>
     */
    inline void SetRotationNamePrefix(const Aws::String& value) { m_rotationNamePrefixHasBeenSet = true; m_rotationNamePrefix = value; }

    /**
     * <p>A filter to include rotations in list results based on their common prefix.
     * For example, entering prod returns a list of all rotation names that begin with
     * <code>prod</code>, such as <code>production</code> and <code>prod-1</code>.</p>
     */
    inline void SetRotationNamePrefix(Aws::String&& value) { m_rotationNamePrefixHasBeenSet = true; m_rotationNamePrefix = std::move(value); }

    /**
     * <p>A filter to include rotations in list results based on their common prefix.
     * For example, entering prod returns a list of all rotation names that begin with
     * <code>prod</code>, such as <code>production</code> and <code>prod-1</code>.</p>
     */
    inline void SetRotationNamePrefix(const char* value) { m_rotationNamePrefixHasBeenSet = true; m_rotationNamePrefix.assign(value); }

    /**
     * <p>A filter to include rotations in list results based on their common prefix.
     * For example, entering prod returns a list of all rotation names that begin with
     * <code>prod</code>, such as <code>production</code> and <code>prod-1</code>.</p>
     */
    inline ListRotationsRequest& WithRotationNamePrefix(const Aws::String& value) { SetRotationNamePrefix(value); return *this;}

    /**
     * <p>A filter to include rotations in list results based on their common prefix.
     * For example, entering prod returns a list of all rotation names that begin with
     * <code>prod</code>, such as <code>production</code> and <code>prod-1</code>.</p>
     */
    inline ListRotationsRequest& WithRotationNamePrefix(Aws::String&& value) { SetRotationNamePrefix(std::move(value)); return *this;}

    /**
     * <p>A filter to include rotations in list results based on their common prefix.
     * For example, entering prod returns a list of all rotation names that begin with
     * <code>prod</code>, such as <code>production</code> and <code>prod-1</code>.</p>
     */
    inline ListRotationsRequest& WithRotationNamePrefix(const char* value) { SetRotationNamePrefix(value); return *this;}


    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListRotationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListRotationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListRotationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListRotationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_rotationNamePrefix;
    bool m_rotationNamePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
