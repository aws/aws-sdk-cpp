/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/AsyncOperation.h>
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
  class DescribeMultiRegionAccessPointOperationResult
  {
  public:
    AWS_S3CONTROL_API DescribeMultiRegionAccessPointOperationResult();
    AWS_S3CONTROL_API DescribeMultiRegionAccessPointOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API DescribeMultiRegionAccessPointOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A container element containing the details of the asynchronous operation.</p>
     */
    inline const AsyncOperation& GetAsyncOperation() const{ return m_asyncOperation; }

    /**
     * <p>A container element containing the details of the asynchronous operation.</p>
     */
    inline void SetAsyncOperation(const AsyncOperation& value) { m_asyncOperation = value; }

    /**
     * <p>A container element containing the details of the asynchronous operation.</p>
     */
    inline void SetAsyncOperation(AsyncOperation&& value) { m_asyncOperation = std::move(value); }

    /**
     * <p>A container element containing the details of the asynchronous operation.</p>
     */
    inline DescribeMultiRegionAccessPointOperationResult& WithAsyncOperation(const AsyncOperation& value) { SetAsyncOperation(value); return *this;}

    /**
     * <p>A container element containing the details of the asynchronous operation.</p>
     */
    inline DescribeMultiRegionAccessPointOperationResult& WithAsyncOperation(AsyncOperation&& value) { SetAsyncOperation(std::move(value)); return *this;}

  private:

    AsyncOperation m_asyncOperation;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
