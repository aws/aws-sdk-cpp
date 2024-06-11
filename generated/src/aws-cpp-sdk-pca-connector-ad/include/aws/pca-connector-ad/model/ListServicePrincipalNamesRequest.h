/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class ListServicePrincipalNamesRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API ListServicePrincipalNamesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServicePrincipalNames"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;

    AWS_PCACONNECTORAD_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline const Aws::String& GetDirectoryRegistrationArn() const{ return m_directoryRegistrationArn; }
    inline bool DirectoryRegistrationArnHasBeenSet() const { return m_directoryRegistrationArnHasBeenSet; }
    inline void SetDirectoryRegistrationArn(const Aws::String& value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn = value; }
    inline void SetDirectoryRegistrationArn(Aws::String&& value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn = std::move(value); }
    inline void SetDirectoryRegistrationArn(const char* value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn.assign(value); }
    inline ListServicePrincipalNamesRequest& WithDirectoryRegistrationArn(const Aws::String& value) { SetDirectoryRegistrationArn(value); return *this;}
    inline ListServicePrincipalNamesRequest& WithDirectoryRegistrationArn(Aws::String&& value) { SetDirectoryRegistrationArn(std::move(value)); return *this;}
    inline ListServicePrincipalNamesRequest& WithDirectoryRegistrationArn(const char* value) { SetDirectoryRegistrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response on each page. If additional items exist beyond
     * the number you specify, the <code>NextToken</code> element is sent in the
     * response. Use this <code>NextToken</code> value in a subsequent request to
     * retrieve additional items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServicePrincipalNamesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListServicePrincipalNamesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServicePrincipalNamesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServicePrincipalNamesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryRegistrationArn;
    bool m_directoryRegistrationArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
