/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class GetResourceShareInvitationsRequest : public RAMRequest
  {
  public:
    AWS_RAM_API GetResourceShareInvitationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceShareInvitations"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareInvitationArns() const{ return m_resourceShareInvitationArns; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline bool ResourceShareInvitationArnsHasBeenSet() const { return m_resourceShareInvitationArnsHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline void SetResourceShareInvitationArns(const Aws::Vector<Aws::String>& value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline void SetResourceShareInvitationArns(Aws::Vector<Aws::String>&& value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline GetResourceShareInvitationsRequest& WithResourceShareInvitationArns(const Aws::Vector<Aws::String>& value) { SetResourceShareInvitationArns(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline GetResourceShareInvitationsRequest& WithResourceShareInvitationArns(Aws::Vector<Aws::String>&& value) { SetResourceShareInvitationArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareInvitationArns(const Aws::String& value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns.push_back(value); return *this; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareInvitationArns(Aws::String&& value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share invitations you want information
     * about.</p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareInvitationArns(const char* value) { m_resourceShareInvitationArnsHasBeenSet = true; m_resourceShareInvitationArns.push_back(value); return *this; }


    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareArns() const{ return m_resourceShareArns; }

    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }

    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline void SetResourceShareArns(const Aws::Vector<Aws::String>& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = value; }

    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline void SetResourceShareArns(Aws::Vector<Aws::String>&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = std::move(value); }

    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline GetResourceShareInvitationsRequest& WithResourceShareArns(const Aws::Vector<Aws::String>& value) { SetResourceShareArns(value); return *this;}

    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline GetResourceShareInvitationsRequest& WithResourceShareArns(Aws::Vector<Aws::String>&& value) { SetResourceShareArns(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareArns(const Aws::String& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }

    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareArns(Aws::String&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies that you want details about invitations only for the resource
     * shares described by this list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> </p>
     */
    inline GetResourceShareInvitationsRequest& AddResourceShareArns(const char* value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline GetResourceShareInvitationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline GetResourceShareInvitationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline GetResourceShareInvitationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline GetResourceShareInvitationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceShareInvitationArns;
    bool m_resourceShareInvitationArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceShareArns;
    bool m_resourceShareArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
