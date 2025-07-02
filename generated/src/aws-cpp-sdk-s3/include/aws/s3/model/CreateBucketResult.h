/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class CreateBucketResult
  {
  public:
    AWS_S3_API CreateBucketResult() = default;
    AWS_S3_API CreateBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API CreateBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A forward slash followed by the name of the bucket.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateBucketResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket. ARNs uniquely identify
     * Amazon Web Services resources across all of Amazon Web Services.</p> 
     * <p>This parameter is only supported for S3 directory buckets. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-tagging.html">Using
     * tags with directory buckets</a>.</p> 
     */
    inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
    template<typename BucketArnT = Aws::String>
    void SetBucketArn(BucketArnT&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::forward<BucketArnT>(value); }
    template<typename BucketArnT = Aws::String>
    CreateBucketResult& WithBucketArn(BucketArnT&& value) { SetBucketArn(std::forward<BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBucketResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
