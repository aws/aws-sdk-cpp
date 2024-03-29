/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/Format.h>
#include <aws/neptune-graph/model/ImportTaskStatus.h>
#include <aws/neptune-graph/model/ImportOptions.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class StartImportTaskResult
  {
  public:
    AWS_NEPTUNEGRAPH_API StartImportTaskResult();
    AWS_NEPTUNEGRAPH_API StartImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API StartImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphId() const{ return m_graphId; }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphId(const Aws::String& value) { m_graphId = value; }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphId(Aws::String&& value) { m_graphId = std::move(value); }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphId(const char* value) { m_graphId.assign(value); }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline StartImportTaskResult& WithGraphId(const Aws::String& value) { SetGraphId(value); return *this;}

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline StartImportTaskResult& WithGraphId(Aws::String&& value) { SetGraphId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline StartImportTaskResult& WithGraphId(const char* value) { SetGraphId(value); return *this;}


    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline StartImportTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline StartImportTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline StartImportTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline void SetSource(const Aws::String& value) { m_source = value; }

    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline void SetSource(Aws::String&& value) { m_source = std::move(value); }

    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline void SetSource(const char* value) { m_source.assign(value); }

    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline StartImportTaskResult& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline StartImportTaskResult& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline StartImportTaskResult& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>Specifies the format of Amazon S3 data to be imported. Valid values are CSV,
     * which identifies the Gremlin CSV format or OPENCYPHER, which identies the
     * openCypher load format.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>Specifies the format of Amazon S3 data to be imported. Valid values are CSV,
     * which identifies the Gremlin CSV format or OPENCYPHER, which identies the
     * openCypher load format.</p>
     */
    inline void SetFormat(const Format& value) { m_format = value; }

    /**
     * <p>Specifies the format of Amazon S3 data to be imported. Valid values are CSV,
     * which identifies the Gremlin CSV format or OPENCYPHER, which identies the
     * openCypher load format.</p>
     */
    inline void SetFormat(Format&& value) { m_format = std::move(value); }

    /**
     * <p>Specifies the format of Amazon S3 data to be imported. Valid values are CSV,
     * which identifies the Gremlin CSV format or OPENCYPHER, which identies the
     * openCypher load format.</p>
     */
    inline StartImportTaskResult& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>Specifies the format of Amazon S3 data to be imported. Valid values are CSV,
     * which identifies the Gremlin CSV format or OPENCYPHER, which identies the
     * openCypher load format.</p>
     */
    inline StartImportTaskResult& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline StartImportTaskResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline StartImportTaskResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline StartImportTaskResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the import task.</p>
     */
    inline const ImportTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the import task.</p>
     */
    inline void SetStatus(const ImportTaskStatus& value) { m_status = value; }

    /**
     * <p>The status of the import task.</p>
     */
    inline void SetStatus(ImportTaskStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the import task.</p>
     */
    inline StartImportTaskResult& WithStatus(const ImportTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the import task.</p>
     */
    inline StartImportTaskResult& WithStatus(ImportTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ImportOptions& GetImportOptions() const{ return m_importOptions; }

    
    inline void SetImportOptions(const ImportOptions& value) { m_importOptions = value; }

    
    inline void SetImportOptions(ImportOptions&& value) { m_importOptions = std::move(value); }

    
    inline StartImportTaskResult& WithImportOptions(const ImportOptions& value) { SetImportOptions(value); return *this;}

    
    inline StartImportTaskResult& WithImportOptions(ImportOptions&& value) { SetImportOptions(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartImportTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartImportTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartImportTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_graphId;

    Aws::String m_taskId;

    Aws::String m_source;

    Format m_format;

    Aws::String m_roleArn;

    ImportTaskStatus m_status;

    ImportOptions m_importOptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
