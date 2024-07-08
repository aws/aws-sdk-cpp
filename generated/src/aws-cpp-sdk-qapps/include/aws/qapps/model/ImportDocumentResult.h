/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
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
namespace QApps
{
namespace Model
{
  class ImportDocumentResult
  {
  public:
    AWS_QAPPS_API ImportDocumentResult();
    AWS_QAPPS_API ImportDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ImportDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier assigned to the uploaded file.</p>
     */
    inline const Aws::String& GetFileId() const{ return m_fileId; }
    inline void SetFileId(const Aws::String& value) { m_fileId = value; }
    inline void SetFileId(Aws::String&& value) { m_fileId = std::move(value); }
    inline void SetFileId(const char* value) { m_fileId.assign(value); }
    inline ImportDocumentResult& WithFileId(const Aws::String& value) { SetFileId(value); return *this;}
    inline ImportDocumentResult& WithFileId(Aws::String&& value) { SetFileId(std::move(value)); return *this;}
    inline ImportDocumentResult& WithFileId(const char* value) { SetFileId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fileId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
