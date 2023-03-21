/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ExportTask.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace mgn
{
namespace Model
{
  /**
   * <p>Start export response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartExportResponse">AWS
   * API Reference</a></p>
   */
  class StartExportResult
  {
  public:
    AWS_MGN_API StartExportResult();
    AWS_MGN_API StartExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API StartExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Start export response export task.</p>
     */
    inline const ExportTask& GetExportTask() const{ return m_exportTask; }

    /**
     * <p>Start export response export task.</p>
     */
    inline void SetExportTask(const ExportTask& value) { m_exportTask = value; }

    /**
     * <p>Start export response export task.</p>
     */
    inline void SetExportTask(ExportTask&& value) { m_exportTask = std::move(value); }

    /**
     * <p>Start export response export task.</p>
     */
    inline StartExportResult& WithExportTask(const ExportTask& value) { SetExportTask(value); return *this;}

    /**
     * <p>Start export response export task.</p>
     */
    inline StartExportResult& WithExportTask(ExportTask&& value) { SetExportTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ExportTask m_exportTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
