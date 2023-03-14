/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{
  class CancelStatementResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API CancelStatementResult();
    AWS_REDSHIFTDATAAPISERVICE_API CancelStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API CancelStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A value that indicates whether the cancel statement succeeded (true). </p>
     */
    inline bool GetStatus() const{ return m_status; }

    /**
     * <p>A value that indicates whether the cancel statement succeeded (true). </p>
     */
    inline void SetStatus(bool value) { m_status = value; }

    /**
     * <p>A value that indicates whether the cancel statement succeeded (true). </p>
     */
    inline CancelStatementResult& WithStatus(bool value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
