/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/model/TableBucketType.h>
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
  class ListTableBucketsRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API ListTableBucketsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTableBuckets"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;

    AWS_S3TABLES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The prefix of the table buckets.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ListTableBucketsRequest& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>ContinuationToken</code> indicates to Amazon S3 that the list is being
     * continued on this bucket with a token. <code>ContinuationToken</code> is
     * obfuscated and is not a real key. You can use this
     * <code>ContinuationToken</code> for pagination of the list results.</p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    inline bool ContinuationTokenHasBeenSet() const { return m_continuationTokenHasBeenSet; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    ListTableBucketsRequest& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of table buckets to return in the list.</p>
     */
    inline int GetMaxBuckets() const { return m_maxBuckets; }
    inline bool MaxBucketsHasBeenSet() const { return m_maxBucketsHasBeenSet; }
    inline void SetMaxBuckets(int value) { m_maxBucketsHasBeenSet = true; m_maxBuckets = value; }
    inline ListTableBucketsRequest& WithMaxBuckets(int value) { SetMaxBuckets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of table buckets to filter by in the list.</p>
     */
    inline TableBucketType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TableBucketType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListTableBucketsRequest& WithType(TableBucketType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    int m_maxBuckets{0};
    bool m_maxBucketsHasBeenSet = false;

    TableBucketType m_type{TableBucketType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
