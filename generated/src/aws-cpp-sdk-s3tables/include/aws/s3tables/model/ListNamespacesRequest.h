/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Tables
{
namespace Model
{

  /**
   */
  class ListNamespacesRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API ListNamespacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNamespaces"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;

    AWS_S3TABLES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket.</p>
     */
    inline const Aws::String& GetTableBucketARN() const{ return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    inline void SetTableBucketARN(const Aws::String& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = value; }
    inline void SetTableBucketARN(Aws::String&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::move(value); }
    inline void SetTableBucketARN(const char* value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN.assign(value); }
    inline ListNamespacesRequest& WithTableBucketARN(const Aws::String& value) { SetTableBucketARN(value); return *this;}
    inline ListNamespacesRequest& WithTableBucketARN(Aws::String&& value) { SetTableBucketARN(std::move(value)); return *this;}
    inline ListNamespacesRequest& WithTableBucketARN(const char* value) { SetTableBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the namespaces.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline ListNamespacesRequest& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline ListNamespacesRequest& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline ListNamespacesRequest& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>ContinuationToken</code> indicates to Amazon S3 that the list is being
     * continued on this bucket with a token. <code>ContinuationToken</code> is
     * obfuscated and is not a real key. You can use this
     * <code>ContinuationToken</code> for pagination of the list results.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }
    inline bool ContinuationTokenHasBeenSet() const { return m_continuationTokenHasBeenSet; }
    inline void SetContinuationToken(const Aws::String& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }
    inline void SetContinuationToken(Aws::String&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::move(value); }
    inline void SetContinuationToken(const char* value) { m_continuationTokenHasBeenSet = true; m_continuationToken.assign(value); }
    inline ListNamespacesRequest& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}
    inline ListNamespacesRequest& WithContinuationToken(Aws::String&& value) { SetContinuationToken(std::move(value)); return *this;}
    inline ListNamespacesRequest& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of namespaces to return in the list.</p>
     */
    inline int GetMaxNamespaces() const{ return m_maxNamespaces; }
    inline bool MaxNamespacesHasBeenSet() const { return m_maxNamespacesHasBeenSet; }
    inline void SetMaxNamespaces(int value) { m_maxNamespacesHasBeenSet = true; m_maxNamespaces = value; }
    inline ListNamespacesRequest& WithMaxNamespaces(int value) { SetMaxNamespaces(value); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    int m_maxNamespaces;
    bool m_maxNamespacesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
