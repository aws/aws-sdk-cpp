/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

  /**
   */
  class ListIndexesRequest : public S3VectorsRequest
  {
  public:
    AWS_S3VECTORS_API ListIndexesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIndexes"; }

    AWS_S3VECTORS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the vector bucket that contains the vector indexes. </p>
     */
    inline const Aws::String& GetVectorBucketName() const { return m_vectorBucketName; }
    inline bool VectorBucketNameHasBeenSet() const { return m_vectorBucketNameHasBeenSet; }
    template<typename VectorBucketNameT = Aws::String>
    void SetVectorBucketName(VectorBucketNameT&& value) { m_vectorBucketNameHasBeenSet = true; m_vectorBucketName = std::forward<VectorBucketNameT>(value); }
    template<typename VectorBucketNameT = Aws::String>
    ListIndexesRequest& WithVectorBucketName(VectorBucketNameT&& value) { SetVectorBucketName(std::forward<VectorBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the vector bucket that contains the vector indexes.</p>
     */
    inline const Aws::String& GetVectorBucketArn() const { return m_vectorBucketArn; }
    inline bool VectorBucketArnHasBeenSet() const { return m_vectorBucketArnHasBeenSet; }
    template<typename VectorBucketArnT = Aws::String>
    void SetVectorBucketArn(VectorBucketArnT&& value) { m_vectorBucketArnHasBeenSet = true; m_vectorBucketArn = std::forward<VectorBucketArnT>(value); }
    template<typename VectorBucketArnT = Aws::String>
    ListIndexesRequest& WithVectorBucketArn(VectorBucketArnT&& value) { SetVectorBucketArn(std::forward<VectorBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be returned in the response. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListIndexesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous pagination token. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIndexesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the response to vector indexes that begin with the specified
     * prefix.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ListIndexesRequest& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vectorBucketName;
    bool m_vectorBucketNameHasBeenSet = false;

    Aws::String m_vectorBucketArn;
    bool m_vectorBucketArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
