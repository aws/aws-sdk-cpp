/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class ListStandardsControlAssociationsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API ListStandardsControlAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStandardsControlAssociations"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The identifier of the control (identified with
     * <code>SecurityControlId</code>, <code>SecurityControlArn</code>, or a mix of
     * both parameters) that you want to determine the enablement status of in each
     * enabled standard. </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }

    /**
     * <p> The identifier of the control (identified with
     * <code>SecurityControlId</code>, <code>SecurityControlArn</code>, or a mix of
     * both parameters) that you want to determine the enablement status of in each
     * enabled standard. </p>
     */
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }

    /**
     * <p> The identifier of the control (identified with
     * <code>SecurityControlId</code>, <code>SecurityControlArn</code>, or a mix of
     * both parameters) that you want to determine the enablement status of in each
     * enabled standard. </p>
     */
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }

    /**
     * <p> The identifier of the control (identified with
     * <code>SecurityControlId</code>, <code>SecurityControlArn</code>, or a mix of
     * both parameters) that you want to determine the enablement status of in each
     * enabled standard. </p>
     */
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }

    /**
     * <p> The identifier of the control (identified with
     * <code>SecurityControlId</code>, <code>SecurityControlArn</code>, or a mix of
     * both parameters) that you want to determine the enablement status of in each
     * enabled standard. </p>
     */
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }

    /**
     * <p> The identifier of the control (identified with
     * <code>SecurityControlId</code>, <code>SecurityControlArn</code>, or a mix of
     * both parameters) that you want to determine the enablement status of in each
     * enabled standard. </p>
     */
    inline ListStandardsControlAssociationsRequest& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p> The identifier of the control (identified with
     * <code>SecurityControlId</code>, <code>SecurityControlArn</code>, or a mix of
     * both parameters) that you want to determine the enablement status of in each
     * enabled standard. </p>
     */
    inline ListStandardsControlAssociationsRequest& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the control (identified with
     * <code>SecurityControlId</code>, <code>SecurityControlArn</code>, or a mix of
     * both parameters) that you want to determine the enablement status of in each
     * enabled standard. </p>
     */
    inline ListStandardsControlAssociationsRequest& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}


    /**
     * <p> Optional pagination parameter. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline ListStandardsControlAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline ListStandardsControlAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline ListStandardsControlAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 standard and control associations. The results also
     * include a <code>NextToken</code> parameter that you can use in a subsequent API
     * call to get the next 25 associations. This repeats until all associations for
     * the specified control are returned. The number of results is limited by the
     * number of supported Security Hub standards that you've enabled in the calling
     * account. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 standard and control associations. The results also
     * include a <code>NextToken</code> parameter that you can use in a subsequent API
     * call to get the next 25 associations. This repeats until all associations for
     * the specified control are returned. The number of results is limited by the
     * number of supported Security Hub standards that you've enabled in the calling
     * account. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 standard and control associations. The results also
     * include a <code>NextToken</code> parameter that you can use in a subsequent API
     * call to get the next 25 associations. This repeats until all associations for
     * the specified control are returned. The number of results is limited by the
     * number of supported Security Hub standards that you've enabled in the calling
     * account. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 standard and control associations. The results also
     * include a <code>NextToken</code> parameter that you can use in a subsequent API
     * call to get the next 25 associations. This repeats until all associations for
     * the specified control are returned. The number of results is limited by the
     * number of supported Security Hub standards that you've enabled in the calling
     * account. </p>
     */
    inline ListStandardsControlAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
