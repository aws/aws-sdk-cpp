/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{
  class AssociatePermissionResult
  {
  public:
    AWS_QBUSINESS_API AssociatePermissionResult();
    AWS_QBUSINESS_API AssociatePermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API AssociatePermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The JSON representation of the added permission statement.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }
    inline void SetStatement(const Aws::String& value) { m_statement = value; }
    inline void SetStatement(Aws::String&& value) { m_statement = std::move(value); }
    inline void SetStatement(const char* value) { m_statement.assign(value); }
    inline AssociatePermissionResult& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}
    inline AssociatePermissionResult& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}
    inline AssociatePermissionResult& WithStatement(const char* value) { SetStatement(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociatePermissionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociatePermissionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociatePermissionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_statement;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
