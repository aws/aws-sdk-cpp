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
    AWS_QBUSINESS_API CreateDataAccessorResult() = default;
    AWS_QBUSINESS_API CreateDataAccessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateDataAccessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the created data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorId() const { return m_dataAccessorId; }
    template<typename DataAccessorIdT = Aws::String>
    void SetDataAccessorId(DataAccessorIdT&& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = std::forward<DataAccessorIdT>(value); }
    template<typename DataAccessorIdT = Aws::String>
    CreateDataAccessorResult& WithDataAccessorId(DataAccessorIdT&& value) { SetDataAccessorId(std::forward<DataAccessorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center application created
     * for this data accessor.</p>
     */
    inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
    template<typename IdcApplicationArnT = Aws::String>
    void SetIdcApplicationArn(IdcApplicationArnT&& value) { m_idcApplicationArnHasBeenSet = true; m_idcApplicationArn = std::forward<IdcApplicationArnT>(value); }
    template<typename IdcApplicationArnT = Aws::String>
    CreateDataAccessorResult& WithIdcApplicationArn(IdcApplicationArnT&& value) { SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorArn() const { return m_dataAccessorArn; }
    template<typename DataAccessorArnT = Aws::String>
    void SetDataAccessorArn(DataAccessorArnT&& value) { m_dataAccessorArnHasBeenSet = true; m_dataAccessorArn = std::forward<DataAccessorArnT>(value); }
    template<typename DataAccessorArnT = Aws::String>
    CreateDataAccessorResult& WithDataAccessorArn(DataAccessorArnT&& value) { SetDataAccessorArn(std::forward<DataAccessorArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDataAccessorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataAccessorId;
    bool m_dataAccessorIdHasBeenSet = false;

    Aws::String m_idcApplicationArn;
    bool m_idcApplicationArnHasBeenSet = false;

    Aws::String m_dataAccessorArn;
    bool m_dataAccessorArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
