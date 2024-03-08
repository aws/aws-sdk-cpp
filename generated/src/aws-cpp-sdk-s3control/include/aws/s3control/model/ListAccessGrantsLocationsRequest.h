/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class ListAccessGrantsLocationsRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListAccessGrantsLocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessGrantsLocations"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline const Aws::String& GetLocationScope() const{ return m_locationScope; }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline bool LocationScopeHasBeenSet() const { return m_locationScopeHasBeenSet; }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline void SetLocationScope(const Aws::String& value) { m_locationScopeHasBeenSet = true; m_locationScope = value; }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline void SetLocationScope(Aws::String&& value) { m_locationScopeHasBeenSet = true; m_locationScope = std::move(value); }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline void SetLocationScope(const char* value) { m_locationScopeHasBeenSet = true; m_locationScope.assign(value); }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithLocationScope(const Aws::String& value) { SetLocationScope(value); return *this;}

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithLocationScope(Aws::String&& value) { SetLocationScope(std::move(value)); return *this;}

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline ListAccessGrantsLocationsRequest& WithLocationScope(const char* value) { SetLocationScope(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_locationScope;
    bool m_locationScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
