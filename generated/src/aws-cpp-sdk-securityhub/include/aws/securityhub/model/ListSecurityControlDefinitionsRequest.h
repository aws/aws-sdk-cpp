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
    AWS_SECURITYHUB_API ListSecurityControlDefinitionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSecurityControlDefinitions"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the standard that you want to view
     * controls for. </p>
     */
    inline const Aws::String& GetStandardsArn() const { return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    template<typename StandardsArnT = Aws::String>
    void SetStandardsArn(StandardsArnT&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::forward<StandardsArnT>(value); }
    template<typename StandardsArnT = Aws::String>
    ListSecurityControlDefinitionsRequest& WithStandardsArn(StandardsArnT&& value) { SetStandardsArn(std::forward<StandardsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Optional pagination parameter. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSecurityControlDefinitionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional parameter that limits the total results of the API response to
     * the specified number. If this parameter isn't provided in the request, the
     * results include the first 25 security controls that apply to the specified
     * standard. The results also include a <code>NextToken</code> parameter that you
     * can use in a subsequent API call to get the next 25 controls. This repeats until
     * all controls for the standard are returned. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSecurityControlDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
