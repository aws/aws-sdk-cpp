/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ImportJobsResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetImportJobsResult
  {
  public:
    AWS_PINPOINT_API GetImportJobsResult();
    AWS_PINPOINT_API GetImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ImportJobsResponse& GetImportJobsResponse() const{ return m_importJobsResponse; }

    
    inline void SetImportJobsResponse(const ImportJobsResponse& value) { m_importJobsResponse = value; }

    
    inline void SetImportJobsResponse(ImportJobsResponse&& value) { m_importJobsResponse = std::move(value); }

    
    inline GetImportJobsResult& WithImportJobsResponse(const ImportJobsResponse& value) { SetImportJobsResponse(value); return *this;}

    
    inline GetImportJobsResult& WithImportJobsResponse(ImportJobsResponse&& value) { SetImportJobsResponse(std::move(value)); return *this;}

  private:

    ImportJobsResponse m_importJobsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
