/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3Tag.h>
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
namespace S3Control
{
namespace Model
{
  class GetJobTaggingResult
  {
  public:
    AWS_S3CONTROL_API GetJobTaggingResult();
    AWS_S3CONTROL_API GetJobTaggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetJobTaggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The set of tags associated with the S3 Batch Operations job.</p>
     */
    inline const Aws::Vector<S3Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The set of tags associated with the S3 Batch Operations job.</p>
     */
    inline void SetTags(const Aws::Vector<S3Tag>& value) { m_tags = value; }

    /**
     * <p>The set of tags associated with the S3 Batch Operations job.</p>
     */
    inline void SetTags(Aws::Vector<S3Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The set of tags associated with the S3 Batch Operations job.</p>
     */
    inline GetJobTaggingResult& WithTags(const Aws::Vector<S3Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The set of tags associated with the S3 Batch Operations job.</p>
     */
    inline GetJobTaggingResult& WithTags(Aws::Vector<S3Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The set of tags associated with the S3 Batch Operations job.</p>
     */
    inline GetJobTaggingResult& AddTags(const S3Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The set of tags associated with the S3 Batch Operations job.</p>
     */
    inline GetJobTaggingResult& AddTags(S3Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<S3Tag> m_tags;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
