/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters of DeleteDataLakeDataset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DeleteDataLakeDatasetResponse">AWS
   * API Reference</a></p>
   */
  class DeleteDataLakeDatasetResult
  {
  public:
    AWS_SUPPLYCHAIN_API DeleteDataLakeDatasetResult();
    AWS_SUPPLYCHAIN_API DeleteDataLakeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API DeleteDataLakeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline DeleteDataLakeDatasetResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteDataLakeDatasetResult& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteDataLakeDatasetResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name space of deleted dataset.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }
    inline DeleteDataLakeDatasetResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline DeleteDataLakeDatasetResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline DeleteDataLakeDatasetResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of deleted dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DeleteDataLakeDatasetResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteDataLakeDatasetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteDataLakeDatasetResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteDataLakeDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteDataLakeDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteDataLakeDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;

    Aws::String m_namespace;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
