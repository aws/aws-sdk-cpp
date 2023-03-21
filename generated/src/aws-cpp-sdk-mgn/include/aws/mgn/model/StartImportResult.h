/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ImportTask.h>
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
   * <p>Start import response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartImportResponse">AWS
   * API Reference</a></p>
   */
  class StartImportResult
  {
  public:
    AWS_MGN_API StartImportResult();
    AWS_MGN_API StartImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API StartImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Start import response import task.</p>
     */
    inline const ImportTask& GetImportTask() const{ return m_importTask; }

    /**
     * <p>Start import response import task.</p>
     */
    inline void SetImportTask(const ImportTask& value) { m_importTask = value; }

    /**
     * <p>Start import response import task.</p>
     */
    inline void SetImportTask(ImportTask&& value) { m_importTask = std::move(value); }

    /**
     * <p>Start import response import task.</p>
     */
    inline StartImportResult& WithImportTask(const ImportTask& value) { SetImportTask(value); return *this;}

    /**
     * <p>Start import response import task.</p>
     */
    inline StartImportResult& WithImportTask(ImportTask&& value) { SetImportTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ImportTask m_importTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
