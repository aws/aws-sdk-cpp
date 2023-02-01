/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ExportJobResponse.h>
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
  class CreateExportJobResult
  {
  public:
    AWS_PINPOINT_API CreateExportJobResult();
    AWS_PINPOINT_API CreateExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API CreateExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ExportJobResponse& GetExportJobResponse() const{ return m_exportJobResponse; }

    
    inline void SetExportJobResponse(const ExportJobResponse& value) { m_exportJobResponse = value; }

    
    inline void SetExportJobResponse(ExportJobResponse&& value) { m_exportJobResponse = std::move(value); }

    
    inline CreateExportJobResult& WithExportJobResponse(const ExportJobResponse& value) { SetExportJobResponse(value); return *this;}

    
    inline CreateExportJobResult& WithExportJobResponse(ExportJobResponse&& value) { SetExportJobResponse(std::move(value)); return *this;}

  private:

    ExportJobResponse m_exportJobResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
