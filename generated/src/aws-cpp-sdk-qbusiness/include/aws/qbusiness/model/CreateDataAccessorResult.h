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
  class CreateDataAccessorResult
  {
  public:
    AWS_QBUSINESS_API CreateDataAccessorResult();
    AWS_QBUSINESS_API CreateDataAccessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateDataAccessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the created data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorId() const{ return m_dataAccessorId; }
    inline void SetDataAccessorId(const Aws::String& value) { m_dataAccessorId = value; }
    inline void SetDataAccessorId(Aws::String&& value) { m_dataAccessorId = std::move(value); }
    inline void SetDataAccessorId(const char* value) { m_dataAccessorId.assign(value); }
    inline CreateDataAccessorResult& WithDataAccessorId(const Aws::String& value) { SetDataAccessorId(value); return *this;}
    inline CreateDataAccessorResult& WithDataAccessorId(Aws::String&& value) { SetDataAccessorId(std::move(value)); return *this;}
    inline CreateDataAccessorResult& WithDataAccessorId(const char* value) { SetDataAccessorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS IAM Identity Center application
     * created for this data accessor.</p>
     */
    inline const Aws::String& GetIdcApplicationArn() const{ return m_idcApplicationArn; }
    inline void SetIdcApplicationArn(const Aws::String& value) { m_idcApplicationArn = value; }
    inline void SetIdcApplicationArn(Aws::String&& value) { m_idcApplicationArn = std::move(value); }
    inline void SetIdcApplicationArn(const char* value) { m_idcApplicationArn.assign(value); }
    inline CreateDataAccessorResult& WithIdcApplicationArn(const Aws::String& value) { SetIdcApplicationArn(value); return *this;}
    inline CreateDataAccessorResult& WithIdcApplicationArn(Aws::String&& value) { SetIdcApplicationArn(std::move(value)); return *this;}
    inline CreateDataAccessorResult& WithIdcApplicationArn(const char* value) { SetIdcApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorArn() const{ return m_dataAccessorArn; }
    inline void SetDataAccessorArn(const Aws::String& value) { m_dataAccessorArn = value; }
    inline void SetDataAccessorArn(Aws::String&& value) { m_dataAccessorArn = std::move(value); }
    inline void SetDataAccessorArn(const char* value) { m_dataAccessorArn.assign(value); }
    inline CreateDataAccessorResult& WithDataAccessorArn(const Aws::String& value) { SetDataAccessorArn(value); return *this;}
    inline CreateDataAccessorResult& WithDataAccessorArn(Aws::String&& value) { SetDataAccessorArn(std::move(value)); return *this;}
    inline CreateDataAccessorResult& WithDataAccessorArn(const char* value) { SetDataAccessorArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDataAccessorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDataAccessorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDataAccessorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataAccessorId;

    Aws::String m_idcApplicationArn;

    Aws::String m_dataAccessorArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
