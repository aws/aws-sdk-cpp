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
    AWS_S3TABLES_API CreateTableResult() = default;
    AWS_S3TABLES_API CreateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API CreateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const { return m_tableARN; }
    template<typename TableARNT = Aws::String>
    void SetTableARN(TableARNT&& value) { m_tableARNHasBeenSet = true; m_tableARN = std::forward<TableARNT>(value); }
    template<typename TableARNT = Aws::String>
    CreateTableResult& WithTableARN(TableARNT&& value) { SetTableARN(std::forward<TableARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version token of the table.</p>
     */
    inline const Aws::String& GetVersionToken() const { return m_versionToken; }
    template<typename VersionTokenT = Aws::String>
    void SetVersionToken(VersionTokenT&& value) { m_versionTokenHasBeenSet = true; m_versionToken = std::forward<VersionTokenT>(value); }
    template<typename VersionTokenT = Aws::String>
    CreateTableResult& WithVersionToken(VersionTokenT&& value) { SetVersionToken(std::forward<VersionTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableARN;
    bool m_tableARNHasBeenSet = false;

    Aws::String m_versionToken;
    bool m_versionTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
