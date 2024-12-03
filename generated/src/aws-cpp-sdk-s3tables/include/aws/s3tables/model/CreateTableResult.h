/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
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
namespace S3Tables
{
namespace Model
{
  class CreateTableResult
  {
  public:
    AWS_S3TABLES_API CreateTableResult();
    AWS_S3TABLES_API CreateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API CreateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const{ return m_tableARN; }
    inline void SetTableARN(const Aws::String& value) { m_tableARN = value; }
    inline void SetTableARN(Aws::String&& value) { m_tableARN = std::move(value); }
    inline void SetTableARN(const char* value) { m_tableARN.assign(value); }
    inline CreateTableResult& WithTableARN(const Aws::String& value) { SetTableARN(value); return *this;}
    inline CreateTableResult& WithTableARN(Aws::String&& value) { SetTableARN(std::move(value)); return *this;}
    inline CreateTableResult& WithTableARN(const char* value) { SetTableARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version token of the table.</p>
     */
    inline const Aws::String& GetVersionToken() const{ return m_versionToken; }
    inline void SetVersionToken(const Aws::String& value) { m_versionToken = value; }
    inline void SetVersionToken(Aws::String&& value) { m_versionToken = std::move(value); }
    inline void SetVersionToken(const char* value) { m_versionToken.assign(value); }
    inline CreateTableResult& WithVersionToken(const Aws::String& value) { SetVersionToken(value); return *this;}
    inline CreateTableResult& WithVersionToken(Aws::String&& value) { SetVersionToken(std::move(value)); return *this;}
    inline CreateTableResult& WithVersionToken(const char* value) { SetVersionToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tableARN;

    Aws::String m_versionToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
