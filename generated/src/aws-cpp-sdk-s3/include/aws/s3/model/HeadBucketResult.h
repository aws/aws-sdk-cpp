/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class HeadBucketResult
  {
  public:
    AWS_S3_API HeadBucketResult() = default;
    AWS_S3_API HeadBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API HeadBucketResult(Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>&& result);
    AWS_S3_API HeadBucketResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument> result);


    /**
     * <p>Region of the bucket. If it's any empty string, this response header does not appear in the response.</p>
     */
    inline const Aws::String & GetRegion() const{ return m_region; }

    /**
     * <p>Set region for the bucket.</p>
     */
    inline void SetRegion(Aws::String value) { m_region = std::move(value); }

  private:

    Aws::String m_region;

  };

} // namespace Model
} // namespace S3
} // namespace Aws
