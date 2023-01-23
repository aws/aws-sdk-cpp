/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DocumentDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class DescribeDocumentResult
  {
  public:
    AWS_SSM_API DescribeDocumentResult();
    AWS_SSM_API DescribeDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the SSM document.</p>
     */
    inline const DocumentDescription& GetDocument() const{ return m_document; }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline void SetDocument(const DocumentDescription& value) { m_document = value; }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline void SetDocument(DocumentDescription&& value) { m_document = std::move(value); }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline DescribeDocumentResult& WithDocument(const DocumentDescription& value) { SetDocument(value); return *this;}

    /**
     * <p>Information about the SSM document.</p>
     */
    inline DescribeDocumentResult& WithDocument(DocumentDescription&& value) { SetDocument(std::move(value)); return *this;}

  private:

    DocumentDescription m_document;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
