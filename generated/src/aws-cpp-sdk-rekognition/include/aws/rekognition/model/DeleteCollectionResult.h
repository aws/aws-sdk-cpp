/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{
  class DeleteCollectionResult
  {
  public:
    AWS_REKOGNITION_API DeleteCollectionResult();
    AWS_REKOGNITION_API DeleteCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DeleteCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>HTTP status code that indicates the result of the operation.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>HTTP status code that indicates the result of the operation.</p>
     */
    inline void SetStatusCode(int value) { m_statusCode = value; }

    /**
     * <p>HTTP status code that indicates the result of the operation.</p>
     */
    inline DeleteCollectionResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}

  private:

    int m_statusCode;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
