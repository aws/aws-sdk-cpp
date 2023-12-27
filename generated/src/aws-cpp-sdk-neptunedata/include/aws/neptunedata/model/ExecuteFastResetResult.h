/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/FastResetToken.h>
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
namespace neptunedata
{
namespace Model
{
  class ExecuteFastResetResult
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteFastResetResult();
    AWS_NEPTUNEDATA_API ExecuteFastResetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ExecuteFastResetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>status</code> is only returned for the
     * <code>performDatabaseReset</code> action, and indicates whether or not the fast
     * reset rquest is accepted.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The <code>status</code> is only returned for the
     * <code>performDatabaseReset</code> action, and indicates whether or not the fast
     * reset rquest is accepted.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The <code>status</code> is only returned for the
     * <code>performDatabaseReset</code> action, and indicates whether or not the fast
     * reset rquest is accepted.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The <code>status</code> is only returned for the
     * <code>performDatabaseReset</code> action, and indicates whether or not the fast
     * reset rquest is accepted.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The <code>status</code> is only returned for the
     * <code>performDatabaseReset</code> action, and indicates whether or not the fast
     * reset rquest is accepted.</p>
     */
    inline ExecuteFastResetResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The <code>status</code> is only returned for the
     * <code>performDatabaseReset</code> action, and indicates whether or not the fast
     * reset rquest is accepted.</p>
     */
    inline ExecuteFastResetResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The <code>status</code> is only returned for the
     * <code>performDatabaseReset</code> action, and indicates whether or not the fast
     * reset rquest is accepted.</p>
     */
    inline ExecuteFastResetResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The <code>payload</code> is only returned by the
     * <code>initiateDatabaseReset</code> action, and contains the unique token to use
     * with the <code>performDatabaseReset</code> action to make the reset occur.</p>
     */
    inline const FastResetToken& GetPayload() const{ return m_payload; }

    /**
     * <p>The <code>payload</code> is only returned by the
     * <code>initiateDatabaseReset</code> action, and contains the unique token to use
     * with the <code>performDatabaseReset</code> action to make the reset occur.</p>
     */
    inline void SetPayload(const FastResetToken& value) { m_payload = value; }

    /**
     * <p>The <code>payload</code> is only returned by the
     * <code>initiateDatabaseReset</code> action, and contains the unique token to use
     * with the <code>performDatabaseReset</code> action to make the reset occur.</p>
     */
    inline void SetPayload(FastResetToken&& value) { m_payload = std::move(value); }

    /**
     * <p>The <code>payload</code> is only returned by the
     * <code>initiateDatabaseReset</code> action, and contains the unique token to use
     * with the <code>performDatabaseReset</code> action to make the reset occur.</p>
     */
    inline ExecuteFastResetResult& WithPayload(const FastResetToken& value) { SetPayload(value); return *this;}

    /**
     * <p>The <code>payload</code> is only returned by the
     * <code>initiateDatabaseReset</code> action, and contains the unique token to use
     * with the <code>performDatabaseReset</code> action to make the reset occur.</p>
     */
    inline ExecuteFastResetResult& WithPayload(FastResetToken&& value) { SetPayload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExecuteFastResetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExecuteFastResetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExecuteFastResetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    FastResetToken m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
