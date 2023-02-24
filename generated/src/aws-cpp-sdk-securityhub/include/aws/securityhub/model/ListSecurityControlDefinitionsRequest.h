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
  class ListSecurityControlDefinitionsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API ListSecurityControlDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSecurityControlDefinitions"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline ListSecurityControlDefinitionsRequest& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline ListSecurityControlDefinitionsRequest& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline ListSecurityControlDefinitionsRequest& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}


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
    inline ListSecurityControlDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline ListSecurityControlDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Optional pagination parameter. </p>
     */
    inline ListSecurityControlDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 security controls that apply to the specified
     * standard. The results also include a <code>NextToken</code> parameter that you
     * can use in a subsequent API call to get the next 25 controls. This repeats until
     * all controls for the standard are returned. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 security controls that apply to the specified
     * standard. The results also include a <code>NextToken</code> parameter that you
     * can use in a subsequent API call to get the next 25 controls. This repeats until
     * all controls for the standard are returned. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 security controls that apply to the specified
     * standard. The results also include a <code>NextToken</code> parameter that you
     * can use in a subsequent API call to get the next 25 controls. This repeats until
     * all controls for the standard are returned. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 security controls that apply to the specified
     * standard. The results also include a <code>NextToken</code> parameter that you
     * can use in a subsequent API call to get the next 25 controls. This repeats until
     * all controls for the standard are returned. </p>
     */
    inline ListSecurityControlDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
