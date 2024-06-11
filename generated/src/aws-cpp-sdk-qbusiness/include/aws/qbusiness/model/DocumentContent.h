﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/qbusiness/model/S3.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The contents of a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentContent">AWS
   * API Reference</a></p>
   */
  class DocumentContent
  {
  public:
    AWS_QBUSINESS_API DocumentContent();
    AWS_QBUSINESS_API DocumentContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contents of the document. Documents passed to the <code>blob</code>
     * parameter must be base64 encoded. Your code might not need to encode the
     * document file bytes if you're using an Amazon Web Services SDK to call Amazon Q
     * Business APIs. If you are calling the Amazon Q Business endpoint directly using
     * REST, you must base64 encode the contents before sending.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlob() const{ return m_blob; }
    inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
    inline void SetBlob(const Aws::Utils::ByteBuffer& value) { m_blobHasBeenSet = true; m_blob = value; }
    inline void SetBlob(Aws::Utils::ByteBuffer&& value) { m_blobHasBeenSet = true; m_blob = std::move(value); }
    inline DocumentContent& WithBlob(const Aws::Utils::ByteBuffer& value) { SetBlob(value); return *this;}
    inline DocumentContent& WithBlob(Aws::Utils::ByteBuffer&& value) { SetBlob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the document in an Amazon S3 bucket.</p>
     */
    inline const S3& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const S3& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(S3&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline DocumentContent& WithS3(const S3& value) { SetS3(value); return *this;}
    inline DocumentContent& WithS3(S3&& value) { SetS3(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_blob;
    bool m_blobHasBeenSet = false;

    S3 m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
