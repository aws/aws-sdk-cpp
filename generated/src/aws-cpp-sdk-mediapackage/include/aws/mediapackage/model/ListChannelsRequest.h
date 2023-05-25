/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaPackage
{
namespace Model
{

  /**
   */
  class ListChannelsRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API ListChannelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannels"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;

    AWS_MEDIAPACKAGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Upper bound on number of records to return.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Upper bound on number of records to return.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * Upper bound on number of records to return.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Upper bound on number of records to return.
     */
    inline ListChannelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListChannelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListChannelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListChannelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
