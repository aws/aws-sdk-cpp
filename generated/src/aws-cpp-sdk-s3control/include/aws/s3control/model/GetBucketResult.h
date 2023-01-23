/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetBucketResult
  {
  public:
    AWS_S3CONTROL_API GetBucketResult();
    AWS_S3CONTROL_API GetBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Outposts bucket requested.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Outposts bucket requested.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucket = value; }

    /**
     * <p>The Outposts bucket requested.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucket = std::move(value); }

    /**
     * <p>The Outposts bucket requested.</p>
     */
    inline void SetBucket(const char* value) { m_bucket.assign(value); }

    /**
     * <p>The Outposts bucket requested.</p>
     */
    inline GetBucketResult& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Outposts bucket requested.</p>
     */
    inline GetBucketResult& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Outposts bucket requested.</p>
     */
    inline GetBucketResult& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetPublicAccessBlockEnabled() const{ return m_publicAccessBlockEnabled; }

    /**
     * <p/>
     */
    inline void SetPublicAccessBlockEnabled(bool value) { m_publicAccessBlockEnabled = value; }

    /**
     * <p/>
     */
    inline GetBucketResult& WithPublicAccessBlockEnabled(bool value) { SetPublicAccessBlockEnabled(value); return *this;}


    /**
     * <p>The creation date of the Outposts bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of the Outposts bucket.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The creation date of the Outposts bucket.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The creation date of the Outposts bucket.</p>
     */
    inline GetBucketResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of the Outposts bucket.</p>
     */
    inline GetBucketResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_bucket;

    bool m_publicAccessBlockEnabled;

    Aws::Utils::DateTime m_creationDate;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
